#include <iostream>
using namespace std;

// TO CALCULATE SUM OF DIGITS OF A NUMBER

   int sumOfDigits(int num){
        int digSum=0;
        while(num > 0){
            int lastDig = num%10;
            num = num/10;
            digSum += lastDig;
        }
        return digSum;
   }

   int main(){
      cout << sumOfDigits(56) << endl;
     
    return 0;
   }