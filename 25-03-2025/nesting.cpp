#include <iostream>
using namespace std;
class set
{
    int m,n;
    public:
    void input(void);
    void display(void);
    int largest(void);
};

int set :: largest(void)
{
    if(m >= n)
        return m;
    else
        return n;
}
void set :: input(void)
{
    cout<<"Input Values of m & n : ";
    cin>>m>>n;
}
void set :: display(void)
{
    cout<<"Largest Value = "<< largest();
}
int main()
{
    set A;
    A.input();
    A.display();
    return 0;
    return 0;
}
