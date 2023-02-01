// 함수만 작성하면 성공, aya, ye, woo, ma만 발음 가능. 아기가 발음할 수 있는 문자열의 개수 구하기.

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    
    for(int i=0; i<babbling.size(); i++){
        bool check=false;
        
        for(int j=0; j<babbling[i].size(); j++){
            if(babbling[i].substr(j, 3)=="aya") {j+=2;}
            else if(babbling[i].substr(j, 2)=="ye") {j+=1;}
            else if(babbling[i].substr(j, 3)=="woo") {j+=2;}
            else if(babbling[i].substr(j, 2)=="ma") {j+=1;}
            else{
                //발음불가                 
                check=true;
                break;
            }
        }
        
        if(!check) answer++;
    }
    
    return answer;
}