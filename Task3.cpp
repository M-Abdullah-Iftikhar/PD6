#include <iostream>
using namespace std;



main()
{
    string month;
    int day;

    cout << "Enter month: ";
    cin >> month;

    cout << "Enter Day: ";
    cin >> day;

    if (month == "march" && day >= 21 || month == "april" && day <= 19)
    {
        cout << "Aries";
    }
    else if (month == "april" && day >= 20 || month == "may" && day <=20 )
    {
        cout << "Tourus";
    }
    else if (month == "may" && day >=21 || month == "june" && day <=20)
    {
        cout << "Gemini";
    }
    else if (month == "june" && day >= 21 || month == "july" && day <=22)
    {
        cout << "Cancer";
    }
    else if (month == "july" && day >=23 || month == "august" && day <=22)
    {
        cout << "Leo";
    }
    else if (month == "august" && day >=23 || month == "september" && day <= 22)
    {
        cout << "Virgo";
    }
    else if (month == "september" && day >=23 || month == "october" && day <=22)
    {
        cout << "Libra";
    }
    else if (month == "october" && day >=23 || month == "november" && day <=21)
    {
        cout << "Scorpio";
    }
    else if (month == "november" && day >=22 || month == "december" && day <=21)
    {
        cout << "Sagittarius";
    }
    else if (month == "december" && day >=22 || month == "january" && day <=19)
    {
        cout << "Capricon";
    }
    else if (month == "january" && day >=20 || month == "february" && day <=18)
    {
        cout << "Aquarius";
    }
    else if (month == "february" && day >+19 || month == "march" && day <=20)
    {
        cout << "Aries";
    }
}
