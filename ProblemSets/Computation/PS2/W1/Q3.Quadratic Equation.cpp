# include <iostream>
# include <math.h>

int main()
{
    using namespace std;
    int a, b, c;
    cout<<"a:";
    cin>>a;
    cout<<"b:";
    cin>>b;
    cout<<"c:";
    cin>>c;

    float delta, x1, x2;
    delta = b*b-4*a*c;
    if (delta < 0)
        cout <<"no soultion"<<endl;
    else
        x1 = (-b+sqrt(delta))/(2*a);
        x2 = (-b-sqrt(delta))/(2*a);

        cout <<"ans are"<<x1<<" and "<<x2<<endl;

    return 0;

}
