#include<iostream>
using namespace std;
int main() {
//Neha can go out only on odd days using Continue
int pocketmoney = 3000;
    for(int i =1;i<= 30;i++) {

        if(i%2==0){
            continue;
        }
        if (pocketmoney==0) {
            break;
        }
        cout<<"Neha can go Out"<<endl;
        pocketmoney = pocketmoney - 500;

    }
}
//Neha cannot go if she has no money using Break
