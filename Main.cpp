int main(){
    while (1){
        cout << "Welcome to Blackjack!" << endl;

        Deck thedeck;
        thedeck.shuffle();
        Hand playerhand;
        playerhand.add_card(thedeck.deal());
        playerhand.add_card(thedeck.deal());
        Hand dealerhand;
        dealerhand.add_card(thedeck.deal());
        dealerhand.add_card(thedeck.deal());

        Chips chips;
        take_bet(chips);

        show_some(playerhand, dealerhand);

        bool playing {1};

        while (playing == 1){
            while (1){
                string answer;
                cout << "\nHit or Stand? Enter h or s: ";
                cin >> answer;

                if (answer == "h" || answer == "H"){
                    Card removed_card = thedeck.deal();
                    playerhand.add_card(removed_card);
                    playerhand.adjust_for_ace();
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
            show_some(playerhand, dealerhand);
            
            if (playerhand.value > 21){
                player_busts(playerhand, dealerhand, chips);
                break;
            }
        }

        if (playerhand.value<21 || playerhand.value == 21){
            while (dealerhand.value < 17){
                Card removedcard= thedeck.deal();
                cout << "removed_card:";
                removedcard.print();
                dealerhand.add_card(removedcard);
                dealerhand.adjust_for_ace();
            }
            show_all(playerhand, dealerhand);

            if (playerhand.value > 21)
                player_busts(playerhand, dealerhand, chips);
            else if (dealerhand.value > 21)
                dealer_busts(playerhand, dealerhand, chips);
            else if (playerhand.value > dealerhand.value)
                player_wins(playerhand, dealerhand, chips);
            else if (dealerhand.value > playerhand.value)
                dealer_wins(playerhand, dealerhand, chips);
            else
                push(playerhand, dealerhand);
        }

        cout << "\nPlayer's total: " << chips.total << endl;
    
        string answer;
        cout << "Do you want to play again? y or n: " << endl;
        cin >> answer;

        if (answer == "y"){
            playing = 1;
            continue;
        }
        else{
            cout << "Thank you for playing!" << endl;
            break;
        };
    }

}
