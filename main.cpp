#include <fstream>
#include <iostream>
#include <string>
#include <vector>

#define DICTIONARY_PATH "./dictionary-data.txt"

int main(void){
    std::ifstream inputStream(DICTIONARY_PATH);
    std::string buff;

    std::vector<std::string> wordLIst;

    while(getline(inputStream, buff)){
        wordLIst.push_back(buff);
    }

    for(int i=0;i<wordLIst.size();i++){
        std::cout << i << ": " << wordLIst[i] << std::endl;
    }

    // ƒRƒ“ƒ\[ƒ‹‚ª‘¦•Â‚¶‚é‚Ì‚ð–h‚®‚½‚ß‚É“ü—Í‘Ò‚¿
    getchar();

    return 0;
}
