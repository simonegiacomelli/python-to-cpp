#include <iostream>
#include <sstream>
#include <string>
#include <fstream>

using namespace std;

int main(int argc, char **argv) {

    if (argc != 3) {
        cout << "This program needs 2 arguments: inputfile.txt outputfile.txt" << endl;
        return 1;
    }
    char *inp = argv[1];
    char * out = argv[2];

    ifstream infile(inp);
    string line;
    int count = 0;
    int sum = 0;
    while (getline(infile, line)) {
        stringstream ss(line);
        int value;
        ss >> value;
        sum += value;
        count++;
    };

    ofstream outfile(out);
    outfile << "OK" << endl;
    outfile << count << endl;
    outfile << sum << endl;

    outfile.close();
    return 0;
}