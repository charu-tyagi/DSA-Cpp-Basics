#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> vec = {3,43,23,5,6,77};
    int oddSum = 0;
    for(int val: vec){
        if(val % 2 != 0){
            oddSum += val;
        }
    }
    cout << "Sum of odd elements = " << oddSum;

    return 0;
}