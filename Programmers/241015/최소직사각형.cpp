// URL : https://school.programmers.co.kr/learn/courses/30/lessons/86491

#include <string>
#include <vector>
#include <queue>
#include <algorithm>


using namespace std;

int solution(vector<vector<int>> sizes) {
    priority_queue<int> px, py;
    
    for(const auto& card : sizes) {
        int x = card[0];
        int y = card[1];
        
        if(x > y) {
            px.push(x);
            py.push(y);
        } else {
            px.push(y);
            py.push(x);
        }
    }
    
    return px.top() * py.top();
    
    int answer = 0;
    
    return answer;
}
