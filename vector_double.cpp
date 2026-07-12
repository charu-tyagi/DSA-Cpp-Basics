#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> vec = {1,2,3,4,5};
    int n = vec.size();
    for(int &val: vec){
        val *= 2;
        cout << val << " ";
    }

    return 0;
}