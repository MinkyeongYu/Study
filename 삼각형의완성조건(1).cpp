#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    int max = 0;
    
    for(int i=0; i<2; i++){
        for(int j=1; j<3; j++){
            if(sides[i]<sides[j]){
                max=sides[i];
                sides[i]=sides[j];
                sides[j]=max;
            }
        }
    }
    if(sides[0]<sides[1]+sides[2]){
        answer = 1;
    }
    else{
        answer = 2;
    }
    return answer;
}