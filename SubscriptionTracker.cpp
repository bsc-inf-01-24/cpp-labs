#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    int DaysUntilExpiration = rand() % 12;

    cout<< "Days Left Until Expiratin:" <<DaysUntilExpiration << endl;

    if( DaysUntilExpiration<=0 ){
        cout<< "Your subscription Has Expired"<<endl;
    }
    else if(DaysUntilExpiration == 1){

        cout<<"Your Subscription will Expire within a day"<<endl;
        
    }
    else if(DaysUntilExpiration <=5){

        cout<< "your subscription expires in :"<< DaysUntilExpiration <<endl;

    }
else if(DaysUntilExpiration <= 10){
    
    cout<<"Your subscription will expire soon renew now"<<endl;

}    
else{
    cout<< "You have an active subscription"<<endl;
}

return 0;
}

