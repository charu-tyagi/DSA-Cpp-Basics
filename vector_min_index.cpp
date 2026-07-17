#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> vec = {20,5,48,6,2,98};
    int n = vec.size(),minIndex = 0;
    for(int i=1;i<n;i++){
        if(vec.at(i)<vec.at(minIndex)){
            minIndex=i;
        }
    }
    cout << "Index of minimum value = " << minIndex << endl;
    cout << "Minimum value = " << vec.at(minIndex) << endl;

    return 0;
}