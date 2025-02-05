//Program for printing sum of all the divisors of a given number n

#include<iostream>
using namespace std;

void PrintDiv(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i%j==0){
                sum = sum + j;
            }
        }
    }
    cout << sum;
}

int main(){
    int n;
    cin >> n;
    PrintDiv(n);
    return 0;
}

/*Another Approach 
 for(int i=1;i<=n;i++){
    sum = sum + (n/i)*i;
}*/