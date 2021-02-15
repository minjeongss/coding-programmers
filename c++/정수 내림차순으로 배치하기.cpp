//Problem
//The function solution takes an integer n as a parameter.
//Return a new integer sorting each digit of n from largest to smallest.
//For example, if n is 118372, you can return 873211.

#include <string>
#include <vector>
#include <algorithm>
using namespace std;

long long solution(long long n) {
    long long answer = 0;
    string s = to_string(n);
    sort(s.rbegin(), s.rend());
    answer = stoll(s);
    return answer;
}

int main() {
    long long n = 118372;
    solution(n);
    return 0;
}