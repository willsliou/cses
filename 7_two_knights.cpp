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
    
    for(int k = 1; k<= n; k++){
        ll a1 = k*k, a2 = a1*(a1-1)/2;
        if (k>2){
            a2-=4*(k-1)*(k-2);
        }
        cout << a2 << endl;
    }
    
} // main