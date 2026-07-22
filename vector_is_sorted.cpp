#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> vec = {12,3,45,6,7,78};
    bool isSorted= true;
    for(int i=0;i<vec.size()-1;i++){
        if(vec.at(i)>vec.at(i+1)){
            isSorted = false;
        }
    }
    if(isSorted){
        cout << "The vector is Sorted";
    }
    else{
        cout << "The vector is NOT Sorted";
    }
    return 0;
}