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

    // �R���\�[����������̂�h�����߂ɓ��͑҂�
    getchar();

    return 0;
}
