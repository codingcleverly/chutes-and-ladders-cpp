#include <iostream>
#include <cstdlib>
#include <ctime>
#include "chutesladders.h"
using namespace std;

int main() {
    
    // seed the random number generator   
    srand(time(0));

    // Initialize the players' positions
    int player1Pos = 0;
    int player2Pos = 0;
        
    
    while (true) {

        // Clear the screen
        std::system("cls");

        // Display the board
        std::cout << "Chutes and Ladders" << std::endl;
        std::cout << "==================" << std::endl;
        std::cout << "Player 1 is at position " << player1Pos << std::endl;
        std::cout << "Player 2 is at position " << player2Pos << std::endl;
        std::cout << "------------------" << std::endl;

        // Player 1's turn
        std::cout << "Player 1's turn" << std::endl;        
        player1Pos = playTurn(1, player1Pos);
        if (player1Pos >= 100)
            break;
        
        // Player 2's turn
        std::cout << "Player 2's turn" << std::endl;        
        player2Pos = playTurn(2, player2Pos);
        if (player2Pos >= 100)
            break;
        
        // Pause for a moment before the next turn
        std::cout << "Press enter to continue..." << std::endl;
        std::cin.ignore();
        
    }

    // Clear the screen    
    std::system("cls");

    // Display the final positions
    std::cout << "Chutes and Ladders" << std::endl;
    std::cout << "==================" << std::endl;
    std::cout << "Player 1 is at position " << player1Pos << std::endl;
    std::cout << "Player 2 is at position " << player2Pos << std::endl;
    std::cout << "------------------" << std::endl;
    std::cout << "Game Over!" << std::endl;

    

    return 0;
}