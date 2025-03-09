#include <iostream>
#include <string>
using namespace std;


int main() {
    int revenueTotal;
    cout << "Enter total revenue: ";
    cin >> revenueTotal;
    
    double freelanceTax = 0.153;
    int profit;
    int taxTotal;
    
    taxTotal = revenueTotal * 0.153;
    
    cout << "Total freelance tax amount: " << "$" << taxTotal << ". \n";
}
