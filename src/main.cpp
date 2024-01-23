#include "../headers/Interact.h"

float InchToFoot(float inch){
    return inch * 0.0833333f;
}

int main(){
    // Initializing Ben(the player), and Charlie(the npc)
    Character ben("Ben", 18 , 180, "Well...");
    Character charlie("Charlie", 19, 185, "NULL");

    ben.AddResponse(0, "Hi there!");
    ben.AddResponse(0, "Yo, what's up?");
    ben.AddResponse(0, "What is popping my dude-");
    ben.AddResponse(1, "What is your height?");
    ben.AddResponse(1, "So... Wanna go out to eat sometime? Coffee?");

    // Adding responses for charlie on 0
    charlie.AddResponse(0, "Hi!");
    charlie.AddResponse(0, "Not much, hbu?");
    charlie.AddResponse(0, "You have mental problems.");
    // Adding responses for charlie on 1
    charlie.AddResponse(1, "*Charlie finds this question to be odd but answers anyways* \n I'm " + std::to_string(InchToFoot(charlie.GetHeightInInches())) + " in feet.");
    charlie.AddResponse(1, "Well, maybe, depends on if I'm free, what day?");

    // Interaction system
    Interact interactSystem;

    // On set 0
    interactSystem.PrintResponseSet(ben, 0);
    interactSystem.GetResponse(ben, 0, charlie);
    // Now on set 1
    interactSystem.PrintResponseSet(ben, 1);
    interactSystem.GetResponse(ben, 1, charlie);
}