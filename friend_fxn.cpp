#include<iostream>
using namespace std;
class sample
{
    int a;
    int b;
    public:
     void setvalue() {a=25;b=40;}
     friend float mean(sample s);
};
    float mean(sample s)
    {
        return float(s.a+s.b)/20;

    }
    int main()
    {
        sample s1;
        s1.setvalue();
        cout<<"mean is:"<<mean(s1);
        return 0;
    }