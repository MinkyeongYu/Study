#include <iostream>
#include <algorithm>
#include <vector>
#include <limits>
using namespace std;

int a=0, b=0;

int fibonacci(int n){
    if(n==0){
        a++;
        return a;
    }
    else if(n==1){
        b++;
        return b;
    }
    else{
        return fibonacci(n-1)+fibonacci(n-2);
    }
}

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int tc;
    cin>>tc;

    for(int i=0; i<tc; i++){
        int n;
        cin>>n;
        fibonacci(n);
        cout<<a<<" "<<b<<"\n";
        a=0; b=0;
    }

    return 0;
}