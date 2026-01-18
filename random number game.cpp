#include <iostream>
#include<ctime>
using namespace std;
int main() {
    int tri=0;
    int num;
    //to generate random number we use this function
    srand(time(0));
    //give a random number between 1 to 100
    int code=(rand()%100)+1;
    cout<<"enter a number between 1 to 100 "<<endl;
    cin>>num;
    while(num!=code){
     tri++;
     if(num<code){
         cout<<"T00 SMALL🤌!!"<<endl;
         cin>>num;
     }
     else{
         cout<<"TOO BIG😮!!"<<endl;
         cin>>num;
     }
    }
    cout<<"It's your right choice✅"<<endl;

    return 0;
}