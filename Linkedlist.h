#ifndef _Linkedlist_H
#define _Linkedlist_H
#include <iostream>
#include "node_class.h"
using namespace std;

class Linkedlist {
    private:
    Node* head;
    int count, maxlength; 

    public: 
    Linkedlist(); 
    ~Linkedlist();
    void create(int N); 
    void define(double x, string name);
    bool checkifexists(string name);
    void add(string x, string y, string z);
    void subtract(string x, string y, string z);
    void remove(string x);
    void print(string x);
    void clear();
    };

    #endif