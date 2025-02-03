//Program for counting the number of digits in n that evenly divide n

#include<iostream>
using namespace std;

int countDigits(int n){
    int rem=0, count=0,temp,div;
    temp = n;
	while(n>0){
        div = n % 10;
        rem = div;
        n = n / 10;
        if((rem !=0) && (temp % rem == 0)){      // Check if rem is not 0 to avoid division by zero
            count++;
        }
	}
    return count;
}

int main(){
    int n;
    cin>>n;
    cout<<"Number of digits in "<<n<<" is: "<<countDigits(n);
    return 0;
}