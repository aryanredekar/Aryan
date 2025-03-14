#include<iostream>
using namespace std;

class a{
    protected:
    char message[100];

    public:

    //the passward of user wallet taking from user 
    void take_from_user(){

        //accepted the data from user 

        cout<<"the passward is the phrase ";
        cout<<"please enter the 24 words phrase:";

        cin>>message;   
    }
};
class b :protected a{
    protected:

    
};