#include<iostream>
#include<climits>
using namespace std;

// TO PRINT THE INDEX OF SMALLEST/LARGEST VALUE OF ARRAY    

int main(){
    int i,size=5,smallest=INT_MAX,largest=INT_MIN,smallestIndex,largestIndex;
    int marks[size]={54,98,100,67,82};
    for(i=0;i<size;i++){
       if(marks[i]<smallest){
        smallest = marks[i];
        smallestIndex = i; 
       }
       if(marks[i]>largest){
        largest = marks[i];
        largestIndex = i;
       }
    }
    
    cout << "Index of smallest value = " << smallestIndex << endl;
    cout << "Index of largest value = " << largestIndex << endl;
     
    return 0;
}