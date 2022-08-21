void take_bet(Chips chip){
    bool valid_input {0};
    while (valid_input != 1){
        cout << "How many chips do you want to bet?: ";
        cin >> chip.bet;
        if (chip.total > chip.bet){
            cout << "Thank you! Your bet is " << chip.bet << endl;
            valid_input = 1;
        }
        else{
            valid_input = 0;
            //continue;l
            
        };
    };
};



void hit_or_stand(Deck deck, Hand hand, bool &playing){

    while (1){
        string answer;
        cout << "Hit or Stand? Enter h or s: ";
        cin >> answer;

        if (answer == "h" || answer == "H"){
            Card removed_card = deck.deal();
            hand.add_card(removed_card);
            hand.adjust_for_ace();
        }
        else if (answer == "s" || answer == "S"){
            cout << "Player stands. Dealer's turn" << endl;
            playing = 0;
        }
        else {
            cout <<"Sorry I did not understand that"<< endl;
            continue;
        }
        break;
    };

    
};

void show_some(Hand player, Hand dealer){
    cout << "\nDealer's hand" << endl;
    cout << "First card hidden!" << endl;
    cout << "Second card: ";
    dealer.cards[1].print();
    cout << "\n";
    cout << "\nPlayer's hand" << endl;
    player.print_hand();
    cout << "Total: " << player.value;
}

void show_all(Hand player, Hand dealer){
    cout << "\nDealer's hand" << endl;
    for (auto& i: dealer.cards){
        i.print();
        cout << i.value << endl;
    };
    cout << "Dealer's total: " << dealer.value;

    cout << "\nPlayer's hand" << endl;
    for (auto& i: player.cards){
        i.print();
        cout << i.value << endl;
    };
    cout << "Player's total: " << player.value;
