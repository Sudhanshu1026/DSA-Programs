#include<iostream>
using namespace std;


class  Node{
public:

int data;
Node *next;

Node (int value){
    data=value;
    next=NULL;
}
};





Node* createLL(int arr[],int index, int size,Node* prev){

    //Base case
    if(index==size)
    return prev;

    Node* temp;
    temp=new Node(arr[index]);
    temp->next=prev;

return createLL(arr,index+1,size,temp);

}


int main(){
   
Node *Head;
 int arr[5]={2,4,6,8,10};

//Create the linked list.
Head=createLL(arr,0,5,NULL);



//delete the last node of the linked list

//If linked list do not exist
if(Head!=NULL){
//If linked list has single node
if(Head->next==NULL){
    Node* temp=Head;
    Head=NULL;
    delete temp;
}
else{
    Node* curr=Head;
    Node* pre=NULL;
    while(curr->next==NULL){
        pre=curr;
        curr=curr->next;
    }
    delete curr;
    pre->next=NULL;
}

}




//To print the final Linked List
Node *temp;
temp=createLL(arr,0,5,NULL);

while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
}
    return 0; 
}xdxh