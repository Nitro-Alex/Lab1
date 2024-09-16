#include <iostream>
#include <Windows.h>

using namespace std;

char rusmas[256];
char* rus(const char* text)
{
    CharToOemA(text, rusmas);
    return rusmas;
}

class ges
{
private:
    int district = 0;
    int number = 0;
    int residents = 0;
    int payment = 0;
    int res_paid = 0;
public:
    ges(int nd = 0, int nn = 0, int nr = 0, int np = 0, int nrp = 0)
    {
        district = nd;
        number = nn;
        residents = nr;
        payment = np;
        res_paid = nrp;
    }
    int set_district()
    {
        int newd;
        cin >> newd;
        district = newd;
        return district;
    }
    int set_number()
    {
        int newn;
        cin >> newn;
        number = newn;
        return number;
    }
    int set_residents()
    {
        int newr;
        cin >> newr;
        residents = newr;
        return residents;
    }
    void set_payment()
    {
        int newp;
        cin >> newp;
        payment = newp;
    }
    int set_res_paid()
    {
        int newrp;
        cin >> newrp;
        res_paid = newrp;
        return res_paid;
    }

    int dolg()
    {
        return (residents - res_paid) * payment;
    }

    void print_inf()
    {
        cout << endl << rus("Номер района: ") << district << endl;
        cout << rus("Номер ЖЭС: ") << number << endl;
        cout << rus("Количество жильцов: ") << residents << endl;
        cout << rus("Оплата: ") << payment << endl;
        cout << rus("Оплатили:") << res_paid << endl;
    }
};


int main()
{
    ges ges1(2, 3, 150, 5000, 125);
    ges1.print_inf();
    cout << rus("Общая задолженность: ") << ges1.dolg() << endl;
    return 0;
}

