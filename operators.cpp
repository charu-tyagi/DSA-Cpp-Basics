#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout << "Enter first number : ";
    cin >> a;
    cout << "Enter second number : ";
    cin >> b;
    int c;
    cout << "Enter third number : ";
    cin >> c;
    
    // ARITHMETIC OPERATORS :-
   
    int sum = a+b ;
    cout << "Sum of first and second number = " << sum << endl;
    int sub = a-b;
    cout << "Difference between first and second number is = " << sub <<endl;
    int product = a*b;
    cout << "Product of first and second number is = " << product << endl;
    int division = a/b;
    cout << "Division of first and second number is = " << a/(double)b << endl;
    int modulo = a%b;
    cout << "Remainder of first and second number is = " << modulo << endl;
    
    // RELATIONAL OPERATORS :-
    
    cout << (a<b) << endl;
    cout << (a>b) << endl;
    cout << (a==b) << endl;
    cout << (a!=b) << endl;
    cout << (a>=b) << endl;
    cout << (a<=b) << endl;
    
    // LOGICAL OPERATORS :-
   
    cout << ((a<b) || (c>b)) << endl;
    cout << ((a<b) && (c>b)) << endl;
    
    // CONDITIONAL STATEMENT :-
    
    cout << !(a<b) << endl;

    return 0;
}