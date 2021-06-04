/*
Submission details
Task:	Permutations
Sender:	willbutplural
Submission time:	2021-06-04 09:52:59
Language:	C++17
Status:	READY
Result:	ACCEPTED
*/

/*
https://cses.fi/problemset/task/1070
A permutation of integers 1,2,…,n is called beautiful if there are no adjacent elements whose difference is 1.

Given n, construct a beautiful permutation if such a permutation exists.

Input

The only input line contains an integer n.

Output

Print a beautiful permutation of integers 1,2,…,n. If there are several solutions, you may print any of them. If there are no solutions, print "NO SOLUTION".

Constraints
1≤n≤106
Example 1

Input:
5

Output:
4 2 5 3 1

Example 2

Input:
3

Output:
NO SOLUTION
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;
#define ll long long

int main() {
    // 1 3 4 2
    // 1 3 5 2 4
    ll n, ans=1;
    cin >> n;

    for(int i = 0; i<n; i++)
        ans = 2*ans%((int)1e9+7);
        cout << "r: " << ans << endl;
        
    cout << ans;


} // main