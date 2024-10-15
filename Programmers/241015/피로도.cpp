// URL : https://school.programmers.co.kr/learn/courses/30/lessons/87946

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, vector<vector<int>> dungeons) {
    int answer = 0;
    
    sort(dungeons.begin(), dungeons.end());
    
    do{
        int cur_hp = k;
        int cnt = 0;
        
        for(const auto& dun : dungeons) {
            if(cur_hp >= dun[0]) {
                cur_hp -= dun[1];
                cnt++;
            }
        }
        
        answer = max(answer, cnt);
    } while (next_permutation(dungeons.begin(), dungeons.end()));
    
    
    return answer;
}
