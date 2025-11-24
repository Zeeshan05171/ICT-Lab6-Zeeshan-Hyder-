#include <iostream>
using namespace std;
int main(){
    
    cout << "Menu Options:\n"
     << "B For biryani = 260 \n"
     << "C For chicken =900 \n"
     << "F For fries 150 \n"
     << "S For salad 30 \n"
     << "D For dessert 250 \n"
     << "Please enter your choice: ";
char choice;
cin >> choice;
int quantity;
cout << "Enter quantity: ";
cin >> quantity;
int total;
float dic;
float actual;
if (choice == 'B' || choice == 'b') {
    total = quantity * 260;
    cout<<"You order a "<<quantity<<" birayani\n"
         <<"Your total bill is = " << total;
}
else if (choice=='C'||choice=='c'){
    total = quantity * 900;
    cout << "You order a " << quantity << " Chiken\n"
         << "Your total bill is = " << total;
}
else if (choice == 'F' || choice == 'f')
{
    total = quantity * 150;
    cout << "You order a " << quantity << " fries\n"
         << "Your total bill is = " << total;
}
else if (choice == 'D' || choice == 'd')
{
    total = quantity * 250;
    cout << "You order a " << quantity << " Desert\n"
         << "Your total bill is = " << total;
}
else if (choice == 'S' || choice == 's')
{
    total = quantity * 30;
    cout << "You order a " << quantity << " salad\n"
         << "Your total bill is = " << total;
}
else 
{
    cout << "Invalid choice. Please select a valid menu option.";
}
if (total >600){
    dic =total*0.1;
    actual = total -dic;
    cout<<"You got a 10% discoutnt\n"<<" Now your bill is "<<actual;
}
else {
    dic =total* 0.05;
    actual = total - dic;
    cout<<"You got a 5% dicount. \n "<<"Now your total bill is "<<actual;
}
return 0;
}
    
