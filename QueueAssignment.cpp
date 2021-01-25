#include <iostream>
#include "LinkedQueue.h"

using namespace std;


int main(){
    Queue q1;
    q1.enqueue(10);
    q1.enqueue(20);
    q1.enqueue(30);
    q1.display();

    int user_input;
    int enqueue_val;
    while (true){
        cout << "Enter 1 to add to the queue, 2 to subtract, 3 to view, or 4 to quit: " << endl;
        cin >> user_input;

        if (user_input == 1){
            cout << "Enter a number to add to the queue: " << endl;
            cin >> enqueue_val;
            q1.enqueue(enqueue_val);

        }

        else if (user_input == 2){  //If this is entered firs then the program stops and I don't know why
            q1.rear->value;
            q1.dequeue();
        }
        else if (user_input == 3){
            q1.display();
        }
        else{
            break;
        }
    }

    return 0;
}