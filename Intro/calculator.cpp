#include<iostream>
using namespace std;
int main() {
    int a , b ;
    cout<<"Enter the Two Numbers\n";
    cin>>a>>b;
    
    char operation;
    cout<<"Enter the Arithmetic Operation to be Performed (+,-,*,/,%) :\n";
    cin>>operation;

    switch (operation) {
        case '+' : 
        {
        int sum = a+b;
        cout<<"Sum = ";
        cout<<sum;
        break;
        }
        case '-' : 
        {
        int diffrence = a-b;
        cout<<"Diffrence =";
        cout<<diffrence;
        break;
        }
        case '*' : 
        {
        int product=a*b;
        cout<<"Product =";
        cout<<product;
        break;
        }
        case '/' :
        {
        int quotient=b/a;
        cout<<"Quotient =";
        cout<<quotient;
        break;
        }
        case '%' :
        {
        int remainder = b%a;
        cout<<"Remainder =";
        cout<<remainder;
        break;
        }
        default :
        cout<<"Invalid Operation"<<endl;
    
    }

    return 0;

}