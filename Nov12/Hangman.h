#pragma once

#include<string> 
#include<vector> 

 

std::vector<std::string> getAllDictionaryWords(std::string filename);

std::string pickRandomWord(std::vector<std::string> words);

void findAndReplace(std::string& placeholder, char characterToSearchFor);


void playHangman(); 
