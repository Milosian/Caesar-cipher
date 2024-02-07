#include <iostream>
#include <string>

using namespace std;

void cezar(char pword[100], char encrypted[100]) {
    for (int i = 0; i < strlen(pword); i++) {
        if (pword[i] != ' ') {
            encrypted[i] = (int)pword[i] + 3;
            cout << (char)encrypted[i];
        }
    }
    encrypted[strlen(pword)] = '\0';
}

int main()
{
    string c;
    do {
        char pword[100] = {' '};
        char encrypted[100] = {' '};
        cout << "Create password: ";
        cin >> pword;
        cout << "Encrypted password: ";
        cezar(pword, encrypted);
        cout << "\nDo yow want to continue? y/n: ";
        cin >> c;

        while (c != "y" && c != "Y" && c != "n" && c != "N") {
            cout << "Try again: ";
            cin >> c;
        }

    } while (c == "y" || c == "Y");
    return 0;
}
