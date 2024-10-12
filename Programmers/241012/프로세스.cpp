// URL : https://school.programmers.co.kr/learn/courses/30/lessons/42587


#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> priorities, int location) {
    queue<pair<int, int>> q;
    priority_queue<int> pq;
    
    for(int i=0; i<(int)priorities.size(); i++) {
        q.push({i, priorities[i]});
        pq.push(priorities[i]);
    }
    
    int cnt = 0;
    while(!q.empty()) {
        int idx = q.front().first;
        int priority = q.front().second;
        q.pop();
        
        if(priority == pq.top()) {
            cnt++;
            pq.pop();
            
            if(idx == location) {
                return cnt;
            }
        } else {
            q.push({idx, priority});
        }
    }
    
    return cnt;
}
