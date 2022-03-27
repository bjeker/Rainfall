// title
//

#include <iostream>
#include <iomanip>

using namespace std;

void totalRain();

int main()
{
    totalRain();
}

//calculates total rain over 12 months with input for monthly rainfall
void totalRain()
{
    double total = 0;
    int rain = 0;
    int monthCount = 12;
    string months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int rainfall[12];

    //user input rainfall per month
    for (int i = 0; i < monthCount; i++)
    {
        cout << "Enter rainfall for " << months[i] << ": ";
        cin >> rain;
        total += rain;
        rainfall[i] = rain;
    }

    //total rainfall
    cout << "Total rainfall: " << total << endl;

    //average rainfall
    double avg = 0;
    avg = total / monthCount;
    cout << "Average rainfall: " << avg << endl;

    //least rainfall
    string leastMonth = months[0];
    int least = rainfall[0];

    for (int i = 0; i < monthCount; i++)
    {
        if (rainfall[i] < least)
        {
            least = rainfall[i];
            leastMonth = months[i];
        }
    }

    cout << "Least rainfall in: " << leastMonth << endl;

    //most rainfall
    string mostMonth = months[0];
    int most = rainfall[0];

    for (int i = 0; i < monthCount; i++)
    {
        if (rainfall[i] > most)
        {
            most = rainfall[i];
            mostMonth = months[i];
        }
    }

    cout << "Most rainfall in: " << mostMonth << endl;
}