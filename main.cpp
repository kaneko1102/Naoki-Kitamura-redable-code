#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <unistd.h>

#define DICTIONARY_PATH "./dictionary-data.txt"

int main(void){
    std::ifstream inputStream(DICTIONARY_PATH);
    std::string buff;

    std::vector<std::string> wordLIst;

    while(getline(inputStream, buff)){
        wordLIst.push_back(buff);
    }

    int inputID;
    std::cin >> inputID;

    std::cout << inputID << ": " << wordLIst[inputID] << std::endl;

    // ƒRƒ“ƒ\[ƒ‹‚ª‘¦•Â‚¶‚é‚Ì‚ð–h‚®
    sleep(3);

    return 0;
}
