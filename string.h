#include<iostream>
using std::cout;
using std::endl;
//using namespace std;

class string{
    //friend ostream& operator<<(ostream&,string&);
    public:
        string(const char* psz = NULL);
        string(const string &str);
        ~string();
        void print();
        int subnum();
    private:
        char* data;
};

