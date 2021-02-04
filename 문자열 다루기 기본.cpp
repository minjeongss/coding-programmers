//Problem
//Complete a function, solution that checks if the length of the string s is 4 or 6 and consists of numbers only.
//For example, if s is a234, return False, and if 1234, return True.

#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    bool answer = true;
    if (s.size() == 4 || s.size() == 6) {
        for (int i = 0; i < s.size(); i++) {
            if (s[i] < 48 || s[i]>57) {
                answer = false;
                return answer;
            }
        }
        answer = true;
        return answer;
    }
    else {
        answer = false;
        return answer;
    }
    return answer;
}

int main() {
    string number = "1234";
    solution(number);
    string mix = "a123";
    solution(mix);

}