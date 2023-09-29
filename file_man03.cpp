#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    char input[50];
    // Store file Data
    ofstream os;
    os.open("file3.txt");

    cout << "Please Enter Your Nmae: " << endl;
    cin.getline(input, 100);
    os << input << endl;

    cout << "Pease Enter Your Name:  " << endl;
    cin >> input;
    cin.ignore();
    os << input << endl;

    os.close();

    //Read file data
    ifstream is;
    string line;
    is.open("file.txt");

    cout << endl << "Reading from a text file:" << endl;
    while(getline(is, line))
    {
        cout << line << endl;
    }

    is.close();
    return 0;
}