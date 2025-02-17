//Program for printing Increasing Letter Triangle Pattern

#include<iostream>
using namespace std;

void Pattern(int n){
    for(int i=0;i<n;i++){
        for(char j='A';j<='A'+i;j++){ 
            cout << j << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    Pattern(n);
    return 0;
}