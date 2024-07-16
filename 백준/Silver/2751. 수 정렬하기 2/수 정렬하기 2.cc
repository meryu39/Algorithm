#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int start;
    cin >> start;
    vector<int> a;
    int b;

    for (int i = 0; i < start; ++i) {
        cin >> b;
        a.push_back(b);
        
    }
    sort(a.begin(), a.end());
    
    for (int i = 0; i < start; ++i) {
        cout << a[i] << "\n";
    }
    return 0;
}