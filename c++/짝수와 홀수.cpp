//Problem
//Complete the function, solution that returns Even if the integer num is even and returns Odd if the integer num is odd.

#include <string>
#include <vector>

using namespace std;

string solution(int num) {
    string answer = "";
    if (num % 2 == 0) {
        answer = "Even";
        return answer;
    }
    else {
        answer = "Odd";
        return answer;
    }
}

int main() {
    int even = 2;
    solution(even);
    int odd = 3;
    solution(odd);
}