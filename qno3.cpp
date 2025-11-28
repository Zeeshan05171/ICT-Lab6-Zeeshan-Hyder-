#include <iostream>
using namespace std;
int main(){
    int l,w,s;
    cout<<"Enter length and width of rectangle: ";
    cin>>l>>w>>s;
    char ch;
    if (l==w==s){
        ch='A';
    }
    else if(l==w || w==s || l==s){
        ch='B';
    }
    else{
        ch='C';
    }
    
    switch(ch){
        case 'A':
            cout<<"Equilateral triangle";
            break;
        case 'B':
            cout<<"Isosceles triangle";
            break;
        case 'C':
            cout<<"Scalene triangle";
            break;
        default:
            cout<<"Invalid";
            break;
    }
}