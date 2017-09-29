#include <iostream>
using namespace std;

int main(){
    int sum = 0,c = 50;
    while(c<=100) {
        sum+=c;
        ++c;
    }
    cout<<"50到100的和是"<<sum<<endl;
    return 0;
}
