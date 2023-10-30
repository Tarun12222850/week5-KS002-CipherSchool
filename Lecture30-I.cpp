// Lecture 30 I - Queue Pt 1 

#include <iostream>
using namespace std;

class queue{
    public:
    int arr[1000];
    int  capacity;
    int front;
    int rear;

    queue(){
        this->front = 0;
        this->rear = -1;
        this->capacity = 1000;
    }
};

int main(){
    
    return 0;
}