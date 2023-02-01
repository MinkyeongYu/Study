#include <iostream>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>


using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    
    for(int i=0; i<numbers.size()-1; i++){
        for(int j=i+1; j<numbers.size(); j++){
            if(numbers[i]<numbers[j]){
                int tmp = numbers[i];
                numbers[i]=numbers[j];
                numbers[j]=tmp;
            }
        }
    }
    answer = numbers[0] * numbers[1];
    return answer;
}