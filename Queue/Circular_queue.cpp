#include <iostream>
 
using namespace std;


class Queue
{
int *arr;
int front,rear;
int size ;


public:

// Constructor to initialize the queue
Queue(int n){    
size=n;
arr=new int[n];
front=rear=-1;
}
 

bool IsEmpty(){
    return front==-1;
}
bool IsFull(){
    return (rear+1)%size==front;
}

void push(int x){
    if(IsEmpty()){
        front=rear=0;
        arr[rear]=x;
        cout<<"Pushed "<<x<<" to the Queue\n";
        return;
        
    }
    else if(IsFull()){
        cout<<"Queue Overflow";
        return;
    }else{
        rear=(rear+1)%size;
        arr[rear]=x;
        cout<<"Pushed "<<x<<" to the Queue\n";
    }
}

void pop(){
    if(IsEmpty()){
        cout<<"Queue Underflow\n";
        return;
    }
     else if(front==rear)  //Pointing last element left
    {
     front=rear=-1;
    }
    else{
        front=(front+1)%size;
    }
}
void start(){
    if(IsEmpty()){
        cout<<"Queue is Empty\n";
        return ;
    }else 
    cout<< arr[front]<<" ";
}

void end(){
    if(IsEmpty()){
        cout<<"Queue is Empty\n";
        return;
    }else 
    cout<< arr[rear]<<" ";
}


};




int main(){

Queue q (5);
q.push(10);
q.push(20);
q.push(30);
q.push(40);
q.push(50);
q.start();
q.end();


q.push(100);

    return 0;
}
