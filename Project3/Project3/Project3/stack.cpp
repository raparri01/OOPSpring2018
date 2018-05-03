#include "stack.h"

Stack::Stack(){
    topPtr = NULL;
}
Stack::~Stack(){
    delete topPtr;
}
void Stack::Push(int n){
    //Create a new node
    Node* newNode;
    newNode = new Node;
    
    //Push it to be at the top of the stack and point to the current top pointer
    newNode -> next = topPtr;
    newNode -> data = n;
    newNode -> previous = NULL;
    if(topPtr != NULL){
        topPtr -> previous = newNode;
    }
    
    //Set the new node top pointer
    topPtr = newNode;
}
void Stack::Pop(){
    //If the stack is empty  throw a stack empty error
    if(IsEmpty()){
        throw StackEmpty();
        
    }
    //If there is a top pointer set the top pointer to the next node and delete the top of the stack
    else {
        Node* temp = topPtr;
        topPtr = topPtr -> next;
        if(topPtr != NULL){
            topPtr -> previous = NULL;
        }
        delete temp;
    }
}
void Stack::MakeEmpty() {
    //Initiate the top pointer
    Node* temp = topPtr;
    
    //While there is still something in the list, remove it
    while(temp -> next != NULL){
        temp = temp -> next;
        topPtr = temp;
        temp -> previous = NULL;
    }
    //If there is only the top pointer, remove the data it points to
    topPtr = NULL;
}
bool Stack::IsEmpty() const{
    //if there is a top pointer then the stack is not empty
    if(!topPtr)
        return true;
    else
        return false;
}

bool Stack::IsFull() const{
    bool full = false;
    return full;
}

int Stack::Top() const{
    //If the list has a top ptr, return it's value
    if(topPtr){
        int top = topPtr->data;
        return top;
    }
    //If it does not return nothing
    else
        return NULL;
}
int Stack::Size() const{
    //return the size of a list by iterating through the list until a pointer points to null
    int size;
    Node* temp = topPtr;
    if(temp){
        size = 1;
        while(temp->next != NULL){
            size++;
            temp = temp->next;
        }
    } else {
        return 0;
    }
    return size;
}
int Stack::Max() const {
    //iterate through a list to find the maximum value
    int max = 0;
    //similar to size(), but evey node checked will also have it's data compared to the current maximum
    Node* temp = topPtr;
    if(temp){
    max = temp->data;
    
    while(temp->next != NULL){
        temp = temp->next;
        if(temp->data > max){
            max = temp->data;
        }
    }
    }
    return max;
}
int Stack::Min() const{
    //iterate through a list to find the minimum value
    int min = 0;
    //similar to size(), but evey node checked will also have it's data compared to the current minimum
    Node* temp = topPtr;
    if(temp){
    min = temp->data;
    
    while(temp->next != NULL){
        temp = temp->next;
        if(temp->data < min){
            min = temp->data;
        }
    }
    }
    return min;
}
int Stack::Peek( int n) const{
    //Peek function returns the value of a specified node
    
    Node* temp = topPtr;
    int peek;
    //if the node selected is greater than the size of the list, return nothing.
    if(n > Size()-1){
        return NULL;
    }
    //otherwise find that node and print out the data
    else {
        if(temp){
        for(int i = 0; i < n; i++){
                temp = temp->next;
        }
            peek = temp -> data;
        }
    }
    
    return peek;
    
}
