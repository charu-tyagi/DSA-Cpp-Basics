#include <iostream>
using namespace std;

int main(){
    
// VOTE/NOT VOTE
    
    int age;
    cout << "Enter your age : ";
    cin >> age;
    if ( age >= 18 ){
        cout << "You can vote." << endl;
    }else {
        cout << "You can not vote." << endl;
    }
    
// EVEN/ODD

    int n;
    cout << "Enter the number : ";
    cin >> n;
    if ( n % 2 == 0 ){
        cout << "Even number" <<endl;
    }else {
        cout << "Odd number" <<endl;
    }

// POSITIVE/NEGATIVE
    
    int num;
    cout << "Enter the number : ";
    cin >> num;
    if ( num >= 0 ){
        cout << "Positive number" << endl;
    }else {
        cout << "Negative number" << endl;
    }

// GRADING SYSTEM

    int marks ;
    cout << "Enter your marks : ";
    cin >> marks;
    if( marks >= 90 ){
        cout << "Grade = A" << endl;
    }
    else if( marks >=80 && marks < 90 ){
        cout << "Grade = B" << endl;
    }
    else{
        cout << "Grade = C" <<endl;
    }

// UPPERCASE/LOWERCASE

    char ch;
    cout << "Enter the character : ";
    cin >> ch;
    if ( ch >= 'a' && ch <= 'z' ){
        cout << "Lowercase\n";
    }
    else if( ch >= 'A' && ch <='Z' ){
        cout << "Uppercase\n";
    }
    else{
        cout << "Not an alphabetic character\n";
    }

// TERNARY STATEMENT

    int ternary_num;
    cout << "Enter the number : ";
    cin >> ternary_num;
    cout << (ternary_num >= 0 ? "Positive" : "Negative") << endl;

    return 0;
}
