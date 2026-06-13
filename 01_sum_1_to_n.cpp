#include <iostream>
using namespace std;

// TO PRINT SUM OF NUMBERS FROM 1 TO "N" USING FUNCTIONS
int sum(int n){
    int s=0;
    for(int i=1;i<=n;i++){
        s+=i;
    }
    return s;
}

int main(){
    cout << sum(10) << endl;

    return 0;

}

