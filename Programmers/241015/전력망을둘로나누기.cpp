// URL : https://school.programmers.co.kr/learn/courses/30/lessons/86971

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int countConnected(vector<vector<int>>& graph, int start, int except) {
    int count = 1;
    for(int next : graph[start]) {
        if(next != except) {
            count += countConnected(graph, next, start);
        }
    }
    
    return count;
}

int solution(int n, vector<vector<int>> wires) {
    vector<vector<int>> graph(n+1);
    
    for(const auto& wire : wires) {
        graph[wire[0]].push_back(wire[1]);
        graph[wire[1]].push_back(wire[0]);
    }
    
    int min_diff = n;
    for(const auto& wire : wires) {
        int count1 = countConnected(graph, wire[0], wire[1]);
        int count2 = n-count1;
        
        min_diff = min(min_diff, abs(count1 - count2));
    }
    
    return min_diff;
}
