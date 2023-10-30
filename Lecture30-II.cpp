// Lecture 30 II - Queue Pt 2

#include <iostream>
using namespace std;

class queue{
    public:
    int arr[1000];
    int  max_capacity;
    int front;
    int rear;
    int size;

    queue(){
        this->front = 0;
        this->rear = -1;
        this->max_capacity = 1000;
        this->size=0;
    }

    void enqueue(int data){
        if(size == max_capacity){
            cout << "Maxiumum capacity has been reached." << endl;
            return;
        }
        else{
            rear = (rear+1)%max_capacity;
            arr[rear]=data;
            size++;
        }
    }

    void dequeue(){
        if (size == 0){
            cout << "The size of the queue is 0 and there is no more elements to dequeue" << endl;
            return;
        }
        cout << "The element to be dequeued is : " << arr[front] << endl;
        front++;
        size--;
    }

    void peekqueue(){
        cout << "The element at the front of the queue is " << arr[front] << endl;
    }

    void sizeofqueue(){
        cout << "The queue currently has " << size << " elements in it." << endl;
    }

    // void print(){
    //     cout << "Element in the Queue is : ";
    //     for(int i=front; i<=rear; i++){
    //         cout << arr[i] << " ";
    //     }
    //     cout << endl;
    // }
};

int main(){
    queue q;
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);
    q.enqueue(8);
    q.enqueue(1);

    // q.print();

    q.dequeue();
    q.dequeue();
    q.peekqueue();
    q.dequeue();
    q.peekqueue();
    q.dequeue();
    return 0;
}