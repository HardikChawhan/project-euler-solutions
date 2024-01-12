#include <iostream>
#include <cmath>

using namespace std;


long long largestPrimeFactor(long long number) {
    long long i;

    for (i = 2; i <= sqrt(number); ) {
        if (number % i == 0) {
            number /= i;
        } else {
            i++;
        }
    }

    return number;
}

int main() {
    long long number = 600851475143;
    long long result = largestPrimeFactor(number);

    cout<<result;

    return 0;
}
