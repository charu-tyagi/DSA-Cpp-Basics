#include <iostream>
using namespace std;

// TO CALCULATE BINOMIAL COEFFICIENT FOR N & R

long long fact(int n){
    if(n<0) return 0;
       
    long long fact=1;
    for(int i=1;i<=n;i++){
      fact*=i;
       
    }
    return fact;
}
long long nCr(int n,int r){
    if(r<0 || r>n){
        return 0;
    }
    long long fact_n = fact(n);
    long long fact_r = fact(r);
    long long fact_nmr = fact(n-r);

    return fact_n/(fact_r*fact_nmr);
}

int main(){
    cout << "6C3 = " << nCr(6,3) << endl;
    cout << "15C4 = " << nCr(15,4) << endl;

    return 0;
}