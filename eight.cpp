#include <iostream>
using namespace std;
template<class T>
class Stack1{
T arr[100];
int top;
public:
Stack1(){
    top=-1;
}
~ Stack1(){
    top=-1;
}
void push1(T a){
    if(top==99){
        cout<<"Stack overflow"<<endl;
          return ;
    }
    top++;
    arr[top]=a;

}
int gettop(){
    return top;
}
T pop1(){
    if(top==-1){
        cout<<"Stack  Overflow "<<endl;
        // return -1;
        // return T;
    }
    return arr[top--];
}
};
int main(){
    Stack1 <int>s;
    Stack1<string>s1;
s.push1(10);
s.push1(20);
s.push1(30);
s.push1(40);
s1.push1("Ansh");
s1.push1("Khandelwal");
cout<<"Top of int stack is "<<s.gettop()<<endl;
cout<<"popped value of int stack is "<<s.pop1()<<endl;
cout<<"Top of string stack is "<<s1.gettop()<<endl;
cout<<"popped value of string stack is "<<s1.pop1();
return 0;
}