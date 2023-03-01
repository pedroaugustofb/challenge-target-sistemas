#include <iostream>
#include <string>

using   namespace std;

int main () {
    
    string oldSring = "Hello Target Sistemas";
    string newString = "";

    for (int i = oldSring.size() - 1; i >= 0; i--) {
        newString += oldSring[i];
    }

    cout << newString;
}