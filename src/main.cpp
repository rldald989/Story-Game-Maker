#include "../headers/Interact.h"

int main(){

    int benH[2] = {5, 11};
    int charlieH[2] = {6, 1};
    Character ben("Ben", 18, benH , 180, "Well...");
    Character charlie("Charlie", 19, charlieH, 185, "NULL");

    charlie.AddResponse(0, "Hi!");
    charlie.AddResponse(0, "Not much, hbu?");
    charlie.AddResponse(0, "You have mental problems.");


    ben.AddResponse(0, "Hi there!");
    ben.AddResponse(0, "Yo, what's up?");
    ben.AddResponse(0, "What is popping my dude-");

    Interact interactSystem;

    interactSystem.PrintResponseSet(ben, 0);
    interactSystem.GetResponse(ben, 0, charlie);
    interactSystem.GetResponse(ben, 0, charlie);
    interactSystem.GetResponse(ben, 0, charlie);
}