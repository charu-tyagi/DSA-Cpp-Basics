#include <iostream>
using namespace std;

int main(){

// TO PRINT BUTTERFLY PATTERN

   int n;
   cout << "Enter number of lines : ";
   cin >> n;
   for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
        cout << "*";
    }
    for(int j=0;j<2*(n-i-1);j++){
        cout << " ";
    }
    for(int j=0;j<=i;j++){
        cout << "*";
    }
    cout << endl;
   }
   for(int i=0;i<n-1;i++){
    for(int j=i;j<n-1;j++){
        cout << "*";
    }
    for(int j=0;j<2*(i-1)+n;j++){
        cout << " ";
    }
    for(int j=i;j<n-1;j++){
        cout << "*";
    }
    cout << endl;
   }
}