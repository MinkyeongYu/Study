#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string) {
    string answer = "";
    
    for(int i=0; i<my_string.length()/2; i++){
        swap(my_string[i], my_string[my_string.length()-i-1]);
    }
    return my_string;
}