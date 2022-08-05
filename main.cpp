#include <fstream>
#include <iostream>
#include <string>

#define DICTIONARY_PATH "./dictionary-data.txt"

int main(void){
    std::ifstream inputStream(DICTIONARY_PATH);
    std::string buff;

    while(getline(inputStream, buff)){
        std::cout << buff << std::endl;
    }

    // コンソールが即閉じるのを防ぐために入力待ち
    getchar();

    return 0;
}
