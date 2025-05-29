#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    vector<string> vec;
    int num;
    cin >> num;
    for(int i = 0; i < num; i++){
        string strinput;
        cin >> strinput;
        vec.push_back(strinput);
    }

    int len = vec[0].size();
    string result = vec[0];  

    for(int i = 0; i < num - 1; i++){ 
        for(int j = 0; j < len; j++){
            if(vec[i][j] != vec[i+1][j]){
                result[j] = '?';
            }
        }
    }

    cout << result;
    return 0;
}
