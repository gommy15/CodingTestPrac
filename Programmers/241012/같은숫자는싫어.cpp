//URL : https://school.programmers.co.kr/learn/courses/30/lessons/12906

#include <vector>
#include <iostream>
#include <stack>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    stack<int> s;
    vector<int> ans;
    
    for(const auto& num : arr) {
        if(!s.empty() && s.top() == num) {
            continue;
        }else {
            s.push(num);
            ans.push_back(num);
        }
    }

    return ans;
}
