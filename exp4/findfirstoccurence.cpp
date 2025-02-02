#include <iostream>
#include <string>

using namespace std;

int strStr(string haystack, string needle) {
    return haystack.find(needle);
}

int main() {
    string haystack = "hello";
    string needle = "ll";

    int index = strStr(haystack, needle);
    cout << index << endl;

    return 0;
}
