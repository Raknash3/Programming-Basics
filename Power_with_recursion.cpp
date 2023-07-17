// Power_with_recursion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int power(int m, int n) {
    if (n == 0) {
        return 1;
    }
    else {
        return power(m, n - 1) * m;
    }
}

int power2(int m, int n) {
    if (n == 0) {
        return 1;
    }
    else if (n % 2 == 0) {
        return power(m * m, n / 2);
    }
    else {
        return power(m * m, (n - 1) / 2) * m;
    }
}


int main()
{
    int x = 2, y = 9;
    int result, result2;
    result = power(x, y);
    result2 = power2(x, y);
    cout << result << endl;
    cout << result2 << endl;
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
