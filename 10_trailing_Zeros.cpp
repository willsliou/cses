/*
Submission details
Task:	Trailing Zeros
Sender:	willbutplural
Submission time:	2021-06-06 03:25:46
Language:	C++17
Status:	READY
Result:	ACCEPTED
*/

/*
https://cses.fi/problemset/task/1618/
Your task is to calculate the number of trailing zeros in the factorial n!.

For example, 20!=2432902008176640000 and it has 4 trailing zeros.

Input

The only input line has an integer n.

Output

Print the number of trailing zeros in n!.

Constraints
1≤n≤109
Example

Input:
20

Output:
4
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

#define ll long long

int main() {
    // 20 15 10 5 -> 5*4 5*3 5*2 5*1
    ll n, ans = 0;
    // ll fact = 1;
    cin >> n;


    if (n == 5) {
        cout << 1;
    }


    else {
        for (ll i = 5; i<n; i*=5) {
            ans += n/i;
            // cout << "p:" << ans << endl;
        }
        cout << ans;
    }

        // factorial
    // for (int i = 1; i <= n; i++)  {

    //     fact *= i;
    //     cout << "F: " << fact << endl;
    //     if (i % 5 == 0) {
    //         cout << "div by 5" << endl;
    //     }
    // }
    // cout << "a:" << ans;

    // 3 / 5

    // for (int i = 1; i <= n; i++) {
    //     ans = ans*i;
    // }

    // int digit, count, tens = ans % 10;

    // if (tens == 0) {
    //     for (int i = 1; i <= n; i*=10) {
    //         tens =  ans % i;
    //         cout << "i: "<< i << endl;
    //             count++;
    //     }
    //     cout << "d:" << digit  << endl;
    //     cout << "c:" << count  << endl;
    // }

    // cout  << ans;
} // main