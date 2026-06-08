#include <iostream>
using namespace std;
int main(){
    
// WHILE LOOP
    
    // PRINT NUMBERS FROM 1 TO 5
    
    int count = 1;
    while(count <= 5){
        cout << count << endl;
        count++;
    }
    
    // PRINT NUMBERS FROM 1 TO "N"
    
    int n,a=1;
    cout << "Enter the value of n : ";
    cin >> n;
    while( a<=n ){
        cout << a << endl;
        a++;
    }

// FOR LOOP
    
    //PRINT NUMBERS FROM 1 TO "N" 
    
    int num;
    cout << "Enter the number : ";
    cin >> num;
    for(int j=1;j<=num;j++){
        cout << j << endl;
    }
    
    //  SUM OF NUMBERS FROM 1 TO "N"
    
    int N,sum=0;
    cout << "Enter the number : ";
    cin >> N;
    for(int i=1;i<=N;i++){
        sum=sum+i;
    }
    cout << sum << endl;
    
// SUM OF ALL ODD NUMBERS FROM 1 TO "x"
    
    int x,oddSum=0;
    cout<< "Enter the number : ";
    cin >> x;
    for(int i=1;i<=x;i++){
        if(i%2 != 0){
            oddSum+=i;
        }
    }
    cout << oddSum << endl;
    
// SUM OF ALL ODD NUMBERS FROM 1 TO "N" (USING WHILE LOOP)

    int y,m=1,oddsum=0;
    cout << "Enter the number : ";
    cin >> y;
    while(m<=y){
        if(m%2 != 0){
            oddsum+=m;
        }
        m++;
    }
    cout << oddsum << endl;
    
// SUM OF ALL EVEN NUMBERS FROM 1 TO "N" (USING FOR LOOP)

        int z,evenSum=0;
        cout << "Enter the number : ";
        cin >> z;
        for(int i=1;i<=z;i++){
            if(i%2 == 0){
               evenSum+=i;
            }
        }
    cout << evenSum <<endl;

// PRINT NUMBERS FROM 1 TO "N" (USING DO\WHILE LOOP)

    int number,u=1;
    cout << "Enter the number : ";
    cin >> number;
    do{
        cout<< u <<endl;
        u++;
    }
    while(u<=number);

// CHECK IF A NUMBER IS PRIME OR NOT (USING FOR LOOP)

    int b,temp=0;
    cout << "Enter the number : ";
    cin >> b;
    for(int i=1;i<=b;i++){
        if(b%i==0){
           temp++; 
        }
    }
    if(temp==2){
        cout << "Prime number." << endl;
    } else {
        cout << "Non Prime number." << endl;
    }

// CHECK IF A NUMBER IS PRIME OR NOT

    int c;
    bool isPrime = true;
    cout << "Enter the number : ";
    cin >> c;
    for(int i=2;i<=(c-1);i++){
        if(c%i==0){
            isPrime = false;
            break;
        }
    }
    if(isPrime == true && c>1){
        cout << "Prime number.";
    } else {
        cout << "Non Prime number.";
    }

// PRINT FACTORIAL OF "N"

    int f,fact=1;
    cout << "Enter the number : ";
    cin >> f;
    for(int i=1;i<=f;i++){
        fact=fact*i;
    }
    cout << fact << endl;

// PRINT SUM OF ALL NO. FROM 1 TO "N" WHICH ARE DIVISIBLE BY 3

    int t,total=0;
    cout << "Enter the number : ";
    cin >> t;
    for(int i=1;i<=t;i++){
        if(i%3==0){
            total=total+i;
        }
    }
    cout << total << endl;

    return 0;
}