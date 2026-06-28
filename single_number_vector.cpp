#include <iostream>
#include <vector>
using namespace std;

// TO PRINT UNIQUE VALUES OF A VECTOR

int main(){
    vector <int> vec = {1,2,1,2,4};
    int ans=0;
    for(int val: vec) {
        ans ^= val;
    } 
    cout << "Unique value = " << ans;

    return 0;
}