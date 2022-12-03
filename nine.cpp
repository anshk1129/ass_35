#include<iostream>
using namespace std;
template<class X>
X addition (X a ,X b){
return a+b;
}
int main(){
    cout<<"Addition of int values are "<<addition<int>(10,20)<<endl;
    cout<<"Addition of float values are "<<addition<float>(10.02f,20.23f);
    return 0;
}