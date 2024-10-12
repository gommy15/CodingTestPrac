//URL : https://school.programmers.co.kr/learn/courses/30/lessons/42577

#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

bool solution(vector<string> phone_book) {
    unordered_set<string> hashset;
    
    for(const string& number : phone_book) {
        hashset.insert(number);
    }
    
    for(const string& number : phone_book) {
        string pre = "";
        for(int i=0; i<number.size()-1; i++) {
            pre += number[i];
            if(hashset.find(pre) != hashset.end())
                return false;
        }
    }
    
    return true;

}
