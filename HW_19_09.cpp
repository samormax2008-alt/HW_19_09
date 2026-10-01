#include <iostream>
#include "Player.h"

using namespace std;

int main()
{
    Player player1("Max", 100, 5);

    Player player2;

    Player player3("Alex", 80, 3);

    cout << "Number of players: "
        << Player::getCount() << endl;

    cout << "\n--- Player 1 ---" << endl;
    player1.printStats();

    cout << "\n--- Player 2 ---" << endl;
    player2.printStats();

    cout << "\n--- Player 3 ---" << endl;
    player3.printStats();

    cout << "\nPlayer 1 takes 30 damage." << endl;
    player1.takeDamage(30);
    player1.printStats();

    cout << "\nPlayer 1 heals 20 HP." << endl;
    player1.heal(20);
    player1.printStats();

    cout << "\nPlayer 1 levels up." << endl;
    player1.levelUp();
    player1.printStats();

    cout << "\nChanging Player 1 name." << endl;
    player1.setName("Warrior");
    player1.printStats();

    cout << "\nSetting Player 2 health to -50." << endl;
    player2.setHealth(-50);
    player2.printStats();

    cout << "\nNumber of players: "
        << Player::getCount() << endl;

    return 0;
}