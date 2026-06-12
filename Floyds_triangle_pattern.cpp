#include <iostream>
using namespace std;

int main(){

// TO PRINT FLOYD'S TRIANGLE PATTERN (NUMBER VERSION)

   int n,num=1;
   cout << "Enter nymber of lines : ";
   cin >> n;
   for(int i=0;i<n;i++){
    for(int j=1;j<=(i+1);j++){
        cout << num << " ";
        num++;
    }
    cout << endl;
   }

// TO PRINT FLOYD'S TRIANGLE PATTERN (CHARACTER VERSION)

    
    char ch='A';
    for(int i=0;i<n;i++){
        for(int j=1;j<=(i+1);j++){
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
  
    return 0;
}