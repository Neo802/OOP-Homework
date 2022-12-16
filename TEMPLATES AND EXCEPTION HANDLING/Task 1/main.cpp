// TEH - Task 1
#include <iostream>
using namespace std;

template <typename T> T Sum(T x, T y) {
    cout << typeid(T).name() << " Sum\n";
    return x + y;
}

int main()
{
    float a, b;
    double c, d;

    cin >> a >> b >> c >> d;

    cout << endl;
    cout << Sum(a, b);
    cout << endl;
    cout << Sum(c, d);
}