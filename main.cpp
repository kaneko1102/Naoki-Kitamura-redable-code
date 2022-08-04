#include <fstream>
#include <iostream>
#include <string>

int main(void){
    std::ifstream ifs("./dictionary-data.txt");
    std::string s;

    getline(ifs, s);

    std::cout << s << std::endl;

    getchar();

    return 0;
}
