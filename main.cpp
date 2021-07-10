#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{
    ifstream inputFile; // File stream object
    int number;

    // Open the input file
    inputFile.open("People.txt");


    cout << "PRAIRIEVILLE POPULATION GROWTH\n" << "(each * represents 1000 people)\n";

    for(int y = 1910; y <= 2010; y += 20)
    {
        cout << y << ' ';
        inputFile >> number;
        for (int i = 1; i < number; i+=1000)
        {
            cout << '*';
        }
        cout << endl;
    }

    // Close the file
    inputFile.close();

    return 0;
}
