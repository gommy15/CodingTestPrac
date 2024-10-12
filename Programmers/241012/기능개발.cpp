// URL : https://school.programmers.co.kr/learn/courses/30/lessons/42586


#include <string>
#include <vector>
#include <queue>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> ans;
    queue<int> days;
    
    for(int i=0; i<(int)progresses.size(); i++) {
        int day = (100-progresses[i]+speeds[i]-1)/speeds[i];
        days.push(day);
    }
    
    while(!days.empty()) {
        int count = 1;
        int current = days.front();
        days.pop();
        
        while(!days.empty() && days.front() <= current) {
            days.pop();
            count++;
        }
        
        ans.push_back(count);
    }
    
    return ans;
}
