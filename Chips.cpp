class Chips {
public:
    int total = 100;
    int bet {};

    void win_bet(){
        total += bet;
    };

    void lose_bet(){
        total -= bet;
    };

};
