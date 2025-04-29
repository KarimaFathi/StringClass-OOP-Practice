#include <iostream>
#include "ClassString.h";
using namespace std;

int main()
{
    ClassString string1;
    ClassString string2("My name is Karima Fathi");  //Overloading

    string1.value = "Hello, World !";
    cout << string1.removePunctuations();
    cout << string1.value;
    
}

