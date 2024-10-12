//URL : https://school.programmers.co.kr/learn/courses/30/lessons/1845

#include <vector>
#include <unordered_map>
#include <string>
using namespace std;

int solution(vector<int> nums)
{
    unordered_map<int, int> pocket;
    
    for(int i=0; i<(int)nums.size(); i++) {
        pocket[nums[i]]++;
    }
    
    if((int)pocket.size() >= (int)nums.size()/2) {
        return (int)nums.size()/2;
    } else {
        return (int)pocket.size();
    }
}
