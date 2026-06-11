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

//  TO PRINT "M" NUMBER OF "*" IN "M" NUMBER OF LINES

    int num;
    cout << "Enter number of lines : ";
    cin >> num;
    for(int i=0;i<num;i++){
        for(int j=0;j<num;j++){
            cout << "*" << " ";
        }
        cout << endl;
    }

// TO PRINT "R" NUMBER OF CHARACTERS IN "R" NUMBER OF LINES

    int N;
    cout << "Enter number of lines : ";
    cin >> N;
    for(int i=0;i<N;i++){
        char ch = 'A';
        for(int j=0;j<N;j++){
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    return 0;
}