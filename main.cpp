#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <unistd.h>
#include <utility>
#include <sstream>

#define DICTIONARY_PATH "./dictionary-data.txt"

// データファイルの読み込み
void readDictionaryData(std::vector<std::pair<std::string,std::string> > &wordLIst){
    std::ifstream inputStream(DICTIONARY_PATH);
    std::string buff;

    while(getline(inputStream, buff)){
        std::stringstream ss{buff};
        std::string _buff;
        std::vector<std::string> str;

        while (getline(ss, _buff, ' ')){     // スペース（' '）で区切って，格納
            str.push_back(_buff);
        }
        wordLIst.push_back(std::make_pair(str[0],str[1]));
    }
}

int main(void){

    std::vector<std::pair<std::string,std::string> > wordLIst;

    readDictionaryData(wordLIst); // データファイルの読み込み

    // int inputID;
    // std::cin >> inputID;

    for (int i = 0; i < wordLIst.size(); i++) {
        std::cout << i << ": " << wordLIst[i].first << " " << wordLIst[i].second << std::endl;
    }
    // コンソールが即閉じるのを防ぐ
    sleep(3);

    return 0;
}
