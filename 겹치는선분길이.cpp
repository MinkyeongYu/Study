#include <string>
#include <vector>

using namespace std;

int arr[200];

int solution(vector<vector<int>> lines) {
    int answer = 0;
    int a, b;
    
    for(int i=0; i<lines.size(); i++)
        // 범위 내에 있는 것들은 모두 1씩 값을 늘려준다.
        for(int j=lines[i][0]; j<lines[i][1]; j++)
            arr[j+100]++;

    for(int i=0; i<200; i++)
        // 2이상이라는 것은 두개 이상의 선분이 겹쳤다는 뜻 겹치는 좌표마다 +1해줘서 길이를 구한다.  
        if(arr[i]>=2) answer++;

    return answer;
}