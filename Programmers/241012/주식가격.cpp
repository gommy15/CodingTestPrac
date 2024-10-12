// URL : https://school.programmers.co.kr/learn/courses/30/lessons/42584


#include <string>
#include <vector>
#include <stack>

using namespace std;

vector<int> solution(vector<int> prices) {
    int n = (int)prices.size();
    vector<int> ans(n);
    stack<int> s;
    
    for(int i=0; i<n; i++) {
        while(!s.empty() && prices[s.top()] > prices[i]) {
            int t = s.top();
            s.pop();
            ans[t] = i-t;
        }
        s.push(i);
    }
    
    while(!s.empty()) {
        int t = s.top();
        s.pop();
        ans[t] = n-1-t;
    }
    
    return ans;
}
