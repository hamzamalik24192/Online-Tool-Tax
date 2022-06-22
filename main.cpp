#include<iostream>
#include<iomanip>
using namespace std;

class Toll_Plaza{
    private:
        char size;
        int small,medium,large,heavy,total;
        int number_of_cars;
        int price_of_small,price_of_medium,price_of_large,price_of_heavy;
    public:
        Toll_Plaza()
        {
            small = 0;
            medium = 0;
            large = 0;
            heavy = 0;
            total = 0;
            price_of_small = 0;
            price_of_medium = 0;
            price_of_large = 0;
            price_of_heavy = 0;
            number_of_cars = 1000;
        }
        int get_price()
        {
            cout << "Enter Price for Small Vehicle:";
            cin >> price_of_small;
            cout << "Enter Price for Medium Vehicle:";
            cin >> price_of_medium;
            cout << "Enter Price for Large Vehicle:";
            cin >> price_of_large;
            cout << "Enter Price for Heavy Vehicle:";
            cin >> price_of_heavy;
        }
        int show_price()
        {
            cout << endl;
            cout << setw(15) << "--Note!---" << endl;
            cout << "Enter 's' for Small Vehicle." << endl;
            cout << "Enter 'm' for Medium Vehicle." << endl;
            cout << "Enter 'l' for Large Vehicle." << endl;
            cout << "Enter 'h' for Heavy Vehicle." << endl;
            cout << "Enter Anyother alphabet to STOP." << endl;
            cout << endl;

        for(int i = 1;i <= number_of_cars;i++)
        {
            cout << setw(25) << "Enter Vehicle Size:";
            cin >> size;

            if
            (size == 's')
            {
                 cout << "Toll Tax is " << price_of_small << endl;
                 small++;
            }
            else if
            (size == 'm')
            {
                 cout << "Toll Tax is " << price_of_medium << endl;
                 medium++;
            }
            else if
            (size == 'l')
            {
                 cout << "Toll Tax is " << price_of_large << endl;
                 large++;
            }
            else if
            (size == 'h')
            {
                 cout << "Toll Tax is " << price_of_heavy << endl;
                 heavy++;
            }
            else
            break;
            total = small+medium+large+heavy;
        }
        }
        void record()
        {
            cout << endl;
            cout << setw(20) << "---Showing the Record of Cars--" << endl;
            cout << "Small Vehicles:" << small << endl;
            cout << "Medium Vehicles:" << medium << endl;
            cout << "Large Vehicles:" << large << endl;
            cout << "Heavy Vehicles:" << heavy << endl;
            cout << endl;
            cout << "Total Vehicles:" << total << endl;
        }
};

int main()
{
    Toll_Plaza t;
    t.get_price();
    t.show_price();
    t.record();
    
    return 0;
}
