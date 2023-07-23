#include <iostream>
#include <set>

using namespace std;

int main()
{
    int num;
    cin>>num;

    int array[num];
    for(int i=0;i<num;i++)
    {
        cin>>array[i];
    }
    set<int> Set;

    for(int i=0;i<num;i++)
    {
        Set.insert(array[i]);
    }

    cout<<"The number of unique elements of the array is : "<<Set.size();

    return 0;
}

3. #include <iostream>
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