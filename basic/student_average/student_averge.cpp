#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{

    int totalNotes, tm = 0, tr = 0;
    cout << "Enter the total of notes: ";
    cin >> totalNotes;
    double temp, hm = 0, s = 0;
    for (int i = 0; i < totalNotes; i++)
    {
        cout << "Enter the value the note " << (i + 1) << " : ";
        cin >> temp;
        if (temp < 0 || temp > 10)
        {
            i--;
            continue;
        }
        tm = temp > 6.2 ? tm + 1 : tm;
        hm = temp > hm ? temp : hm;
        if (temp < 6)
        {
            tr++;
            s += temp;
        }
    }
    cout << "\n\n\tResults" << endl
         << " Percent of failed: " << (((double)tr / (double)totalNotes) * 100) << endl
         << " Average grade of failed students: " << (s / tr) << endl
         << " Highest note: " << hm << endl
         << " Total of notes greater than 6.2: " << tm << endl;
    return 0;
}
