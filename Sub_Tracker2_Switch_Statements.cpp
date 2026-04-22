#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
srand(time(0));

int DaysOfExpiration = rand() % 12;
int category;

cout<< "Days left"<< DaysOfExpiration<<endl;

if (DaysOfExpiration <=0){
    category = 0;
}
else if (DaysOfExpiration == 1){
    category = 1;
}
else if (DaysOfExpiration <=5){
    category = 2;
}
else if (DaysOfExpiration<= 10){

    category = 3;
}
else {
category = 4;
}

switch(category){
    case  0:
    cout<< "Your Subscription Expired"<< endl;
    break;

    case 1:
    cout<<"Your subscription Will expire in a Day";
    break;

    case 2:
    cout<<"Your Subscription will expire in :"<<DaysOfExpiration <<"Days\n renew now and save 10%";

    break;

    case 3:
    cout <<"Your Subscription will Expire soon.Renew now";

    break;

    case 4:
    cout<<"You have an active subscription";
    break;

}
return 0;
}