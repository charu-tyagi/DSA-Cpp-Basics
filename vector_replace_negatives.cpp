#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> vec = {10,24,-4,5,-34,2,-56};
    for(int &val : vec){
        if(val < 0){
            val = 0;
        }
    }
    for(int val : vec){
        cout << val << " ";
    }

    return 0;
}