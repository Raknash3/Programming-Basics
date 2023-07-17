// Taylor_series_horner_rule.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

double taylor1(int x, int n) {
    static double s;
    if (n == 0) {
        return s;
    }
    else {
        s = 1 + ((x * s / n));   // x/n will result in integer division for perfect result we multiply x*n first so the result becomes double and then divide by n.
        return taylor1(x, n - 1);
    }
}

double taylor2(int x, int n) {
    double s2 = 1;
    for (int i = n; i > 0; i--) {
        s2 = 1 + ((x * s2 / i) );
    }
    return s2;
}


int main()
{
    double result1 = taylor1(4, 10);
    double result2 = taylor2(1, 10);
    cout << result1 << endl;
    cout << result2 << endl;
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
