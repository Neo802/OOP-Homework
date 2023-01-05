// Polymorphism - Task 1

#include <iostream>
using namespace std;

int main()
{
    int* p = new int(66);
    char* ch = reinterpret_cast<char*>(p); // 66 = 'B' in ASCII code
    cout << *p << endl; 
    cout << *ch << endl; 
    cout << p << endl; 
    cout << ch << endl;
    return 0;
}