#include <iostream>
#include "node.h"

using namespace std;

struct Queue{
    node *rear, *front; //variables
    Queue(){ //construct queue
        rear = front = nullptr;
    }

        //enqueue
        void enqueue(int new_value){ //add a number to the back of the queue
            node *new_node; 
            new_node = new node();
            new_node->value = new_value;    //puts the new value into the new node

            if (front == nullptr){
                front = rear = new_node; 
                new_node->next = nullptr;
                rear = new_node;
                //replace front with new_value
            }
            else{
                new_node->next = rear; //pushes the queue numbers forward
                rear = new_node;      //to put the new value in last
            }
        }

        //dequeue, not when empty
        void dequeue(){
            node *temp;
            if (front == nullptr){
                cout << "The queue is empty." << endl;
            }
            else{
                temp = front;
                front = front->next;
                cout << "Deleting " << temp->value << endl; //shows what the front number is and that it's being dequeued
                delete temp;
            }
        }

        //peek, not when empty
        void display(){
            if (front != nullptr){
                cout << "Front is not NULL" << endl;
                cout << "Front Value: " << front->value << endl;
                cout << "Rear Value: " << rear->value << endl;
            }
            else{
                cout << "Front is NULL" << endl;
                //cout << "Front Value: " << front->value << endl;  //this makes the program stop and I don't know how to fix it
                cout << "Rear Value: " << rear->value << endl;
                cout << "Nothing further ahead!" << endl;
            }
        }
};
