#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string s, int start, int end) {
    while (start < end) {
        if (s[start] != s[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int countPalindromes(string s) {
    int count = 0;
    int n = s.length();
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (isPalindrome(s, i, j)) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    string s = "aba cbad nmnmn";
    int count = countPalindromes(s);
    cout << "The number of palindromic substrings in \"" << s << "\" is " << count << endl;
    return 0;
}
