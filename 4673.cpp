// n과 n의 각 자리수를 더하는 함수 작성, 백준 4673
#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
using namespace std;

bool num[10001];

int d(int n){
    int result = n;
    while(n>0){
        result = result + n % 10;
        n = n / 10;
    }
    return result;
}

void self_num(){
    int temp;
    num[1]=false;
    for(int i=0; i<10001; i++){
        if(i<10001){
            temp = d(i);
            if(temp<10001){
                num[temp]=true;
            }
        }
    }
}
int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    self_num();
    for(int i =0; i<10001; i++){
        if(!num[i]){
            cout<<i<<"\n";
        }
    }

    return 0;
}