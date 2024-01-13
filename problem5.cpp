#include <iostream>
using namespace std;

// Function to calculate gcd
long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to calculate lcm
long long lcm(long long a, long long b) {
    return (a * b) / gcd(a, b);
}

// Function to find the smallest number divisible by all numbers from 1 to n
long long smallestMultiple(int n) {
    long long result = 1;
    for (int i = 2; i <= n; ++i) {
        result = lcm(result, i);
    }
    return result;
}

int main() {
    int upperLimit = 20;
    long long result = smallestMultiple(upperLimit);

    cout << "The smallest positive number divisible by all numbers from 1 to " << upperLimit << " is: " << result << endl;

    return 0;
}
