#include <iostream>
using namespace std;

int main () {
    char alpha;

    cin >> alpha;

    if (alpha == 'z')
        alpha -= 26;
    alpha += 1;

    cout << alpha;

    return 0;
}