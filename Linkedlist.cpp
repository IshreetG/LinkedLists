#include "Linkedlist.h"
#include <iostream>

using namespace std;

Linkedlist::Linkedlist() {head = nullptr; count = 0; maxlength = 0;} //constructor 

Linkedlist::~Linkedlist() { //deconstructor 
    delete head;
}

void Linkedlist::create(int N) { //create linked list with a size of N
    maxlength = N; //initalize the max linked list as N
    return;
}

void Linkedlist::define(double x, string name) { //insert new node
    if(count == maxlength){
        cout << "failure" << endl;
        return;
    }
    if(!head){ //if head is nullptr then the list is empty so we assign node to the head 
        head = new Node(x,name);
        count = count + 1; //keep track of count
        cout << "success" << endl;
        return;
    }
    else {
        Node* curr = head; //setting temp as new node
        while(curr->next != nullptr) {
            curr = curr->next;
        }
        curr->next = new Node(x, name); 
        count = count +1; //keep track of count 
        cout << "success" << endl; 
        return; 
    }
    }

bool Linkedlist::checkifexists(string name) { //this checks if the varaible name is in the linked list 
    Node *temp = head; 
    if(temp == nullptr){
        return false;
    }
    if(temp != nullptr) {
        while(temp != nullptr){
            if(temp->var_name == name) { 
                return true;
            }
            temp = temp-> next; 
        }
    }
    return false;
}
void Linkedlist::add(string x, string y, string z) { //done works
    double temp1x, temp2y; 
    Node *node_z;

    Node *temp = head; 
    if(temp != nullptr) {
        while(temp != nullptr){
            if(temp->var_name == x) { 
                temp1x = temp->var_value;    
            }
            if(temp->var_name == y) { 
                temp2y = temp->var_value;    
            }
            if(temp->var_name == z) { 
                node_z = temp;    
            }
            temp = temp-> next; 
        } 
        node_z->var_value = temp1x + temp2y;

}
}

void Linkedlist::subtract(string x, string y, string z) { //done works
    double temp1x, temp2y, temp3z; 
    Node *node_z1;

    Node *temp = head; 
    if(temp != nullptr) {
        while(temp != nullptr){
            if(temp->var_name == x) { 
                temp1x = temp->var_value;    
            }
            if(temp->var_name == y) { 
                temp2y = temp->var_value;    
            }
            if(temp->var_name == z) { 
                node_z1 = temp;    
            }
            temp = temp-> next; 
        } 
        node_z1->var_value = temp1x - temp2y;        
}
    
}
void Linkedlist::remove(string x) { //done works
    Node *temp = head;
    if(temp != nullptr && temp->var_name == x){
        head = head->next;
        delete temp; // this is the node we delete
        count = count -1; //update count
        return;
    }
    while(temp->next->var_name != x){
        temp = temp->next; // we have not found the node with var_name, go to next 
    }
    // if while loop ends, we have found the node we want to delete which is temp->next
   Node * temp2 = temp->next;
   temp->next = temp2->next;
   delete temp2; // free the node we don't want
   count = count -1; //update count

   return;
}

void Linkedlist::print(string x){ //works
    Node *temp = head;
    if(temp != nullptr) {
        while(temp != nullptr){
            if(temp->var_name == x) {
                cout << temp->var_value << endl;  //print out the variable 
                return; 
            }
            temp = temp-> next; 
        }
    }
} 
 void Linkedlist::clear(){ //delete the linked list
    while(head != nullptr){ 
        Node* temp = head; 
        head = head -> next; 
        delete temp; 
    } 
}