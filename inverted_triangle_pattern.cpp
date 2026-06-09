#include <iostream>
using namespace std;

int main(){

// TO PRINT INVERTED TRIANGLE PATTERN (NUMBER VERSION)

   int n;
   cout << "Enter number of lines : ";
   cin >> n;
   for(int i=0;i<n;i++){
    for(int j=0;j<i;j++){
        cout << " ";
    }
    for(int j=0;j<(n-i);j++){
        cout << (i+1) ;
    }
    cout << endl;
   }

// TO PRINT INVERTED TRIANGLE PATTERN (CHARACTER VERSION)

   char ch = 'A';
   for(int i=0;i<n;i++){
    for(int j=0;j<i;j++){
        cout << " ";
    }
    for(int j=0;j<(n-i);j++){
        cout << ch;
    }
    ch++;
    cout << endl;
   }

   return 0;
}