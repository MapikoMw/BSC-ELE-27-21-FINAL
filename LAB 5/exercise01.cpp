#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    srand(time(0));
    int daysTillExpiration = rand() %12;
    if(daysTillExpiration <= 0){
        cout << "Your expiration has expired"<< endl;
    }else if(daysTillExpiration <= 1){
        cout<<"Your subscription expires within a day!"<< endl;
        cout<<"Renew now and save 20%!"<<endl;
    }else if(daysTillExpiration< 5){
        cout<<"Your subscription expires in" <<daysTillExpiration<<"days"<<endl;
        cout<<"Renew now and save 10%!"<<endl;
    }else if (daysTillExpiration <=10){
        cout<<"Your subscription will expire soon.Renew now!" <<endl;
    }
    return 0;
}