#include <iostream>

using namespace std;

int main(){
    
    int a,b,c;
    int cnt = 0;
    
    int num;
    cin >> num;
    
    if(num < 100){
        cnt = num;
    }
    else{
        cnt = 99;
        for(int i =100; i<=num; i++){
            int hun = i/100;
            int ten = (i/10) % 10;
            int one = i%10;
            
            if((hun - ten) == (ten-one)){
                
                cnt++;
                
                
            }
        }
    }
    cout << cnt;
    return 0;
}