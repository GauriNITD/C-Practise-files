#include<iostream>
using namespace std;
int main() {
//Arithmetic Operator
int a=10 , b=20;
cout<<"a ="<<a<<" "<<"b ="<<b;
cout<<"\na+b = "<<a+b;    //Addition
cout<<"\na-b = "<<a-b;    //Subtraction   
cout<<"\na*b = "<<a*b;    //Multiplication
cout<<"\nb/a = "<<b/a;    //Quoitent
cout<<"\nb%a = "<<b%a;    //Remainder
// Increment Decrement Operator
int m;
    //11  //11 //19 //19
m = (++a) + (a++) + (--b) + (b--) ;
cout<<"\nm ="<<m; //61
cout<<"\na ="<<a; //12
cout<<"\nb ="<<b; //18

//Relational Operator

int c =5,d=4;
cout<<(c==d);       //False
cout<<"\n"<<(c!=d); //True
cout<<"\n"<<(c>d);  //True
cout<<"\n"<<(c<d);  //False
cout<<"\n"<<(c>=d); //True
cout<<"\n"<<(c<=d); //False

//input a no. and tell wheather it is less than,more than or equal to 10

int n;
cin>>n;

if(n<10){
    cout<<"n is Less than 10";
}
else if(n>10) {
    cout<<"n is More than 10";
}
else{
    cout<<"n is Equal to 10";
}

//Logical Operator

// && - AND
// || - OR
// ! - NOT

// no. is divisible by 2 , 3 or both

int l;
cin>>l;

if (l%2==0 && l%3==0){
    cout<<"L is divible by both 2 and 3";
}

else if (l%2==0) {
    cout<<"L is divible by only 2";
}

else if (l%3==0) {
    cout<<"L is divible by only 3";
}

else {
     cout<<"L is not divible by both 2 and 3";
}

}