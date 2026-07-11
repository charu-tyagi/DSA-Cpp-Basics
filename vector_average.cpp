#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> vec = {2,3,4,54,56,667};
    int n = vec.size();
    double sum = 0;
    for(int val : vec){
        sum += val;
    }
    cout << "Average of all elements = " << sum/n << endl;

    return 0;
}