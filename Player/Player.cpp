#include <iostream>
#include <random>

#include "Player.hpp"

Player::Player() {
    std::random_device dev;
    std::mt19937 rng(dev());
    std::uniform_int_distribution<std::mt19937::result_type> dist1(0, 1);
    m_symbol = dist1(rng);
}

void Player::move() {
    int move = 0;
    std::cout << "Welchen Move willst du taken? Gib bitte die Spalte ein!!!!" << std::endl;
    std::cin >> move;
    // call grid 
}