// Class Work:
// Pointers:
// 2 ^ 30 Bytes = 1GB;
// 32 bits are required to directly acces the memory of 1GB...
// 64 bits are required to directly acces the memory 2^64 bytes....
// while diplaying adress all the complilers convert it into hexadecimal number system.
// The data type of the variable is read from right to left.
// How to store a refernce of a variable in an identifier.
/*
    int a;
    int * nameOfIdentifier = &a; --> Pointer...
    The data type of the adress variable will be the same of the variable whose adress you wanna store.

    binary Operator (*) --> Multiply Operator...
    unary Operator  (*) --> The reference Operator... * x (stores the adress of the variable...)
    unary Operator  (*) --> Indirection Operator... * x (x contains the adress of the variable...)

    The size of all the pointers are the same irrespective of the datatype of the pointer.
    eg: 
    double * x;
    int * x;
    They both have the same size although their data types are different...

    The data type of the pointers only indicates the amount of data to be read or write from the memory.
    eg
    double * x;
    int * x;

    Principle of least priviledge... --> By Giving least (power / access) while achieving tasks..

*/


#include<iostream>
using namespace std;

void mySwap(int * a , int * b)
{
    int temp = * a;
    * a = * b;
    * b = temp;

}
int main()
{
    int a = 10, b = 20;

    //int * adressA = &a; // --> Storing the adress of the variable.
    //int * adressB = &b; // --> Storing the adress of the variable.

    mySwap(&a, &b);

    cout << a << ":" << b;

    cout << endl;
    return 0;
}