#ifndef _BOARD_H
#define _BOARD_H

constexpr int SIZE = 3;
constexpr int DIGITS[] = {'0','1','2','3','4','5','6','7','8','9'};

class Board{
    public:
        Board() = default;
        ~Board() = default;

        void init(); //init board
        void draw(); //draw baord on screen
        bool check(); //check win condition
        bool update(int position); //populate with mark;

    private:
        char board_[SIZE][SIZE];
        char mark_;

};

#endif