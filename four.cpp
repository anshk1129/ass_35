#include <iostream>
using namespace std;
template <class X>
void swaap(X &a,X &b){
X temp=a;
a=b;
b=temp;
}
int main(){
  int a,b;
  cout<<"Enter two values for swap "<<endl;
  cin>>a>>b;
  cout<<"Value After Swap "<<endl;
  cout<<" a = "<<a<<endl;
   cout<<" b = "<<b<<endl;
     swaap<int>(a,b);
     cout<<"Value After Swap "<<endl;
  cout<<" a = "<<a<<endl;
   cout<<" b = "<<b<<endl;
    return 0;
}