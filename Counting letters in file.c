 #include <iostream>
#include <fstream>
#include <map>
#include <string>

using namespace std;

int main() {
    ifstream inputFile("Inputfile.txt");

    if (!inputFile)
    {
        cout << "Error in opening the Input text file." <<endl;
        return 1;
    }

    map<string, int> count;
    string word;

    while (inputFile >> word) {
        count[word]++;
    }

    inputFile.close();

    for (const auto& pair : count) {
        cout << pair.first << ": " << pair.second <<endl;
    }

    return 0;
}
