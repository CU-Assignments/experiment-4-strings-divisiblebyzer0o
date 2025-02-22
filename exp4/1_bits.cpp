#include <iostream>

using namespace std;

int hammingWeight(int n) {
    int count = 0;
    while (n) {
        n &= (n - 1); 
        count++;
    }
    return count;
}

int main() {
 
    cout << hammingWeight(11) << endl;          
    cout << hammingWeight(128) << endl;        
    cout << hammingWeight(2147483645) << endl; 

    return 0;
}
