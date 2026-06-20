#include <iostream>
#include <climits>
using namespace std;

// TO FIND LARGEST/SMALLEST VALUE IN ARRAY

int main(){
    int size = 5;
    int marks[size] = {100,96,87,74,43};
    int largest = INT_MIN;
    int smallest = INT_MAX;
    for(int i=0;i<size;i++){
        smallest = min(marks[i],smallest);
        largest = max(marks[i],largest);
    }
    cout << "largest = " << largest << endl;
    cout << "smallest = " << smallest << endl;
     
    return 0;
}