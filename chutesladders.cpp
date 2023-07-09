#include "chutesladders.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int rollDice() {
    return rand() % 6 + 1; //1-6
}

int playTurn(int player, int& position) {
    int dice = rollDice();
    cout << "Player " << player << " rolled a " << dice << "." << endl;
    position +=  dice;

    // Check if the player has landed on a chute or a ladder
    switch (position) {
        case 4:
            std::cout << "Player " << player << " found a ladder! Moving to position 14." << std::endl;
            position = 14;
            break;
               case 9:
            std::cout << "Player " << player << " found a ladder! Moving to position 31." << std::endl;
            position = 31;
            break;
        case 17:
            std::cout << "Player " << player << " found a chute! Moving back to position 7." << std::endl;
            position = 7;
            break;
        case 20:
            std::cout << "Player " << player << " found a ladder! Moving to position 38." << std::endl;
            position = 38;
            break;
        case 28:
            std::cout << "Player " << player << " found a ladder! Moving to position 84." << std::endl;
            position = 84;
            break;
        case 40:
            std::cout << "Player " << player << " found a chute! Moving back to position 59." << std::endl;
            position = 59;
            break;
        case 51:
            std::cout << "Player " << player << " found a ladder! Moving to position 67." << std::endl;
            position = 67;
            break;
        case 63:
            std::cout << "Player " << player << " found a ladder! Moving to position 81." << std::endl;
            position = 81;
            break;
        case 87:
            std::cout << "Player " << player << " found a chute! Moving back to position 24." << std::endl;
            position = 24;
            break;
        case 93:
            std::cout << "Player " << player << " found a chute! Moving back to position 73." << std::endl;
            position = 73;
            break;
        case 95:
            std::cout << "Player " << player << " found a chute! Moving back to position 75." << std::endl;
            position = 75;
            break;
        case 99:
            std::cout << "Player " << player << " found a chute! Moving back to position 78." << std::endl;
            position = 78;
            break;
        case 100:
            std::cout << "Player " << player << " reached position 100! They win!" << std::endl;
            break;

        default:
            std::cout << "Player " << player << " is now at position " << position << "." << std::endl;
            break;
    }

    return position;
}