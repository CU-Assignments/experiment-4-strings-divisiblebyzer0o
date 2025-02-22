#include <iostream>
#include <vector>

using namespace std;

int powerMod(int x, int y, int mod) {
    int result = 1;
    x %= mod; 
    
    while (y > 0) {
        if (y % 2 == 1) { 
            result = (result * x) % mod;
        }
        x = (x * x) % mod; 
        y /= 2;
    }
    
    return result;
}

int superPow(int a, vector<int>& b) {
    int mod = 1337;
    int result = 1;

    for (int digit : b) {
        
        result = powerMod(result, 10, mod) * powerMod(a, digit, mod) % mod;
    }

    return result;
}

int main() {
    
    vector<int> b1 = {3};
    vector<int> b2 = {1, 0};
    vector<int> b3 = {4, 3, 3, 8, 5, 2};

    cout << superPow(2, b1) << endl;  
    cout << superPow(2, b2) << endl;  
    cout << superPow(1, b3) << endl;  

    return 0;
}
