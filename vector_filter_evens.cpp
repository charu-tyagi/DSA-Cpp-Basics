#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> vec = {1,23,44,5,4,22,9};
    vector <int> evens;
    for(int val : vec){
        if(val%2==0){
            evens.push_back(val);
        }
    }
    for(int val : evens){
        cout << val << " ";
    }

    return 0;
}