#include<bits/stdc++.h>
#include "add.cpp"
#include "subract.cpp"
#include "square.cpp"
#include "squareroot.cpp"
#include "multiply.cpp"
#include "divide.cpp"
#include "Modulos.cpp"
using namespace std;

int addition();  
int subtract();  
int multiply();  
int divide();  
int sq();  
int sqrt1();  
int modulos();
void exit();

int main() {

    int op;
    do
    {
        cout << "Welcome To The Calculator" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout<< "3. Divide" <<endl;
        cout<< "4. Multiply" <<endl;
        cout<< "5. Square" <<endl;
        cout<< "6. Square Root" <<endl;
        cout<< "7. Modulos" <<endl;
        cout<< "8. Exit" <<endl;
        cout<< "Enter Your Choice: ";
        cin>>op;
        switch(op)
        {
            case 1: addition();
            break;
            case 2: subtract();
            break;
            case 3: divide();
            break;
            case 4: multiply();
            break;
            case 5: sq();
            break;
            case 6: sqrt1();
            break;
            case 7: modulos();
            break;
            case 8:
            exit(0);   
            break;
            default: cout<<"Invalid Choice"<<endl;
        }
    }while(op!=8);
    return 0;
    
}