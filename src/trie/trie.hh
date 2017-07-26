#pragma once

#include <vector>
#include <string>


class Trie
{
public:
    uint32_t frequency;
    std::string value;
    std::vector<Trie*> *children;

    Trie(uint32_t frequency, std::string value)
        : frequency(frequency)
        , value(value)
    {
        children = new std::vector<Trie*>();
    }


    void add_word_compressed(std::string, uint32_t);
   // void add_word(std::string, uint32_t);
};

# include "trie.hxx"

