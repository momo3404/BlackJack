class Deck {
    public:
        vector <Card> deck {};

        Deck() {
            for (auto& i:suits){
                for (auto& j: ranks){
                    deck.push_back(Card(i,j));
                }
            }
        }

        void print_deck(){
            for (auto && i: deck){
                i.print();
            }
          }
       

        void shuffle(){
        std::random_shuffle(deck.begin(), deck.end());
        }

        Card deal(){
            deck.pop_back();
            return deck.back();
            
        }
};
