#pragma once

#include <string>
#include <vector>

// Holds information and functions for Response Sets
struct ResponseSet{
private:
    // the responses in a response set
    std::vector<std::string> response;
public:
    // The name of the response set, doesn't really matter, but could be needed in later versions of this program
    std::string responseSetName;

    // Gets the response of the inputed index
    std::string GetResponse(int index)
    {
        if(index <= response.size() - 1)
        {
            return response[index];
        }
    }

    // Gets the vector of responses
    std::vector<std::string> GetResponses()
    {
        return response;
    }

    // Pushes a string back to a vector(adds a response to the response set)
    void AddResponse(std::string resp){
        response.push_back(resp);
    }
};

struct Character
{   
    // Basic info
    std::string name;
    int age;
    int height_cm;
    std::string likes;

    // Constructor !!! REALLY IMPORTANT !!!
    Character(std::string _name, int _age, int _height_cm, std::string _likes)
    {
        name = _name;
        age = _age;
        height_cm = _height_cm;
        likes = _likes;
        responses.push_back(ResponseSet());
    }

    // Returns the height converted to inches
    float GetHeightInInches()
    {
        return (float)(height_cm)/2.54f;
    }

    // Adds the 
    void AddResponse(int index, std::string response)
    {
        // Adds ResponseSet(s) until the size of the response set vector reaches the index
        while(index > responses.size() - 1)
        {
            responses.push_back(ResponseSet());
        }
        
        // Adds the response to the indexed ResponseSet
        responses[index].AddResponse(response);
    }

    // The vector of ResponseSet(s)
    std::vector<ResponseSet> responses;
    
};