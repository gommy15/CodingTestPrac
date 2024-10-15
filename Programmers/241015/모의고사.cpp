// URL : https://school.programmers.co.kr/learn/courses/30/lessons/42840

#include <string>
#include <vector>
#include <algorithm>

using namespace std;
#define PE1 5
#define PE2 8
#define PE3 10

vector<int> solution(vector<int> answers) {
    int p1[PE1] = {1, 2, 3, 4, 5};
    int p2[PE2] = {2, 1, 2, 3, 2, 4, 2, 5};
    int p3[PE3] = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    
    vector<int> cnt(3, 0);
    
    for(int i=0; i<answers.size(); i++) {
        if(answers[i] == p1[i%PE1]) cnt[0]++;
        if(answers[i] == p2[i%PE2]) cnt[1]++;
        if(answers[i] == p3[i%PE3]) cnt[2]++;
    }
    
    vector<int> ans;
    int max_cor = *max_element(cnt.begin(), cnt.end());
    
    for(int i=0; i<3; i++) {
        if(max_cor == cnt[i])
            ans.push_back(i+1);
    }
    
    return ans;
}
