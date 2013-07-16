#include <iostream>
#include <stdlib.h>
using namespace std;

int getLength(int number)
{
    cout<<"1";
    int length = 0;
    while(number!=0)
    {
        number/=10;
        length++;
    }
    //cout<<"length:"<<length;   
    return length;
}
int main()
{
    char* abc = "1999asd-23s5432131d11asd123123";
    char *pp = abc;
    int lartemp = 0;  //largest temp
    int temp=0;
cout<<"input :"<<abc<<endl;
    while(*pp++!='\0')
    {
	if(*pp >='0' && *pp<='9' ){
	    temp=atoi(pp);
	    if (lartemp<temp) {

		lartemp=temp;
		cout<<"lartemp changed :"<<temp<<endl;
		}
    		pp+=getLength(temp)-1;
	}
	else if(*pp=='-');
	else
	cout<<*pp;
    }
    std::cout<<lartemp;
    return 0;

}
