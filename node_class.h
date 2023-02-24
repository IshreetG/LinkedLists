#ifndef _node_class_H
#define _node_class_H
#include <iostream>

using namespace std; 

class Node {
    public:
    double var_value;
    string var_name;
    Node* next; 

    ~Node();

    Node(double value, string name); 
};

#endif