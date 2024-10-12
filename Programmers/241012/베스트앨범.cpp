// URL : https://school.programmers.co.kr/learn/courses/30/lessons/42579


#include <string>
#include <vector>
#include <unordered_map>
#include <utility>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> genres, vector<int> plays) {
    unordered_map<string, int> genreSum;
    unordered_map<string, vector<pair<int, int>>> genreSongs;
    
    for(int i=0; i<(int)plays.size(); i++) {
        genreSum[genres[i]] += plays[i];
        genreSongs[genres[i]].push_back(make_pair(-plays[i], i));
    }
    
    vector<pair<int, string>> sortedGenre;
    for(const auto& genre : genreSum) {
        sortedGenre.push_back({-genre.second, genre.first});
    }
    sort(sortedGenre.begin(), sortedGenre.end());
    
    vector<int> ans;
    
    for(const auto& genre : sortedGenre) {
        auto& songs = genreSongs[genre.second];
        sort(songs.begin(), songs.end());
        
        ans.push_back(songs[0].second);
        if(songs.size()>1) {
            ans.push_back(songs[1].second);
        }
    }
    
    return ans;
    
}
