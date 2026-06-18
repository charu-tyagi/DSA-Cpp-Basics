#include<iostream>
using namespace std;

// TO CONVERT A NUMBER FROM BINARY TO DECIMAL

int binToDec(int binNum){
    int ans=0,pow=1,rem;
    while(binNum > 0){
        rem=binNum%10;
        ans+=(rem*pow);
        
        
        binNum/=10;
        pow*=2;
    }
    return ans;
}

int main(){
    int binNum;
    cout << "Enter binary number : ";
    cin >> binNum;
    cout << binToDec(binNum) << endl;

    return 0;
}