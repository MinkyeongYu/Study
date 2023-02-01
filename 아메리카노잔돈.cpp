#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(int money) {
    vector<int> answer;
    int americano = 5500;
    int drinkable = money/americano;
    int remain = money-drinkable*americano;
    //money가 아메리카노 한잔보다 많거나 같을때     
    if(drinkable!=0){
        answer.push_back(drinkable);
        answer.push_back(remain);
    }
    //money가 아메리카노 한잔보다 적을때      
    else{
        answer.push_back(0);
        answer.push_back(money);
    }
    return answer;
}