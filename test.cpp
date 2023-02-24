#include <iostream>
#include "Linkedlist.h"

using namespace std; 

int main() {
    int N; 
    double val; 
    string x,y,z,name,command;
    Linkedlist a;

    while(cin >> command) {
        if(command == "CRT") { //CREATE LINKED LIST
            cin >> N; 
            a.create(N);
            cout << "success" << endl; 
        }
        else if(command == "DEF") { //DEFINE VARIABLE
            cin >> name;
            cin >> val; 
            if(a.checkifexists(name) == true) {
                cout << "failure" << endl; 
            }
            else {
                a.define(val, name);
            }
        }
        else if(command == "PRT"){ //Print 
            cin >> x; 
            if(a.checkifexists(x) == true) {
                a.print(x); 
            }
            else {
            cout << "variable " << x << " not found"  << endl;       
            }
        }
        else if(command == "ADD") { //add
            cin >> x;
            cin >> y;
            cin >> z;
             if(a.checkifexists(x) == false || (a.checkifexists(y) == false) || (a.checkifexists(z) == false)) {
                cout << "failure" << endl;
             }
            else {
                a.add(x,y,z);
                cout << "success" << endl; 
            }
        }
         else if(command == "SUB") { //subtract
            cin >> x;
            cin >> y;
            cin >> z;

            if(a.checkifexists(x) == false || (a.checkifexists(y) == false) || (a.checkifexists(z) == false)) {
                cout << "failure" << endl;
             }
            else {
                a.subtract(x,y,z);
                cout << "success" << endl; 
            }
        }

        else if(command == "REM") { //remove
            cin >> x;
            if(a.checkifexists(x) == false) {
                cout << "failure" << endl; 
            }
            else {
                a.remove(x); 
                cout << "success" << endl;
            }
        }
        else if(command == "END"){ //end code
            a.clear();
            return 0;
        }
        }
        return 0;
    }
