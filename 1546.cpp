#include <iostream>
#include <vector>
#include <algorithm>
#include<limits>
using namespace std;

    double score[1001];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n, max, maxindex; 
    double avg = 0.0, sum;
    cin>>n;
    
    for(int i=0; i<n; i++){
        cin>>score[i];
    }

    for(int i=0; i<n; i++){
        if(score[i]<score[i+1]){
            max = score[i+1];
        }
    }

    for(int i=0; i<n; i++){
        score[i]=(score[i]/max)*100;
        sum+=score[i];
    }
    avg = sum/n;
    cout<<avg;

    return 0;
}