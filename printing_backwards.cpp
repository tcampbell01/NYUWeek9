//Write a program that reads the user's name and prints it in a reverse order

#include <iostream>
#include <string>
using namespace std;

int main() {
    string userName;
    int ind;

    cout << "Please enter your name: " << endl;
    getline(cin, userName);

    for(ind = userName.length() - 1; ind >= 0; ind--) {
        cout << userName[ind];
    }
    cout << endl;
    
    return 0;


}