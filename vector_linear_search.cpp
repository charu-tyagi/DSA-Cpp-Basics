#include <iostream>
#include <vector>
using namespace std;

int main (){
    vector <int> vec = {1,23,45,6,78,4};
    int size = 6,target = 78,foundIndex = -1;
    for(int i=0;i<size;i++){
        if(vec.at(i)==target){
            foundIndex = i;
            break;
        }
    }
    if(foundIndex != -1){
        cout << "Target is found at index : " << foundIndex;
    }
    else{
        cout << "Target is not found";
    }

    return 0;
}