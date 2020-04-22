#include "calculator.h"

int a, b;

int main(){
    char op;

    cout << "<Calculator>" << endl << "Please enter 2 integers and operator: ";
    cin >> a >> op >> b;

    switch(op){
    case '+': 
        addition();
        break;

    case '-': 
        subtraction();
        break;

    case '*': 
        multiplication();
        break;

    case '/': 
        division();
        break;

    default: 
        cerr << "Wrong operator!!! Exit the program..." << endl;
        exit(0);
        break;
    }
}