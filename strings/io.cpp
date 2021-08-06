#include <iostream>

using namespace std;

int main() {
    char s[20];
    char s1[20];
    // cin.get(s, 20);
    // use cin.ignore() or cin.getline
    cin.getline(s, 20);
    cout << s << endl;
    cin.getline(s1, 20);
    cout << s1 << endl;
    return 0;
}