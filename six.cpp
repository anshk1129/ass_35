#include <iostream>
using namespace std;
template<typename T>
T sumarr(T *a,int n){
T  sum=0;
for(int i=0;i<n;i++){
sum=sum+a[i];
}
return sum;

}
int main(){
int arr[]={10,11,12,13,14,15};
cout<<"Sum of int array is "<<sumarr<int>(arr,6)<<endl;
float arr1[]={10.12f,11.23f,12.35f,13.454f,14.22f,15.131f};
cout<<"Sum of float array is "<<sumarr<float>(arr1,6)<<endl;
return 0;
}