#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <cctype>
#include <sstream>

using namespace std;

int countVowels(const string& str) {
    int count = 0;
    for (char c : str) {
        if (tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || 
            tolower(c) == 'o' || tolower(c) == 'u') {
            ++count;
        }
    }
    return count;
}

int countWords(const string& str) {
    istringstream iss(str);
    int count = 0;
    string word;
    while (iss >> word) {
        count++;
    }
    return count;
}

string reverseString(const string& str) {
    string reversedStr = str;
    reverse(reversedStr.begin(), reversedStr.end());
    return reversedStr;
}

string capitalizeSecondLetter(const string& str) {
    istringstream iss(str);
    string result, word;
    while (iss >> word) {
        if (word.length() > 1) {
            word[1] = toupper(word[1]);
        }
        result += word + " ";
    }
    result.pop_back(); // Remove the trailing space
    return result;
}

int main() {
    ifstream file("textfile.txt");
    if (!file) {
        cerr << "Error opening file.\n";
        return 1;
    }

    string fileData((istreambuf_iterator<char>(file)), istreambuf_iterator<char>());
    file.close();

    cout << "Number of vowels: " << countVowels(fileData) << "\n";
    cout << "Number of words: " << countWords(fileData) << "\n";
    cout << "Reversed string: " << reverseString(fileData) << "\n";
    cout << "Capitalized second letters: " << capitalizeSecondLetter(fileData) << "\n";

    return 0;
}
