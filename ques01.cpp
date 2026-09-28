#include <iostream>
using namespace std;

const int MAX_PLAYERS = 100;
const int MAX_HISTORY = 100;
const int MAX_COMMANDS = 1000;


// ---------------- PLAYER ----------------

class Player {
public:
    int id;
    int energy;

    // History stack for this player
    char history[MAX_HISTORY];
    int top;

    Player() {
        id = 0;
        energy = 100;
        top = -1;
    }

    Player(int playerID) {
        id = playerID;
        energy = 100;
        top = -1;
    }

    // Push action into history
    void push(char action) {
        if (top < MAX_HISTORY - 1) {
            top++;
            history[top] = action;
        }
    }

    // Pop most recent action
    char pop() {
        if (top == -1) {
            return '\0';
        }

        char action = history[top];
        top--;

        return action;
    }

    bool historyEmpty() {
        return top == -1;
    }

    int historySize() {
        return top + 1;
    }
};


// ---------------- QUEUE ----------------

class Queue {
private:
    int arr[MAX_PLAYERS];
    int front;
    int rear;
    int count;

public:

    Queue() {
        front = 0;
        rear = -1;
        count = 0;
    }

    bool isEmpty() {
        return count == 0;
    }

    void enqueue(int index) {

        if (count == MAX_PLAYERS) {
            return;
        }

        rear = (rear + 1) % MAX_PLAYERS;
        arr[rear] = index;
        count++;
    }

    int dequeue() {

        if (isEmpty()) {
            return -1;
        }

        int index = arr[front];

        front = (front + 1) % MAX_PLAYERS;
        count--;

        return index;
    }

    int size() {
        return count;
    }

    // Display players currently in queue
    void display(Player players[]) {

        int index = front;

        for (int i = 0; i < count; i++) {

            cout << players[arr[index]].id
                 << " (Energy: "
                 << players[arr[index]].energy
                 << ", Undo: "
                 << players[arr[index]].historySize()
                 << ")" << endl;

            index = (index + 1) % MAX_PLAYERS;
        }
    }
};


// ---------------- MAIN ----------------

int main() {

    Player players[MAX_PLAYERS];

    Queue waiting;

    int playerCount = 0;

    int eliminated[MAX_PLAYERS];
    int eliminatedCount = 0;

    int n;

    cout << "Enter number of commands: ";
    cin >> n;


    for (int i = 0; i < n; i++) {

        string command;

        cin >> command;


        // ---------------- ARRIVE ----------------

        if (command == "ARRIVE") {

            int id;
            cin >> id;

            players[playerCount] = Player(id);

            waiting.enqueue(playerCount);

            playerCount++;
        }


        // ---------------- F ----------------

        else if (command == "F") {

            if (waiting.isEmpty()) {
                continue;
            }

            int index = waiting.dequeue();

            Player& p = players[index];

            p.energy -= 10;

            // Remember F
            p.push('F');


            // Check elimination
            if (p.energy <= 0) {

                eliminated[eliminatedCount] = p.id;
                eliminatedCount++;
            }
            else {

                // Player goes to back
                waiting.enqueue(index);
            }
        }


        // ---------------- B ----------------

        else if (command == "B") {

            if (waiting.isEmpty()) {
                continue;
            }

            int index = waiting.dequeue();

            Player& p = players[index];

            // Remember B
            p.push('B');


            // B has no energy effect

            // Player is still active
            waiting.enqueue(index);
        }


        // ---------------- T ----------------

        else if (command == "T") {

            if (waiting.isEmpty()) {
                continue;
            }

            int index = waiting.dequeue();

            Player& p = players[index];

            p.energy += 20;

            // Remember T
            p.push('T');

            // Player goes to back
            waiting.enqueue(index);
        }


        // ---------------- U ----------------

        else if (command == "U") {

            if (waiting.isEmpty()) {
                continue;
            }

            int index = waiting.dequeue();

            Player& p = players[index];

            if (!p.historyEmpty()) {

                char action = p.pop();

                // Reverse the previous action

                if (action == 'F') {
                    p.energy += 10;
                }

                else if (action == 'B') {
                    // B had no effect
                }

                else if (action == 'T') {
                    p.energy -= 20;
                }
            }

            // U itself is NOT stored

            waiting.enqueue(index);
        }
    }


    // ---------------- FINAL OUTPUT ----------------

    cout << endl;
    cout << "----- GAME SUMMARY -----" << endl;


    cout << "Elimination order: ";

    if (eliminatedCount == 0) {
        cout << "None";
    }
    else {

        for (int i = 0; i < eliminatedCount; i++) {
            cout << eliminated[i] << " ";
        }
    }

    cout << endl;


    cout << endl;
    cout << "Active players:" << endl;

    if (waiting.isEmpty()) {

        cout << "None" << endl;
    }
    else {

        waiting.display(players);
    }


    return 0;
}