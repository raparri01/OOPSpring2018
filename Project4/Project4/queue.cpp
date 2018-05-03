#include <stdio.h>
#include "queue.h"


Queue::Queue(){
    rearPtr = NULL;
    count = 0;
}

Queue::~Queue(){
    delete rearPtr;
}

void Queue::MakeEmpty(){
    while(rearPtr){
        Dequeue();
    }
    rearPtr = NULL;
}

void Queue::Enqueue(int n){
    if(IsFull()){
        throw QueueFull();
    } else {
    Node* newPtr;
    Node* tempPtr;
    newPtr = new Node;
    tempPtr = new Node;
    
    if(rearPtr){
        tempPtr -> data = n;
        tempPtr -> nextPtr = rearPtr ->nextPtr;
        rearPtr -> nextPtr = tempPtr;
        rearPtr = tempPtr;
        
    } else {
        
        newPtr -> data = n;
        rearPtr = newPtr;
        newPtr -> nextPtr = newPtr;
        
    }
    count++;
    }
}

void Queue::Dequeue(){
    if(rearPtr){
        if(count == 1){
            delete rearPtr;
            rearPtr = NULL;
        } else {
            Node* temp = rearPtr -> nextPtr;
            rearPtr -> nextPtr = temp -> nextPtr;
            delete temp;
        }
        count--;
    } else {
        throw QueueEmpty();
    }
}

int Queue::Front() const{
    
    if(rearPtr){
        Node* tempNode = rearPtr -> nextPtr;
        return(tempNode -> data);
    }
    else
        throw QueueEmpty();

    return 1;
}

int Queue::Rear() const{
    int rear;
    if(rearPtr){
        rear = rearPtr -> data;
    } else {
        rear = NULL;
    }
    
    return rear;
}

int Queue::Peek(int n) const{
    int peek = 0;
    Node* tempNode = rearPtr;
    
    if(n > Size()){
        throw QueueInvalidPeek();
    } else if(count == 0){
        peek = NULL;
    }
    else {
        for(int i = 0; i < (n); i++){
            tempNode = tempNode -> nextPtr;
        }
        peek = tempNode -> data;
    }
    return peek;
}

bool Queue::IsFull() const{
    Node* location;
    try {
        location = new Node;
        delete location;
        return false;
    } catch (std::bad_alloc){
        return true;
    }
}

bool Queue::IsEmpty() const{
    bool empty;
    
    if(rearPtr){
        empty = false;
    } else {
        empty = true;
    }
    
    
    return empty;
}

int Queue::Size() const{
    return count;
}
