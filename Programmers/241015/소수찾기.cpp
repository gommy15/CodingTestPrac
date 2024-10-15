// URL : https://school.programmers.co.kr/learn/courses/30/lessons/42839

#include <string>
#include <vector>
#include <set>
#include <cmath>
#include <algorithm>

using namespace std;

bool isPrime(int n) {
    if(n < 2) return false;
    for(int i=2; i<=sqrt(n); i++) {
        if(n%i == 0) return false;
    }
    return true;
}

int solution(string numbers) {
    set<int> primes;
    sort(numbers.begin(), numbers.end());
    
    do{
        string num = "";
        for(int i=0; i<numbers.size(); i++) {
            num += numbers[i];
            int n = stoi(num);
            if(isPrime(n)) primes.insert(n);
        }
    } while(next_permutation(numbers.begin(), numbers.end()));
    
    return primes.size();
}
