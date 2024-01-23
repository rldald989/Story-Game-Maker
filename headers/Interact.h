#pragma once

#include "Character.h"
#include <iostream>

class Interact
{
private:
    /* data */
public:
    // Constructor and Destructor
    Interact(){}
    ~Interact(){}

    // Prints the set of responses
    void PrintResponseSet(Character _char, int responseSetIndex)
    {
        // Makes sure that the index the programmer selects actually exists
        if(responseSetIndex <= _char.responses.size() - 1)
        {
            // Loops through the responses and prints them out numbered to the console
            for(int i = 0; i < _char.responses[responseSetIndex].GetResponses().size(); i++)
            {
                std::cout << i + 1 << ". " << _char.responses[responseSetIndex].GetResponses()[i] << std::endl;
            }
        }
    }

    //Prints a Character's response
    void PrintResponse(Character _char, int responseSetIndex, int responseIndex)
    {
        // Checks if the indexed response exists within the responses
        if(responseSetIndex <= _char.responses.size() - 1){
            std::cout << _char.name << ": " << _char.responses[responseSetIndex].GetResponses()[responseIndex] << std::endl;
        }
    }

    void PrintBlankResponse(Character _char)
    {
        std::cout << _char.name << ": " << "..." << std::endl;
    }

    void GetResponse(Character _char, int responseSetIndex, Character _other)
    {
        // Reads the input into a temporary string
        std::string tempInput;
        std::cin >> tempInput;

        // Loops through the responses
        for(int i = 0; i < _char.responses[responseSetIndex].GetResponses().size(); i++)
        {
            // Checks to make sure that the user has put in one of the avaliable response options
            if(tempInput == std::to_string(i + 1))
            {
                if(std::atoi(tempInput.c_str()) > _char.responses[responseSetIndex].GetResponses().size()-1)
                {
                    PrintBlankResponse(_other);
                }
                else
                {
                    // Prints the Npc/other character's response
                    PrintResponse(_other, responseSetIndex, i);
                }
            }
        }
    }
};