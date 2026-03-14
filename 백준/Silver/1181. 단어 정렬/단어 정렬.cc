#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    unsigned int n;
    vector<string> v;
    
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }

    // 중복 제거
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());

    // 길이 정렬
    sort(v.begin(), v.end(), [](string &a, string &b){
        if (a.length() == b.length())
            return a < b;
        return a.length() < b.length();
    });
    
    // 출력
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << '\n';
    }
    
}