/*
Submission details
Task:	Missing Number
Sender:	willbutplural
Submission time:	2021-06-03 09:39:06
Language:	C++17
Status:	READY
Result:	ACCEPTED
*/

/*
You are given all numbers between 1,2,…,n except one. Your task is to find the missing number.

Input

The first input line contains an integer n.

The second line contains n−1 numbers. Each number is distinct and between 1 and n (inclusive).

Output

Print the missing number.

Constraints
2≤n≤2⋅105
Example

Input:
5
2 3 1 5

Output:
4
*/


#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
    long long n;
    int total_sum = 0;
    cin >> n;

    int rolling_sum = 0;

    // Take input, get numbers
    for (int i = 1; i < n; i++) {
        int a;
        cin >> a;
        rolling_sum += a;

    }
    
    // Calculate total sum
    total_sum = (n*(n+1)) / 2;

    // Assumed total sum - Actual rolling sum = Missing number
    cout << total_sum - rolling_sum;
    
        

}
