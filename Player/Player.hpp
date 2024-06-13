#ifndef PLAYER_DEFINED
#define PLAYER_DEFINED 

class Player {
    private:
        int m_symbol = 1;
    public:
        Player();
        virtual void move();
    
};

#endif