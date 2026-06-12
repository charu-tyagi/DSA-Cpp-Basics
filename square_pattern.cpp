#include <iostream>
using namespace std;

int main(){

// TO PRINT "N" NUMBERS IN "N" NUMBER OF LINES

  int n;
  cout << "Enter number of lines : ";
  cin >> n;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        cout << j << " ";
    }
    cout << endl;
  }

//  TO PRINT "N" NUMBER OF "*" IN "N" NUMBER OF LINES

    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << "*" << " ";
        }
        cout << endl;
    }

// TO PRINT "N" NUMBER OF CHARACTERS IN "N" NUMBER OF LINES

    
    for(int i=0;i<n;i++){
        char ch = 'A';
        for(int j=0;j<n;j++){
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    return 0;
}