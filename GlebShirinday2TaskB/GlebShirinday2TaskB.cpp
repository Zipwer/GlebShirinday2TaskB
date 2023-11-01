#include <iostream>
#include <string>
#include <vector>

using namespace std;

string abbreviateWord(const string& word) {
    if (word.length() > 10) {
        string abbreviation = word[0] + to_string(word.length() - 2) + word.back();
        return abbreviation;
    }
    return word;
}

int main() {
    int n;
    cin >> n;

    vector<string> words(n);
    for (int i = 0; i < n; ++i) {
        cin >> words[i];
    }

    for (const string& word : words) {
        cout << abbreviateWord(word) << " ";
    }

    cout << endl;

    return 0;
}
