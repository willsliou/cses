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
https://cses.fi/problemset/task/1069
You are given a DNA sequence: a string consisting of characters A, C, G, and T. Your task is to find the longest repetition in the sequence. This is a maximum-length substring containing only one type of character.

Input

The only input line contains a string of n characters.

Output

Print one integer: the length of the longest repetition.

Constraints
1≤n≤106
Example

Input:
ATTCGGGA

Output:
3
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    // Read input to string
    string s;
    cin >> s;
    
    int ans = 1, count = 0;
    char front = 'A';

    for (char back : s) {
        // If characters are equal, increase sum by one
        if (front == back) {
            count++;
            ans = std::max(ans, count);
        }
        else {
            // Front to next item, reset count to one character
            front = back;
            count = 1;
        }
    }
    cout << ans;
}