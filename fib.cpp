#include<iostream>
using namespace std;

void fibonacci(int n) {
    if (n < 1) {
        cout << "Invalid input" << endl;
        return;
    }
    int t1 = 0, t2 = 1, nextTerm = 0;
    for (int i = 1; i <= n; ++i) {
        if(i == 1) {
            cout << t1 << " ";
            continue;
        }
        if(i == 2) {
            cout << t2 << " ";
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        cout << nextTerm << " ";
    }
    cout << endl;
}
int main()
{
     fibonacci(9);
    return 0;
}