#include <iostream>
using namespace std;
int main(){
    /*int a; 
    for (a=1; a<=20; a++){
    if (a%2==0){
    cout<<a<<"\n";
    }
}

int sub1,sub2,sub3,sub4;
cout<<"Enter a marks of 4 subjects: ";
cin>>sub1>>sub2>>sub3>>sub4;
float av;
av=(sub1+sub2+sub3+sub4)/4.0;
cout<<"Average marks: "<<av<<"\n";
if (av>=80 && av<=100){
    cout<<"Grade A";
}
else if (av>=60 && av<80){
    cout<<"Grade B";
}
else if (av>=40 && av<60){
    cout<<"Grade C";
}
else {
    cout<<"Grade F";
}

char choice;
cout<<"Enter  B for Birayni=150 \n"
    <<"C for Chiken =200 \n"
    <<"D For desert =150";
cin >> choice;
int total;
int quatity;
cout<<"Enter quantity: ";
cin>>quatity;
switch(choice){
    case('B'):
    total=150*quatity;
    
        cout<<"you choose B for Birayni=150 \n";
        cout << "Total amount: " << total << "\n";
        break;
    case('C'):
    total=200*quatity;
        cout<< "you chhose a Cgiken";
        cout << "Total amount: " << total << "\n";
        break;
    case('D'):
    total=150*quatity;
        cout<<"you chose desrt  ";
        cout << "Total amount: " << total << "\n";
        break;
    default:
        cout<<"Invalid";
        break;
}*/

int positiveCount = 0, negativeCount = 0;
int num;
for (int i=1; i<=5; i++){
    cout<<"Enter number: ";
    cin>>num;
    if (num>=0){
        positiveCount++;
    }
    else {
        negativeCount++;
    } 
}
cout<<"Positive numbers: "<<positiveCount<<"\n";
cout<<"Negative numbers: "<<negativeCount<<"\n";

return 0;
}