// URL : https://school.programmers.co.kr/learn/courses/30/lessons/12909?language=cpp

#include<string>
#include <iostream>
#include <stack>

using namespace std;

bool solution(string s)
{
    stack<char> stac;
    for(const auto& op : s) {
        if(op == ')' && !stac.empty()) stac.pop();
        else stac.push(op);
    }
    
    return stac.empty();
}
