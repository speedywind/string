#include "string.h"

//friend ostream& operator<<(ostream&,string&)
char* stringcpy(char* target,const char* orign){
    cout<<"string construct!\n";
    if (orign == NULL){
        target = NULL;
    }else{
        cout<<"orign is :"<<orign<<endl;
        target = new char[sizeof(orign)];
        char* addr = target;
        while( (*addr++ = *orign++) != '\0' )
            ;
    }
    cout<<"copy finish!Result is :"<<target<<endl;
    return target;
}

string::string(const char* psz){
    data=stringcpy(data,psz);
}

string::string(const string &str){
    data=stringcpy(data,str.data);
}

string::~string(){
    /*if (data!=NULL){
        delete data;
        data = NULL;
     }*/
    cout<<"Memery clear!\n";
}
void string::print(){
    cout<<data<<endl;
}
int string::subnum(){
    int maxnum = -102444;
    int num = 0;
    bool signflag = true;
    char* addr = data;
    char chr;
    while ((chr=*addr++)!='\0'){
        if (chr>=48 && chr<=57){
            num*=10;
            num+=chr-48;
        }else{
            if(!signflag) num=0-num;
            if (num!=0 && num>maxnum){
                maxnum = num;
                cout<<"Find a bigger number :"<<num<<endl;
               }
            num = 0;
            signflag = true;
            if (chr=='-') signflag = false;
        }
    }
   if(!signflag) num=0-num;
   if (num!=0 && num>maxnum) maxnum = num;
   if (maxnum==-102444) return 0;
   return maxnum;
}
