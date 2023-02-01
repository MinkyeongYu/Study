#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> dots) {
    int answer = 0;
    
    double x1x2 = dots[0][0] - dots[1][0];
    double y1y2 = dots[0][1] - dots[1][1];
    double x3x4 = dots[2][0] - dots[3][0];
    double y3y4 = dots[2][1] - dots[3][1];
    //기울기가 같으면 평행
    if(x1x2/y1y2 == x3x4/y3y4) return 1;
    
    double x1x3 = dots[0][0] - dots[2][0];
    double y1y3 = dots[0][1] - dots[2][1];
    double x2x4 = dots[1][0] - dots[3][0];
    double y2y4 = dots[1][1] - dots[3][1];
    if(x1x3/y1y3 == x2x4/y2y4) return 1;
    
    double x1x4 = dots[0][0] - dots[3][0];
    double y1y4 = dots[0][1] - dots[3][1];
    double x2x3 = dots[1][0] - dots[2][0];
    double y2y3 = dots[1][1] - dots[2][1];
    if(x1x4/y1y4 == x2x3/y2y3) return 1;
    
    return answer;
}