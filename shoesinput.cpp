#include <iostream>

using namespace std;

int main()
{
    //setting the budget price to 50$
    
    int budget=50;
    //declaring variable price
    int price;
    cout << "Please tell me the price of this pair of shoes: ";
    //taking inputs from the user for the price to determine
    cin >> price;
    
    if( price <= budget){
        cout << "I am going to buy them this!";
    }
    else{
        cout << "Maybe another day!";
    }
    return 0;
}
