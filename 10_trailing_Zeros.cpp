/*
Submission details
Task:	Trailing Zeros
Sender:	willbutplural
Submission time:	2021-06-07 00:26:51
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

/* What I learned:
    After coming up with a solution, I tried to fully understand the exactly how prime factorization came into play and how it reacts to different edge cases. 
    My first solution included both pairs of 2 and 5, and eventually I dropped the 5 and tried to understand why. Here are my findings.
    https://brilliant.org/wiki/trailing-number-of-zeros/#
    Trailing zeros can be found more efficiently using prime factorization.
    The number of trailing zeros would be the number of pairs of 2 and 5 because it makes up a pair of ten.
    The theoreum states if an integer is expressed as 2^a * 5^b * k, and k is not divisible by 2 and 5, then the number of trailing zeros would be min(a,b).

    
*/


#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

#define ll long long

int main() {
    // 20! = 20 15 10 5 -> 5*4 5*3 5*2 5*1
    // 5! = 5 4 3 2 1 
    ll n, ans = 0;
    // ll fact = 1;
    cin >> n;


    // Idea: Find the number of multiples of 5
    // multiple of 5 in the factorial product will contribute 11 to the number of trailing zeros. On top of this, each multiple of 25 will contribute an additional 11 to the number of trailing zeros. Then, each multiple of 125 will contribute another 11 to the number of trailing zeros,
    // 1000! = 1000 / 5 = 200 multiples of 5
    // 1000 / 25 = 40 multiples of 25 (additional multiples)
    // 1000 / 125 = 8 multiples of 125 (additional)
    // 1000 / 625 = 1 
    // Num of trailing zeros is 200 + 40 + 8 + 1 = 249
    
    // if (n/5 == 1) {
    //     cout << 1;
    // }


    // else {
        // Finds number of multiples of 5's in n, takes in account of the duplicates

    for (ll i = 5; i<=n; i*=5) {
        ans += n/i;
        // cout << "p:" << ans << endl;
    }
    cout << ans;
    // }
} // main
