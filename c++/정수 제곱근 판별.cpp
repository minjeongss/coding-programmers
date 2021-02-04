//Problem
//For any positive integer n, we want to determine if n is the power of any positive integer x or not.
//Complete a function that returns the power of x + 1 if n is the square of the positive integer x, and-1 if n is not the square of the positive integer x.
//Input/output example #1
//121 is a positive integer to the power of 11, so returns 144 to the power of (11 + 1).
//Input/output example #2
//3 is not a positive integer squared, so it returns -1.

#include <string>
#include <vector>
#include <cmath>
using namespace std;

long long solution(long long n) {
    long long answer = 0;
    if (sqrt(n) == (int)sqrt(n)) {
        answer = sqrt(n);
        return (answer + 1) * (answer + 1);
    }
    else {
        return -1;
    }

}

int main() {
    long long number = 121;
    solution(number);
    long long number2 = 3;
    solution(number2);
}