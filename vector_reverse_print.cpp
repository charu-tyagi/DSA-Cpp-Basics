#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> vec = {1,23,4,56,7,87};
    int size = 6;
    cout << "Vector in reverse : " << endl;
    for(int i=size-1;i>=0;i--){
        cout << vec.at(i) << " ";
    }
   
    return 0;
}