#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    int range = array.size()/2;
    
    for(int i=0; i<array.size()-1; i++){
        for(int j=i+1; j<array.size(); j++){
            if(array[i]>array[j]){
                
                int tmp = array[j];
                array[j] = array[i];
                array[i] = tmp;
            }
        }
    }
    
    answer = array[range];
    

    return answer;
}