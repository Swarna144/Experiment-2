//Swarna Prakash
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

/*
Output:
Size of char: 1 byte
Size of int: 4 bytes
Size of short int: 2 bytes
Size of long int: 4 bytes
Size of float: 4 bytes
Size of double: 8 bytes
Size of long double: 12 bytes
Size of bool: 1 byte
Size of wchar_t: 2 bytes
*/
