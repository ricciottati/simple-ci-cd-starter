
#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string filename = "output.txt";
    std::ofstream outFile(filename);

    if (!outFile) {
        std::cerr << "Error: Could not open file for writing." << std::endl;
        return 1;
    }

    outFile << "Hello, this is a test message written to the file!" << std::endl;
    outFile << "You can add more lines as needed." << std::endl;

    outFile.close();
       std::cout << "Data written to " << filename << std::endl;

    return 0;


    }