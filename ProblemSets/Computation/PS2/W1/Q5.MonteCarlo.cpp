#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;

double calculate_pi(const int n)
{

int darts_in_circle=0;
double x= rand()/(double) RAND_MAX;
double y= rand()/(double) RAND_MAX;
for( int i=0;i<n;i++)

{
if(sqrt((x*x)+(y*y))<1)
darts_in_circle++;
}

return darts_in_circle/ (double) (n)*4;
}
int main()
{


	cout << calculate_pi(1000)<<endl;

	return 0;
}
