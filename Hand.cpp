class Hand {
public:
    vector <Card> cards {};
    int value {0};
    int aces {0};

    void add_card(Card card){
        cards.push_back(card);
        value += card.value;
        cout << value;
        if (card.rank == "Ace") 
            aces += 1;
    };

    void adjust_for_ace(){
        while (value > 21  && aces != 0){
            aces -= 1;
            value -= 10;
        }
    };

    void print_hand(){
        for (auto& i:cards){
            i.print();
            cout << " " << "{" << i.value << "}" << endl;
        }
    }

    void print_index(int index){
        cards[index].print();
    }

};
