#include <iostream>
#include <cstring> // Include cstring for strlen
using namespace std;

int main() {
    // Use a string array to store the characters
    char s[100]; // Make sure to allocate enough space for the input
    cin >> s;

    // Get the length of the string
    int n = strlen(s);

    // Implement a simple bubble sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // Compare characters
            if (s[j] > s[j + 1]) {
                // Swap if they are in the wrong order
                char t;
                t = s[j];
                s[j] = s[j + 1];
                s[j + 1] = t;
            }
        }
    }

    // Output the sorted string
    cout << s << endl;
    
    return 0;
}

    

