#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> vec;
    cout << "size = " << vec.size() << endl;
    vec.push_back(32);
    vec.push_back(56);
    vec.push_back(18);
    vec.push_back(23);
    
    vec.pop_back();
    
    for(int i : vec){
        cout << i << endl;
    }
    
    cout << "size of vector after push back = " << vec.size() << endl;

    cout << "First value = " << vec.front() << endl;
    cout << "Last value = " << vec.back() << endl;
    cout << "Middle value = " << vec.at(1) << endl;

    cout << "size of vector = " << vec.size() << endl;
    cout << "capacity of vect = " << vec.capacity() << endl;

    return 0;
}