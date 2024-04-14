class ttt{
    public:
        void board();
        void turn();
        bool result(char sign);
    private:
        char space[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
        char t = 'X';
};