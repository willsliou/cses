/*

*/

/*
https://cses.fi/problemset/task/1754
You have two coin piles containing a and b coins. On each move, you can either remove one coin from the left pile and two coins from the right pile, or two coins from the left pile and one coin from the right pile.

Your task is to efficiently find out if you can empty both the piles.

Input

The first input line has an integer t: the number of tests.

After this, there are t lines, each of which has two integers a and b: the numbers of coins in the piles.

Output

For each test, print "YES" if you can empty the piles and "NO" otherwise.

Constraints
1≤t≤105
0≤a,b≤109
Example

Input:
3
2 1
2 2
3 3

Output:
YES
NO
YES
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

    while (n--) {
        int a, b;
        cin >> a >> b;

        if (a+b % 3 == 0 && b<= a*2 && 2*b>=a) {
            cout << "YES" << endl;;
        } else {
            cout << "NO" << endl;
        }

    }


} // main
