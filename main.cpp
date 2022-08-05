#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <unistd.h>
#include <utility>
#include <sstream>

#define DICTIONARY_PATH "./dictionary-data.txt"

int main(void){
    std::ifstream inputStream(DICTIONARY_PATH);
    std::string buff;

    std::vector<std::pair<std::string,std::string> > wordLIst;

    while(getline(inputStream, buff)){
        std::stringstream ss{buff};
        std::string _buff;
        std::vector<std::string> str;

        while (getline(ss, _buff, ' ')){     // スペース（' '）で区切って，格納
            str.push_back(_buff);
        }
        wordLIst.push_back(std::make_pair(str[0],str[1]));
    }

    // int inputID;
    // std::cin >> inputID;

    for (int i = 0; i < wordLIst.size(); i++) {
        std::cout << i << ": " << wordLIst[i].first << " " << wordLIst[i].second << std::endl;
    }
    // コンソールが即閉じるのを防ぐ
    sleep(3);

    return 0;
}
