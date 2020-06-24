#include <iostream>
#include <iomanip> 
using namespace std;

int main()
{
    double MilesPGallon, DollarsPGallon,GasCost20mi,GasCost75mi,GasCost500mi;
    
    double Depreciation,Maintenance;
    
    //standard Depreciation and Maintenance per Mile
    Depreciation = 0.08;
    Maintenance = 0.0468;
    
    cout << "Enter Miles Per Gallon:-";
    cin >> MilesPGallon;
    cout << "Enter Dollars Per Gallon:-";
    cin >> DollarsPGallon;
    
    //calculation for 20miles,75miles,500miles
    GasCost20mi = ((DollarsPGallon/MilesPGallon)+Depreciation+Maintenance)*20;
    GasCost75mi = ((DollarsPGallon/MilesPGallon)+Depreciation+Maintenance)*75;
    GasCost500mi = ((DollarsPGallon/MilesPGallon)+Depreciation+Maintenance)*500;
    
    
  // Output  
    cout << "Gas cost for 20 miles: ";
    std::cout << fixed << std::setprecision(2) << GasCost20mi << "\n";
    cout << "Gas cost for 75 miles: ";
    std::cout << fixed << std::setprecision(2) << GasCost75mi << "\n";
    cout << "Gas cost for 500 miles: ";
    std::cout << fixed << std::setprecision(2) << GasCost500mi << "\n";

    return 0;
}
