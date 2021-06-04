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

int main() {
    // 1 3 4 2
    // 1 3 5 2 4
    int n;
    cin >> n;

    // Case #1
    if (n == 1) {
        cout << 1;
    }
    // Case #2
    else if (n == 2 || n == 3) {
        cout << "NO SOLUTION" << endl;
    }
    // Case #3
    else {
        // If n is even, print in reverse following the pattern
        if (n % 2 == 0) {
            for (int i = 2; i <= n; i+=2) 
                cout << i << " ";
            for (int i = 1; i <= n; i+=2) 
                cout << i << " ";
                
            
        }

        
    }
} // main