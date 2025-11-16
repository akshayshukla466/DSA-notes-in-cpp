#include<iostream>
using namespace std;




void print(int i,int n)
{
   if(i>n) return;
   cout<<"JAI SHRI RAM\n";
   print(i+1,n);

}
int main(){
    int n;
    cout<<"Bolo boss kitni baar chaiye: ";
    cin>>n;
    print(1,n);
}