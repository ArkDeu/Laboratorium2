#include <iostream>

using namespace std;

class zwierzak
{
private:
    int masa;

protected:
    //int wiek;
public:
    int wiek;
    zwierzak()
    {
        wiek = 0;
        masa = 0;
        cout << "tu zwierzak" << endl;
    }
    void Patrz() { cout << "Patrze" << endl; }
    void Oddychaj() { cout << "oddycham" << endl; }
    void Zyj() { cout << "Żyję i mam się dobrze" << endl; }
    int zwrocMase() { return masa; }
};

class Ssak : public zwierzak
{
private:
protected:
public:
    Ssak() { cout << " tu ssak" << endl; }
    void Biegaj() { cout << "ssak biega" << endl; }
};

class Ryby : public zwierzak
{
private:
protected:
public:
    Ryby() { cout << " tu ryby" << endl; }
    void Plywaj() { cout << "ryby plywaja" << endl; }
};

class Ptaki : zwierzak
{
private:
protected:
public:
    Ptaki() { cout << "tu ptaki" << endl; }
    void Lataj() { cout << "Ptaki lataja" << endl; }
};

class Welonek : Ryby
{
private:
    int masa;

public:
    int wiek;
    Welonek()
    {
        wiek = 2;
        masa = 100;
        cout << "tu welonek" << endl;
    }
    void Plywaj() { cout << "ryby plywaja" << endl; }
    int zwrocMase() { return masa; }
};

class Nemo : Ryby
{
private:
public:
    Nemo() { cout << "tu Nemo" << endl; }
    void Plywaj() { cout << "ryby plywaja" << endl; }
};

class Karp : Ryby
{
private:
public:
    Karp() { cout << "tu Karp" << endl; }
    void Plywaj() { cout << "ryby plywaja" << endl; }
};

class Lew : Ssak
{
private:
    int masa;

public:
    int wiek;
    Lew()
    {
        wiek = 12;
        masa = 150;
        cout << " tu Lew" << endl;
    }
    void Biegaj() { cout << "ssak biega" << endl; }
    int zwrocMase() { return masa; }
};

class Pies : Ssak
{
private:
public:
    Pies() { cout << " tu Pies" << endl; }
    void Biegaj() { cout << "ssak biega" << endl; }
};

class Slon : Ssak
{
private:
public:
    Slon() { cout << " tu Slon" << endl; }
    void Biegaj() { cout << "ssak biega" << endl; }
};

class Papuga : Ptaki
{
private:
    int masa;

public:
    int wiek;
    Papuga()
    {
        wiek = 3;
        masa = 5;
        cout << "tu Papuga" << endl;
    }
    void Lataj() { cout << "Ptaki lataja" << endl; }
    int zwrocMase() { return masa; }
};

class Kanarek : Ptaki
{
private:
public:
    Kanarek() { cout << "tu Kanarek" << endl; }
    void Lataj() { cout << "Ptaki lataja" << endl; }
};

class Golab : Ptaki
{
private:
public:
    Golab() { cout << "tu Golab" << endl; }
    void Lataj() { cout << "Ptaki lataja" << endl; }
};

int main()
{
    zwierzak z0;
    cout << "masa zwierzaka z0:" << z0.zwrocMase() << endl;
    Welonek w0;
    cout << "masa zwierzaka w0:" << w0.zwrocMase() << endl;
    Lew l0;
    cout << "masa zwierzaka l0:" << l0.zwrocMase() << endl;
    Papuga p0;
    cout << "masa zwierzaka zp:" << p0.zwrocMase() << endl;

    return 0;
}
