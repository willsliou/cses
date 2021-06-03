/*
Submission details
Task:	Repetitions
Sender:	willbutplural
Submission time:	2021-06-03 10:42:11
Language:	C++17
Status:	READY
Result:	ACCEPTED
*/

/*
https://cses.fi/problemset/task/1094
You are given an array of n integers. You want to modify the array so that it is increasing, i.e., every element is at least as large as the previous element.

On each move, you may increase the value of any element by one. What is the minimum number of moves required?

Input

The first input line contains an integer n: the size of the array.

Then, the second line contains n integers x1,x2,…,xn: the contents of the array.

Output

Print the minimum number of moves.

Constraints
1≤n≤2⋅105
1≤xi≤109
Example

Input:
5
3 2 5 1 7

Output:
5
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    // 3 3 5 5 7
    int n;
    cin >> n;

    int x_ = 0;
    long long ans = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        x_ = std::max(x_, x);
        ans += x_-x;

    }
    cout << ans;
    
}