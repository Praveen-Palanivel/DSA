//Program for checking if the number is Armstrong number or not 

#include<iostream>
#include<cmath>
using namespace std;

int ArmNo(int n){
    int rem=0,temp,sum=0,og,x=0;
    temp=og=n;
    while(og>0){
        og = og/10;
        ++x;
    }
    while(n>0){
        rem = n % 10;
        sum = sum + static_cast<int>(round(pow(rem,x)));  //static_cast<int>(round) is used to fix precision errors 
        n = n/10;
    }
    if(temp == sum){
        return sum;
    }
    else{
        return sum;
    }
}

int main(){
    int n;
    cin >> n;
    cout << ArmNo(n);
    return 0;
}