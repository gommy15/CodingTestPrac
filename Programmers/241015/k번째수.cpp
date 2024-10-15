// URL : https://school.programmers.co.kr/learn/courses/30/lessons/42748

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<int> nums;
    
    for(const auto& com : commands) {
        for(int i=com[0]-1; i<com[1]; i++) {
            nums.push_back(array[i]);
        }
        
        sort(nums.begin(), nums.end());
        
        answer.push_back(nums[com[2]-1]);
        
        nums.erase(nums.begin(), nums.end());
    }
    
    return answer;
}
