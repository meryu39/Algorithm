#include <iostream>

using namespace std;
#define MAX 1000000000

int main(){
    long long X,Y,Z;
    cin >> X >> Y;
    int cnt = -1;

    Z = (Y*100/X);
    if(Z>= 99){ //99%일경우 100%를 만드는 경우의 수는 무한대임
        cout << cnt;
        return 0;
    }

    int left = 0; 
    int right = MAX;
    while(right >= left){
        int mid = (right + left)/2;
        int temp = ((Y+mid)*100) / (X+mid);
        if(temp > Z){
            right = mid-1;
        }
        else{
            left = mid+1;
        }
    }
    cout << left;
}