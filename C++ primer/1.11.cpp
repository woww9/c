#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cout<<"请输入两个整数："<<endl;
    cin>>a>>b;
    if(a-b<0){
        c=a;
        a=b;
        b=c;
    }
   while(b<=a){
    cout<<b<<endl;
    b++;
   }
   return 0;

}
