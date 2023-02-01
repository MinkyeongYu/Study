#include <string>
#include <vector>

using namespace std;

int solution(string str1, string str2) {
    int answer = 0;
    bool check=false;
    
    for(int i=0; i<str1.size(); i++){
        //만약 맨 앞 문자가 같다면 
        if(str1[i]==str2[0]){
            //str1의 i번째 문자부터 전체 문자 비교 
            for(int j=0; j<str2.size(); j++){
                if(str1[i]==str2[j]) check=false, i++;
                else check=true;
            }
            
            if(!check){
                answer=1;
                break;
            }
        }    
    }
    
    if(answer==0) {
        answer=2;
    }    
    
    return answer;
}