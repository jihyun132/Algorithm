#include <iostream>
using namespace std;

int num_len(int n)
{
    int len = 1;

    while (n / 10 != 0)
    {
        len++;
        n /= 10;
    }
    return len;
}

int main(void)
{
    int a = 0, b = 0, c = 0;
    int b_len; 

    cin >> a;
    cin >> b;
    cin >> c;
    cout << a + b - c << endl;

    b_len = num_len(b);
    for(int i = 0; i < b_len; i++)
        a *= 10;
    cout << a + b - c << endl;
    
    return 0;
}