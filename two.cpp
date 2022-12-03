#include<iostream>
using namespace std;
template<class X>
X great (X a ,X b){
if(a>b)
return a;
return b;
}
int main(){
    cout<<"Greater of int values are "<<great<int>(10,20)<<endl;
    cout<<"Greater of float values are "<<great<float>(10.02f,20.23f);
    return 0;
}