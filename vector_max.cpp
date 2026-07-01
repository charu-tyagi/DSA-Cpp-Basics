#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main(){
    vector <int> vec = {1,3,4,6,8};
    int size=5,max=INT_MIN;
    for(int i=0;i<size;i++){
        if(vec.at(i)>max){
            max=vec.at(i);
        }
    }
    cout << "Maximum value = " << max;

    return 0;
}
