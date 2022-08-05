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

    // ƒRƒ“ƒ\[ƒ‹‚ª‘¦•Â‚¶‚é‚Ì‚ð–h‚®‚½‚ß‚É“ü—Í‘Ò‚¿
    getchar();

    return 0;
}
