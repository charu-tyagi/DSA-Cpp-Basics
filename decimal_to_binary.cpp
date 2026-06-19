#include <iostream>
using namespace std;

// TO CONVERT A NUMBER FROM DECIMAL TO BINARY
   
    long long decToBinary(int decNum){
    long long ans=0;
    int pow=1;
    while(decNum>0){
        int rem=decNum%2;
        decNum=decNum/2;
        ans+=(rem*pow);
        pow*=10;
    }
    return ans;
   }

   int main(){
    int decNum;
    cout << "Enter decimal number : ";
    cin >> decNum;
    cout << decToBinary(decNum) << endl;
    
    return 0;
   }