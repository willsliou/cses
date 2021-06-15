/*
Submission details
Task:	Distinct Numbers
Sender:	willbutplural
Submission time:	2021-06-15 03:19:09
Language:	C++17
Status:	READY
Result:	ACCEPTED
*/

/*
https://cses.fi/problemset/task/1621/
You are given a list of n integers, and your task is to calculate the number of distinct values in the list.

Input

The first input line has an integer n: the number of values.

The second line has n integers x1,x2,…,xn.

Output

Print one integers: the number of distinct values.

Constraints
1≤n≤2⋅105
1≤xi≤109
Example

Input:
5
2 3 2 2 3

Output:
2
*/

#include <iostream>
#include <cstdio>
#include <limits>
#include <fstream>
#include <string>
#include <cmath>
#include <iterator>
#include <locale>
#include <new>
#include <vector>
#include <list>
#include <map>
#include <memory>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
using namespace std;


// https://usaco.guide/PAPS.pdf#page=41

#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define trav(a, x) for(auto& a : x)
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

int main() {
    int n;
    cin >> n;
    // use a set to store unique elements in sorted order
    set<int> mySet;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        mySet.insert(a);
    }

    cout << mySet.size();

} // main
