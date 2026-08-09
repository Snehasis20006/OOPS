#include <iostream>
using namespace std;
class addition
{
private:
    int a, b;

public:
    void getnum()
    {
        cin >> a >> b;
    }
    friend int add(addition);
};
int add(addition ad)
{
    return ad.a + ad.b;
}

int main()
{
    cout<<"hello";
    addition ad;
    ad.getnum();
    cout << add(ad);
    cout<<"hello";
}