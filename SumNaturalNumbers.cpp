// SumNaturalNumbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int sum(int n) {
    if (n == 0) {
        return 0;
    }
    else {
        return (sum(n - 1) + n);
    }
}

int sum2(int n) {
    int result = (n * (n + 1)) / 2;
    return result;
}

int sum3(int n) {
    int result = 0;
    for (int i = 1; i <= n; i++) {
        result += i;
    }
    return result;
}



int main()
{
    int result = sum(5);
    cout << result << endl;
    int result2 = sum2(5);
    cout << result2 << endl;
    int result3 = sum3(5);
    cout << result3 << endl;
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
