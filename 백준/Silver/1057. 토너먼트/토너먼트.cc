#include <iostream>
using namespace std;
int main(){
    int a,b,n;
    int round = 0;
    
    cin >>n >> a >> b;
    while(a!=b){
        a = (a+1)/2;
        b = (b+1)/2;
        round++;
    }
    cout << round;
}