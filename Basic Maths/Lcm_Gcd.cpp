//Program for finding LCM and GCD of given two numbers

#include<iostream>
using namespace std;

void lcm_gcd(int a, int b){
    int n,gcd,lcm;
    if(a<b){
        n = a;
    }
    else{
        n = b;
    }
    for(int i=1;i<=n;i++){
        if(a%i==0 && b%i==0){
            gcd = i;
        }
    }
    lcm = a*b/gcd;
    cout << "LCM = " << lcm << endl << "GCD = " << gcd;
}

int main(){
    int a,b;
    cin >> a >> b;
    lcm_gcd(a,b);
    return 0;
}