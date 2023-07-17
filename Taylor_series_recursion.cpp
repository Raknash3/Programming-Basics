// Taylor_series_recursion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

double taylor(int x, int n) {
    static double p = 1, f = 1; //p and f value should be carried over to all recursive function so we use static. p and f will be updated in returning time. 
    double result;
    if (n == 0) {
        return 1;
    }
    else {
        result = taylor(x, n - 1);
        p = p * x;
        f = f * n;
        return result + (p / f);
    }
}



int main()
{
    int x = 4;
    int n = 10;
    double result = taylor(x, n);
    cout << result << endl;
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
