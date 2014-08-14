#ifndef CLI_H
#define CLI_H


class cli
{
    public:
        cli();
        void start();
    protected:
    private:
        string path = ":";
        string command="";
};

#endif // CLI_H
