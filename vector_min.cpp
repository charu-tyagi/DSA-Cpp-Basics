#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main(){
    vector <int> vec = {30,45,6,23,121};
    int size = 5,min = INT_MAX;
    for(int i=0;i<size;i++){
        if(vec.at(i)<min){
            min = vec.at(i);
        }
    }
    cout << "Minimum value = " << min;

    return 0;
}