void player_busts(Hand player, Hand dealer, Chips chip){
    chip.lose_bet();
    cout <<"PLAYER BUST";
}

void player_wins(Hand player, Hand dealer, Chips chip){
    chip.win_bet();
    cout <<"PLAYER WINS";
}

void dealer_busts(Hand player, Hand dealer, Chips chip){
    chip.lose_bet();
    cout <<"DEALER BUST";
}

void dealer_wins(Hand player, Hand dealer, Chips chip){
    chip.win_bet();
    cout <<"DEALER WINS";
}

void push(Hand player, Hand dealer){
    cout << "Tie between player and dealer - PUSH";
}
