#include <iostream>
#include <algorithm>
#include <vector>
#include <limits>
using namespace std;

#define MAX 41

int tc, n, dp[MAX][2];

int main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    cin>>tc;

    // 0일때
    dp[0][0]=1;
    dp[1][0]=0;
    dp[0][1]=0;
    // 1일때
    dp[1][1]=1;

    // 배열에 정보 저장
    for(int i=2; i<MAX; i++){
        dp[i][0]=dp[i-2][0]+dp[i-1][0];
        dp[i][1]=dp[i-2][1]+dp[i-1][1];
    }
    // 0일때까지 실행
    while(tc--){
        cin>>n;
        cout<<dp[n][0]<<" "<<dp[n][1]<<"\n";
    }

}