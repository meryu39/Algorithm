#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<vector<int>> array;
vector<bool> visit;
long long cal(int r){
    queue<pair<int,int>> q;
    q.push({r, 0});
    visit[r] = true;
    long long count = 0;
    while(!q.empty()){
        auto [node, deep] = q.front();
        q.pop();
        bool isleaf = true;
        for(int i:array[node]){
            if(!visit[i]){
                visit[i] = true;
                q.push({i,deep+1});
                isleaf = false;
            }
        }
        if(isleaf){
            count += deep;
            
        }
    }
    return count;
}
int main(){
    int a;
    cin >> a;
    array.resize(a+1);
    visit.resize(a+1, false);

    for(int i = 0; i<a-1; ++i){
        int b,c;
        cin >> b >> c;
        array[b].push_back(c);
        array[c].push_back(b);
    }
    long long count = cal(1);
    if(count % 2 != 0){
        cout <<"Yes";
    }
    else{
        cout << "No";
    }
    
}