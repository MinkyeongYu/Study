#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int pizza = 0;
    
    if(n%7!=0){
        pizza = (n/7) + 1;
    }
    else{
        pizza = n/7;
    }
    
    return pizza;
}