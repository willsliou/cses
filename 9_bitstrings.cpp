/*
Submission details
Task:	Bit Strings
Sender:	willbutplural
Submission time:	2021-06-04 21:49:55
Language:	C++17
Status:	READY
Result:	ACCEPTED
*/

/*
Your task is to calculate the number of bit strings of length n.

For example, if n=3, the correct answer is 8, because the possible bit strings are 000, 001, 010, 011, 100, 101, 110, and 111.

Input

The only input line has an integer n.

Output

Print the result modulo 109+7.

Constraints
1≤n≤106
Example

Input:
3

Output:
8
*/

#include <iostream>
#include <math.h>
using std::cin;
using std::cout;
using std::endl;
using std::string;
#define ll long long

int main() {
    // 1 3 4 2
    // 1 3 5 2 4
    ll n, ans = 1;
    cin >> n;

    for(int i = 0; i<n; i++)
        ans = 2*ans%((int)1e9+7);
    
    // cout << pow(2,n) % ((int)1e9+7);
        // cout << "r: " << ans << endl;
        
    cout << ans;


} // main