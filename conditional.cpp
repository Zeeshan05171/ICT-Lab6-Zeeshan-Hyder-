#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<" enter a nyumber";
    cin>>num;
    if (num>0){
        if (num%2==0){
            cout<<" you enter a positive even number";
        }
        else{
            cout<<"you enter a positive odd number";
        }
    }
    else {
        cout<<"you enter a negative number";
    }
return 0;
}