/*
Submission details
Task:	Number Spiral
Sender:	willbutplural
Submission time:	2021-06-07 01:05:24
Language:	C++17
Status:	READY
Result:	ACCEPTED
*/

/*
https://cses.fi/problemset/task/1071
A number spiral is an infinite grid whose upper-left square has number 1. Here are the first five layers of the spiral:

Your task is to find out the number in row y and column x.

Input

The first input line contains an integer t: the number of tests.

After this, there are t lines, each containing integers y and x.

Output

For each test, print the number in row y and column x.

Constraints
1≤t≤105
1≤y,x≤109
Example

Input:
3
2 3
1 1
4 2

Output:
8
1
15
*/

#include <iostream>
#include <math.h>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::max;

#define ll long long

int main() {

    int n;
    cin >> n;

    while(n--) {
        ll y, x;
        cin >> y >> x;
        ll z = max(y, x);
        ll z2 = (z-1) * (z-1), ans;
        if (z %2) {
            if (y == z) {
                ans = z2 + x;
            } else {
                ans = z2+2*z-y;
            }
        } 
        else {
        if (x==z) {
            ans = z2+y;
        } else {
            ans = z2 + 2 *z-x;
        }
        }

        cout << ans << endl;
    }
    
} // main