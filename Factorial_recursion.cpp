// Factorial_recursion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int factorial1(int n) {
    if (n == 0) {
        return 1;
    }
    else {
        return factorial1(n - 1) * n;
    }
}

int factorial2(int n) {
    if (n == 0) {
        return 1;
    }
    else {
        int sum = 1;
        for (int i = 1; i <= n; i++) {
            sum = sum * i;
        }
        return sum;
    }
}

int main()
{
    int a = 5;
    int res1 = factorial1(a);
    int res2 = factorial2(a);
    cout << res1 << endl;
    cout << res2 << endl;
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
