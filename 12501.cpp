#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
using namespace std;

int n, sum; int ti[6]; int pi[1001];

int main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    cin>>n;

    for(int i=0; i<n; i++){
        cin>>ti[i]>>pi[i];
    }

    for(int i=0; i<n+1; i++){
        if(n > i+ti[i]-1){
            sum += pi[i];
            i = i + ti[i];
        }
        else if(ti[i]>ti[i+1]){
            i = i + 1;
            continue;
        }
        
    }

    cout<<sum;
    return 0;
}