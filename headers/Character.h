#pragma once

#include <string>
#include <vector>

struct ResponseSet{
private:
    std::vector<std::string> response;
public:

    std::string responseSetName;

    std::string GetResponse(int index)
    {
        if(index <= response.size() - 1)
        {
            return response[index];
        }
    }

    std::vector<std::string> GetResponses()
    {
        return response;
    }

    void AddResponse(std::string resp){
        response.push_back(resp);
    }
};

struct Character
{
    std::string name;
    int age;
    int height_in[2];
    int height_cm;
    std::string likes;

    Character(std::string _name, int _age, int _height_in[2], int _height_cm, std::string _likes)
    {
        name = _name;
        age = _age;
        height_cm = _height_cm;
        likes = _likes;
    }

    void AddResponse(int index, std::string response)
    {
        responses.push_back(ResponseSet());
        responses[index].AddResponse(response);
    }

    std::vector<ResponseSet> responses;
    
};