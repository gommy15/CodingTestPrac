// URL : https://school.programmers.co.kr/learn/courses/30/lessons/84512

#include <string>
#include <vector>

using namespace std;

int cnt = 0;
bool found = false;

void bfs (string current, string& target) {
    if(found) return;
    
    cnt++;
    if(current == target) {
        found = true;
        return;
    }
    
    if(current.length() == 5) return;
    string str = "AEIOU";
    for(char c : str) {
        bfs(current+c, target);
    }
}

int solution(string word) {
    cnt = 0;
    found = false;
    bfs("", word);
    
    return cnt-1;
}
