//Problem
//Create a solution, a function that returns the middle letter of the word s.
//If the length of the word is even, return the middle two characters.

#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(string s) {
    string answer = "";
    if (s.size() % 2 == 0) { //even
        answer += s[(s.size() / 2) - 1];
        answer += s[s.size() / 2];
        return answer;
    }
    else { //odd
        answer = s[(s.size() / 2)];
        return answer;
    }
}

int main()
{
    string even = "abcd";
    solution(even);
    string odd = "abcde";
    solution(odd);
}