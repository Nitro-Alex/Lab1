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
    ges(int nd = 0, int nn = 0, int nr = 0, int np = 0)
    {
        district = nd;
        number = nn;
        residents = nr;
        payment = np;
    }
    int set_district()
    {
        int newd;
        cout << rus("Введите номер района") << endl;
        cin >> newd;
        district = newd;
        return district;
    }
    int set_number()
    {
        int newn;
        cout << rus("Введите номер ЖЭС") << endl;
        cin >> newn;
        number = newn;
        return number;
    }
    int set_residents()
    {
        int newr;
        cout << rus("Введите количество жильцов") << endl;
        cin >> newr;
        residents = newr;
        return residents;
    }
    int set_payment()
    {
        int newp;
        cout << rus("Введите размер оплаты") << endl;
        cin >> newp;
        payment = newp;
        return payment;
    }
    void set_res_paid()
    {
        int newrp;
        cout << rus("Введите количество жильцов, оплативших коммунальные услуги") << endl;
        cin >> newrp;
        res_paid = newrp;
    }

    int dolg()
    {
        return (residents - res_paid) * payment;
    }

    void print_info()
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
    ges ges1(2, 3, 150, 5000);
    ges1.set_res_paid();
    ges1.print_info();
    cout << endl;
    cout << rus("Общая задолженность: ") << ges1.dolg() << endl;
    return 0;
}

