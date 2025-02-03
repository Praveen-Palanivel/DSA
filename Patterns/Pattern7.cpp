//Program for printing increasing number triangle pattern 

#include<iostream>
using namespace std ;

void Pattern(int n){
    int k=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << ++k << "\t";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    Pattern(n);
    return 0;
}