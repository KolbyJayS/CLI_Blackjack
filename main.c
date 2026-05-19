#include "main.h"
#include <stdio.h>
#include <stdlib.h>

Card randdomCard() {
    // Code to generate a random card
    Card card;
    return (Card){ .suit = rand() % 4, .rank = (rand() % 13) + 1 };
}

void intitialDeal (Player *player, Dealer *dealer) {
    // Determine Player's bet
    printf("What would you like to bet? (Current balance: %d)\n", player->balance);
    scanf("%d", &player->bet);
    // Deal Cards to player and dealer
    for (int i = 0; i < 2; i++) {
        // Code to deal card to player
        player->hand[i] = randdomCard();
        // Code to deal card to dealer
        dealer->hand[i] = randdomCard();
    }
}

void playerTurn (Player *player) {
    while (1) {
    printf("Your current hand value is %d. What would you like to do? (1: Hit, 2: Stand, 3: Double Down, 4: Split)\n", player->handValue);
    }
}

void dealerTurn (Dealer *dealer) {

}

int endRound (Player *player, Dealer *dealer) {

}


int main() {
    // Game loop
    srand(time(NULL)); // Seed random number generator
    while (1) {
        Turn state = IntitialDeal; // Initial state
        Player player = { .handValue = 0, .bet = 0, .balance = 100 }; // Initialize player
        Dealer dealer = { .handValue = 0 }; // Initialize dealer
        switch (state) {
            case IntitialDeal:
                // Code for initial deal
                break;
            case PlayerTurn:
                // Code for player's turn
                break;
            case DealerTurn:
                // Code for dealer's turn
                break;
            case EndRound:
                // Code for end of round
                break;
        }
    }
    return 0;
}   