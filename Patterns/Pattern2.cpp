//Program for printing right-angled triangle star pattern

#include <iostream>
using namespace std;

void Pattern(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    Pattern(n);
    return 0;
}