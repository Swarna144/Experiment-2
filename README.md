EXPERIMENT 2A

AIM-  We will learn to use data types to find their size.

THEORY-  To find the size of int, float, double, and char it is important to know the size of different data types especially when working with large datasets to optimize memory usage. 

ALGORITHM:-

1)Start

2)We will write include<iostream>

3)Use the standard namespace.

4)Define the main function.

5)Print the size of ‘char’, ‘int’, ‘float’, ‘double’ Data type. 

6)Stop

CODE:-
2A
```//Swarna Prakash
//23070123139
#include <iostream>

int main() {
    char a;
    int b;
    short int c;
    long int d;
    float e;
    double f;
    long double g;
    bool h;
    wchar_t i;

    std::cout << "Size of char: " << sizeof(a) << " byte" << std::endl;
    std::cout << "Size of int: " << sizeof(b) << " bytes" << std::endl;
    std::cout << "Size of short int: " << sizeof(c) << " bytes" << std::endl;
    std::cout << "Size of long int: " << sizeof(d) << " bytes" << std::endl;
    std::cout << "Size of float: " << sizeof(e) << " bytes" << std::endl;
    std::cout << "Size of double: " << sizeof(f) << " bytes" << std::endl;
    std::cout << "Size of long double: " << sizeof(g) << " bytes" << std::endl;
    std::cout << "Size of bool: " << sizeof(h) << " byte" << std::endl;
    std::cout << "Size of wchar_t: " << sizeof(i) << " bytes" << std::endl;

    return 0;
}
```
OUTPUT:-

![EX 2A JPG](https://github.com/user-attachments/assets/dc3d9570-a9c8-4856-9c53-773a8bdbcc31)

CONCLUSION:- When you compile and run this program, you will see the sizes of different data types

EXPERIMENT 2B
AIM-  We will learn how to find storage classes like static register extern and auto.

THEORY:- In C++, a storage class defines the scope (visibility), lifetime, and memory location of variables and/or functions within a program. Storage classes are used to specify the characteristics and behavior of variables and functions.

CODE:-
2B
```
#include <iostream>
using namespace std;
int main()
{
    int num1 = 1;
    register int num2 = 4;
    static int num3 = 5;
    extern int a;
    cout<<"Size of auto integer: "<<sizeof(num1)<<" bytes"<<endl;
    cout<<"Size of register integer: "<<sizeof(num2)<<" bytes"<<endl;
    cout<<"Size of static int: "<<sizeof(num3)<<" bytes"<<endl;
    cout<<"Size of extern int: "<<sizeof(a)<<" bytes"<<endl;

    return 0;
}
```
OUTPUT:-

![EX 2B JPG](https://github.com/user-attachments/assets/c783b681-94aa-4553-924f-ac2198f1903d)



CONCLUSION:- In this program, we demonstrated the use of different storage classes in C++: static, register and extern. These storage classes play a crucial role in defining the scope, lifetime, and visibility of variables in a program.


