//sztring
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string str = "Hello World!";
    
    for (char& c : str) {
        c = toupper(c);
    }
    
    cout << "Uppercase: " << str << endl;
    return 0;
}