#include <iostream>
#include <unordered_map>

using namespace std;

int romanToInt(string s) {
    unordered_map<char, int> romanValues = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };

    int result = 0;
    int prevValue = 0;

    for (int i = s.length() - 1; i >= 0; i--) {
        int currentValue = romanValues[s[i]];

        if (currentValue < prevValue) {
            result -= currentValue;
        } else {
            result += currentValue;
        }

        prevValue = currentValue;
    }

    return result;
}

int main() {
    string s1 = "III";
    string s2 = "LVIII";
    string s3 = "MCMXCIV";

    cout << romanToInt(s1) << endl; // Output: 3
    cout << romanToInt(s2) << endl; // Output: 58
    cout << romanToInt(s3) << endl; // Output: 1994

    return 0;
}
