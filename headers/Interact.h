#pragma once

#include "Character.h"
#include <iostream>

class Interact
{
private:
    /* data */
public:
    Interact(){}
    ~Interact(){}

    void PrintResponseSet(Character _char, int responseSetIndex)
    {
        if(responseSetIndex <= _char.responses.size() - 1){
            for(int i = 0; i < _char.responses[responseSetIndex].GetResponses().size(); i++)
            {
                std::cout << i + 1 << ". " << _char.responses[responseSetIndex].GetResponses()[i] << std::endl;
            }
        }
    }

    void PrintResponse(Character _char, int responseSetIndex, int responseIndex)
    {
        if(responseSetIndex <= _char.responses.size() - 1){
            std::cout << _char.name << ": " << _char.responses[responseSetIndex].GetResponses()[responseIndex] << std::endl;
        }
    }

    void GetResponse(Character _char, int responseSetIndex, Character _other)
    {
        std::string tempInput;
        std::cin >> tempInput;

        for(int i = 0; i < _char.responses[responseSetIndex].GetResponses().size(); i++)
        {
            if(tempInput == std::to_string(i + 1))
            {
                PrintResponse(_other, responseSetIndex, i);
            }
        }
    }
};