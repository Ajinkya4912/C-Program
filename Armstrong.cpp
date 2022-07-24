#include <iostream>
using namespace std;

int main() {
    int n, num, rem, result = 0;
    cout << "Enter a three-digit integer: ";
    cin >> n;
    num = n;

    while (num != 0) {
        
        rem = num % 10;
        
        result=result+ rem * rem * rem;
        
        num /= 10;
    }

    if (result == n)
        cout << n << " is an Armstrong number.";
    else
        cout << n << " is not an Armstrong number.";

    return 0;
}