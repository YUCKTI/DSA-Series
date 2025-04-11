#include<iostream>
using namespace std;
 int  sum(int num1, int num2){
    int total = num1+num2;
    return total ;
 }
 int main(){
    int num1;
    int num2;
    cin>>num1;
    cin>>num2;
    int value = sum(num1,num2);
    cout<<value<<" ";
 }
