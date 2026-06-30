#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> vec = {1,2,3,6,7};
    int totalSum=0,size=5;
    for(int i=0;i<size;i++){
        totalSum=totalSum+vec.at(i);
    }
    cout << "Sum of all elements = " << totalSum;

    return 0;

}
