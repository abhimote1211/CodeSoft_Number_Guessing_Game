#include<iostream>
#include<ctime>
using namespace std;
int main()
{
    cout<<"*****************************************************************************"<<endl;
    cout<<"*************************** Guessing a Number *******************************"<<endl;
    cout<<"*****************************************************************************"<<endl;
    int rd,c;
    cout<<"Enter 1 for Easy mode"<<endl;
    cout<<"2 for Normal mode"<<endl; 
    cout<<"3 for Hard mode"<<endl;
    cout<<"other Key to Quit"<<endl;
    cout<<"Enter Your Choise :";
    cin>>c;
    srand(time(0));
    while(c==1 || c==2 || c==3)
    {
            if(c==1)
            {
                rd=rand()%10+1;
                cout<<" You are playing Easy mode, numbers range from 1 to 10"<<endl;
            }
            else if(c==2)
            {
                rd=rand()%100+1;
                cout<<" You are playing Normal mode, numbers range from 1 to 100"<<endl;
            }
            else if(c==3)
            {
                rd=rand()%1000+1;
                cout<<" You are playing Hard mode, numbers range from 1 to 1000"<<endl;
            }

            int n;
            cout<<"Choose your number "<<endl;
            cin>>n;
            
            while(n!=rd)
            {
                if(n<rd)
                {
                    cout<<"Your Guess is Low"<<endl;
                }
                else
                {
                    cout<<"Your Guess is High"<<endl;
                }
                cout<<"Choose Again "<<endl;
                cin>>n;
            }
            cout<<"You got it,number is : "<<rd<<endl;
            cout<<"\nEnter\n1 for Easy mode"<<endl;
            cout<<"2 for Normal mode"<<endl; 
            cout<<"3 for Hard mode"<<endl;
            cout<<"other Key to Quit"<<endl;
            cout<<"Enter Your Choise :";
            cin>>c;
    }       
    return 0;
}
