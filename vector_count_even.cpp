#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> vec = {5,7,3,56,78,9};
    int size = 6, count = 0;
    for(int i=0;i<size;i++){
        if(vec.at(i)%2==0){
            count++;
        }
    }
    cout << "Total number of even numbers in vector = " << count;

    return 0;
}