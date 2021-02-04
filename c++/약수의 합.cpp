//Problem
//Complete a function, solution that takes an integer n and returns the sum of all the divisors of n.
//Input/Output example #1
// The factors of 12 are 1, 2, 3, 4, 6, 12, which is 28.
//Input/Output example #2
//The factors of 5 are 1, 5, and that's 6.

#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            answer += i;
        }
    }
    return answer;
}

int main() {
    int number = 12;
    solution(number);
}