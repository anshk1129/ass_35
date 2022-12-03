#include<iostream>
#include<string>
using namespace std;
class Shape{
string s;
public:
Shape(string s1){
    s=s1;
}
Shape(){

}
void show(){
    cout<<"  Shape is "<<s;
}
};
template<class T>
class Area:public Shape{
T a,b;
public:
Area(){
    
}
Area(T c,T d,string s2):Shape(s2){
a=c;b=d;
}
void area1(){
     cout<<"Area  is "<<a*b;
}
};
int main(){
   Area <float>a1(10.11f,11.02f,"Rectangle");
//    Area(10.11);
   a1.area1();
   a1.show();
    return 0;
}
