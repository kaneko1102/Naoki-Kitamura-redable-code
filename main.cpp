#include <fstream>
#include <iostream>
#include <string>

int main(void){
    std::ifstream inputStream("./dictionary-data.txt");
    std::string buff;

    getline(inputStream, buff);

    std::cout << buff << std::endl;

    getchar();

    return 0;
}
