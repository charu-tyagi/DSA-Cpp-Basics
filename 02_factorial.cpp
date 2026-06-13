#include <iostream>
using namespace std;

// TO PRINT FACTORIAL OF "N"

int fact(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f*=i;
    }
    return f;
}

int main(){
    
    cout << fact(4) << endl;
    cout << fact(5) << endl;
    return 0;
}