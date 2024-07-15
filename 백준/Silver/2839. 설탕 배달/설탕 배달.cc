#include <iostream>
using namespace std;

int main(){
    int a; 
    int cnt = 0;
    cin >> a;
    while(a>0){
        if(a%5==0){
            cnt = cnt + a/5;
            break;
        }
        a -= 3;
        
        cnt++;
        
        if(a<0){
            cout << -1;
            return 0;
            
        }
    }
    cout << cnt;
    return 0;
}