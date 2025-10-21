// Dadas dos cadenas; encuentra la subcadena más larga que ambas tienen en común.

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string s1, s2;
    cout << "Ingresa la primera cadena: ";
    getline(cin, s1);
    cout << "Ingresa la segunda cadena: ";
    getline(cin, s2);

    int n = s1.size(), m = s2.size();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
    int maxLen = 0, pos = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (s1[i - 1] == s2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
                if (dp[i][j] > maxLen) {
                    maxLen = dp[i][j];
                    pos = i;
                }
            }
        }
    }

    string subcadenaComun = s1.substr(pos - maxLen, maxLen);
    cout << "Subcadena común más larga: " << subcadenaComun << endl;
    return 0;
}