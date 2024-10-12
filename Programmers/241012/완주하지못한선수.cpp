// URL : https://school.programmers.co.kr/learn/courses/30/lessons/42576


#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    unordered_map<string, int> failer;
    
    for(const string& name : participant) {
        failer[name]++;
    }
    
    for(const string& name : completion) {
        failer[name]--;
    }
    
    for(const auto& pair : failer) {
        if(pair.second > 0) {
            return pair.first;
        }
    }
    
    return "";
}



// #include <string>
// #include <vector>
// #include <unordered_map>
// #include <algorithm>
// #include <stack>

// using namespace std;

// string solution(vector<string> participant, vector<string> completion) {
//     sort(participant.begin(), participant.end());
//     sort(completion.begin(), completion.end());
    

//     for(int i=0; i<(int)completion.size(); i++) {
//         if(participant[i] != completion[i]) {
//             return participant[i];
//         }
//     }
    
//     return participant[(int)participant.size()-1];
// }
