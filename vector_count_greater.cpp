#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> vec = {12,34,56,7,8,90};
    int threshold = 10,n = vec.size(),count = 0;
    for(int val: vec){
        if(val>threshold){
            count++;
        }
    }
    cout << "Count of elements = " << count;

    return 0;
}