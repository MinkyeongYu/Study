#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    int oddnum=0, evennum=0;
    
    for(int i=0; i<num_list.size(); i++){
        if(num_list[i]%2==0){
            evennum++;
        }
        else{
            oddnum++;
        }
    }
    answer.push_back(evennum);
    answer.push_back(oddnum);
    return answer;
}