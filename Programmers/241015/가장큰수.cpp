// URL : https://school.programmers.co.kr/learn/courses/30/lessons/42746

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(const string& a, const string& b) {
    return a+b > b+a;
}

string solution(vector<int> numbers) {
    vector<string> sarr;
    
    for(const int& n : numbers) {
        sarr.push_back(to_string(n));
    }
    
    sort(sarr.begin(), sarr.end(), compare);
    
    
    string answer = "";
    for(const string& str : sarr) {
        answer += str;
    }
    
    if(answer[0] == '0') {
        return "0";
    }
    
    return answer;
}
