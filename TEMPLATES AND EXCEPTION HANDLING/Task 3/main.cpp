// TEH - Task 3

#include <iostream>
#include <vector>
using namespace std;

float Division(float nr, float den)
{
    // If denominator is Zero
    // throw runtime_error
    if (den == 0) {
        throw runtime_error("Math error: Attempted to divide by Zero\n");
    }

    // Otherwise return the result of division
    return (nr / den);

} // end Division

int main()
{
    float nr, denominator, result;
    nr;
    denominator = 0;

    cout << "Insert number: ";
    cin >> nr;

    cout << "Insert denominator: ";
    cin >> denominator;

    // try block calls the Division function
    try {
        result = Division(nr, denominator);

        cout << "The result is: " << result << endl;
    }
    catch (runtime_error& e) {
        cout << "Exception occurred" << endl << e.what();
    }

} // end main