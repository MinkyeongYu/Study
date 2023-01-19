#include<iostream>
#include<algorithm>
#include<vector>
#include<limits>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int h, m;
    cin>>h>>m;

    if(m==0){
        if(h==0){
            h = 24;
        }

        h-=1;
        m=60-45;
    }
    else if(m-45<0){
        if(h==0){
            h = 24;
        }
        int tmp = 45-m;
        h-=1;
        m=60-tmp; 
    }
    else{
        m=m-45;
    }
    cout<<h<<" "<<m;
    // cout<<"h: "<<h<<"\t"<<"m: "<<m<<"\n";
    return 0;
}