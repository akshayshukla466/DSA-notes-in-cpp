#include<iostream>
using namespace std;


// by [arameter i, we can pass the current number and the sum calculated so far]

void Sum(int i, int sum ) {
    if(i<1){
        cout << "Sum is: " << sum << endl;
        return;
    }
     Sum(i-1, sum + i); // recursive call: add i to sum
   
}
int main(){
    int n;
    cout<<"Bolo boss kiska  chaiye: ";
    
    cin>>n;
    Sum(n,0);
}