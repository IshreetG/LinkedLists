#include "node_class.h"
#include <iostream>

using namespace std; 

Node::Node(double value, string name) {
    var_value = value;
    var_name = name;
    next = NULL;
}
Node::~Node(){
    next = NULL;
}