#include <iostream>
using namespace std;
int main(){
    int a=1;
   do{
    cout<<a<<" x "<<"2"<<" = "<<a*2<<"\n";
    a++;
   }while(a<10);


   for(int i=1; i<5;i++){
    cout<<"\n";
   
for (int j=1;j<=i;j++){
    cout<<"*";
}
}
    return 0;
}
