// CMakeProject1.cpp : Defines the entry point for the application.
//

#include <iostream>
#include "CMakeProject1.h"
using namespace std;

class MyClass {
private:
    int a;
public:
    MyClass (int x):a(x){}
    MyClass(const MyClass& c):a((c.a)+2){}
    MyClass();
    void printVal();
};

MyClass::MyClass() 
{
    a = 25;
}
void MyClass::printVal()
{
    cout << a;
}

int main()
{
    MyClass a1;
    a1.printVal();
    MyClass a2(a1);
    a2.printVal();
    MyClass a3(100);
    a3.printVal();
    return 0;
}
