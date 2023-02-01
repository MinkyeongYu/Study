#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(string message) {
    int answer = 0;
    int mslen = message.length();
    
    
    for(int i=0; i<mslen; i++){
        answer += 2;    
    }
    
    return answer;
}