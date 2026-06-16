#include <iostream>
using namespace std;

// TO CHECK IF A NUMBER IS PRIME OR NOT

void prime(int n){
    int count=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==2){
        cout << "Prime Number" <<endl;
    }
    else{
        cout << "Non-Prime Number" << endl;
    }
    return ;
}

int main(){
    int num;
    cout << "Enter the number : ";
    cin >> num;
    prime(num);

    return 0;
}