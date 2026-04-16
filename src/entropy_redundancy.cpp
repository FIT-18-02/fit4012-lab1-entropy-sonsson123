#include <cmath>
#include <iostream>
#include <map>
#include <string>

using namespace std;

// Hàm tính entropy
double calculate_entropy(const string &text) {
    if (text.empty()) {
        return 0.0;
    }

    map<char, int> freq;
    for (char c : text) {
        freq[c]++;
    }

    double entropy = 0.0;
    for (const auto &pair : freq) {
        double p = static_cast<double>(pair.second) / text.size();
        entropy -= p * log2(p);
    }
    return entropy;
}

// Hàm tính redundancy
double calculate_redundancy(const string &text, int alphabet_size = 256) {
    if (text.empty()) {
        return 0.0;
    }
    double entropy = calculate_entropy(text);
    double max_entropy = log2(alphabet_size);
    return max_entropy - entropy;
}

// Thuật toán Euclid mở rộng
int extended_euclid(int a, int b, int &x, int &y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    int x1, y1;
    int gcd = extended_euclid(b, a % b, x1, y1);
    x = y1;
    y = x1 - (a / b) * y1;
    return gcd;
}

// Hàm tìm nghịch đảo modulo
int mod_inverse(int a, int m) {
    int x, y;
    int g = extended_euclid(a, m, x, y);
    if (g != 1) {
        return -1; // Không tồn tại nghịch đảo
    } else {
        return (x % m + m) % m; // Đảm bảo kết quả dương
    }
}

int main() {
    // Phần 1: Entropy và redundancy
    string inputs[] = {"aaaa", "abcd", "hello world"};
    for (const string &input : inputs) {
        double entropy = calculate_entropy(input);
        double redundancy = calculate_redundancy(input);
        cout << "Input: " << input << '\n';
        cout << "Entropy: " << entropy << '\n';
        cout << "Redundancy: " << redundancy << "\n\n";
    }

    // Phần 2: Modulo inverse
    int tests[][2] = {{3, 7}, {10, 17}, {6, 9}};
    for (auto &test : tests) {
        int a = test[0], m = test[1];
        int inv = mod_inverse(a, m);
        cout << "Modulo inverse of " << a << " mod " << m << ": ";
        if (inv == -1) {
            cout << "Không tồn tại\n";
        } else {
            cout << inv << '\n';
        }
    }

    return 0;
}
