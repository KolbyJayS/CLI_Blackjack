#ifndef MAIN_H
#define MAIN_H

typedef enum {
    IntitialDeal,
    PlayerTurn,
    DealerTurn,
    EndRound
} Turn;

typedef enum {
    Hearts = 0,
    Diamonds = 1,
    Clubs = 2,
    Spades = 3
} Suit;

typedef enum {
    Two = 2,
    Three = 3,
    Four = 4,
    Five = 5,
    Six = 6,
    Seven = 7,
    Eight = 8,
    Nine = 9,
    Ten = 10,
    Jack = 10,
    Queen = 10,
    King = 10,
    Ace = 11
} Rank;

typedef struct {
    Suit suit;
    Rank rank;
} Card;

typedef struct {
    Card hand[11]; // Max 11 cards in hand (if player keeps hitting)
    int handValue; // Total value of the hand
    int bet; // Current bet amount
    int balance; // Player's total balance
} Player;

typedef struct {
    Card hand[11]; // Max 11 cards in hand
    int handValue; // Total value of the hand
} Dealer;

typedef enum {
    Hit,
    Stand,
    DoubleDown,
    Split
} Action;

#endif // MAIN_H