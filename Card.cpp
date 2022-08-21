class Card {
    public:
        string suit {};
        string rank {};
        int value {};
        Card(string suit_value, string rank_value) {
            suit = suit_value;
            rank = rank_value;
            value = values[rank];
        }

        void print(){
            cout << rank << " of " << suit;
    }

};
