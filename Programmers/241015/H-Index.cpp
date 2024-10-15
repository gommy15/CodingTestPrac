// URL : https://school.programmers.co.kr/learn/courses/30/lessons/42747

#include <string>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

int solution(vector<int> citations) {
    sort(citations.begin(), citations.end(), greater<>());
    int h = 0;
    
    for(int i=0; i<citations.size(); i++) {
        if(citations[i] >= i+1) {
            h = i+1;
        } else {
            break;
        }
    }
    
    return h;
    
    return 0;
}
