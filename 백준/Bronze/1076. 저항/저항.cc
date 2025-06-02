#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    vector<string> j = {"black","brown","red","orange","yellow","green","blue",
                       "violet","grey","white"};
    string str1,str2,str3;
    
    cin >> str1;
    auto it1 = find(j.begin(),j.end(),str1);
    int index1 = distance(j.begin(),it1);
    cin >> str2;
    auto it2 = find(j.begin(),j.end(),str2);
    int index2 = distance(j.begin(),it2);
    cin >> str3;
    auto it3 = find(j.begin(),j.end(),str3);
    int index3 = distance(j.begin(),it3);
    long long index_multiper = 1;
    for(int i = 0; i<index3; i++){
        index_multiper *= 10;
    }
    cout << (index1 * 10 + index2) * index_multiper;
}
    