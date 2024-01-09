#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int puse;
int purse;
bool cmp(vector<int> a, vector<int> b) {
    return (a[purse] < b[purse]);
}

vector<vector<int>> solution(vector<vector<int>> data, string ext, int val_ext, string sort_by) {
    vector<vector<int>> answer;
    int n = data.size();

    if (ext == "code") {
        puse = 0;
    } else if (ext == "date") {  
        puse = 1;
    } else if (ext == "maximum") {
        puse = 2;
    } else if (ext == "remain") {
        puse = 3;
    }


    if (sort_by == "code") {
        purse = 0;
    } else if (sort_by == "date") {  
        purse = 1;
    } else if (sort_by == "maximum") {
        purse = 2;
    } else if (sort_by == "remain") {
        purse = 3;
    }

    vector<vector<int>> index;
    for (int i = 0; i < n; i++) {
        if (data[i][puse] < val_ext) {
            index.push_back(data[i]);
        }
    }

    sort(index.begin(), index.end(), cmp);

    answer = index;

    return answer;
}
