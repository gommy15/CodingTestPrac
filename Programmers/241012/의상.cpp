//URL : https://school.programmers.co.kr/learn/courses/30/lessons/42578

#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<vector<string>> clothes) {
    unordered_map<string, int> clothMap;
    
    for(const auto& cloth : clothes) {
        clothMap[cloth[1]]++;
    }
    
    int ans = 1;
    for(const auto& pair : clothMap) {
        ans *= pair.second+1;
    }
    
    return ans -1;
    
}
