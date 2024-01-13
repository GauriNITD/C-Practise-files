#include<iostream>
using namespace std;

int main() {
     char button;
     cout<<"Enter a Character\n";
     cin>>button;

     switch (button)
     {
        case 'a':
        cout<<"Apple"<<endl;
        break;

        case 'b' :
        cout<<"Boy"<<endl;
        break;

        case 'c' :
        cout<<"Cat"<<endl;
        break;

        case 'd' :
        cout<<"Dog"<<endl;
        break;

        case 'e' :
        cout<<"Egg"<<endl;
        break;

        default :
        cout<<"I am still Learning"<<endl;


     }
     return 0;
}