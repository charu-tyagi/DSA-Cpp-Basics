#include<iostream>
using namespace std;

// TO PRINT PRIME NUMBERS FROM 2 TO N

bool isPrime(int n){
    int count=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    return(count==2 & n>1);
    
}

int main(){
    int num;
    cout << "Enter the number : ";
    cin >> num;
    for(int i=2;i<=num;i++){
        if(isPrime(i)){
            cout << i <<endl;
        }
    }
    return 0;
}
