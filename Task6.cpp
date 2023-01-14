#include <iostream>
using namespace std;

main()
{
    string month;
    int stays;
    float price1=0, price2=0;

    cout << "Enter month: ";
    cin >> month;

    cout << "Enter Number of strays: ";
    cin >> stays;

    if (month == "may" || month == "october")
    {
        price1 = stays * 50;
        price2 = stays * 65;
        if (stays >= 7 && stays < 14)
        {
            price1 = price1 - (price1 * 0.15);
        }
        else if (stays > 14)
        {
            price1 = price1 - (price1 * 0.3);
            price2 = price2 - (price2 * 0.1);
        }
    }

    else if (month == "june" || month == "september")
    {
        price1 = stays * 75.2;
        price2 = stays * 68.7;
        if (stays > 14)
        {
            price1 = price1 - (price1 * 0.2);
            price2 = price2 - (price2 * 0.1);
        }
    }

    else if (month == "july" || month == "august")
    {
        price1 = stays * 76;
        price2 = stays * 77;
        if(stays>14){
            price2=price2-(price2*0.1);
        }
    }
    else {
        cout<<"ERROR";
    }

    cout<<"Apartment: "<<price2<<endl;
    cout<<"Studio: "<<price1;


}