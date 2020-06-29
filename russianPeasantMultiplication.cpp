//Addison Stotler
//CSCI: 342
//Russian Peasant Multiplication

#include <iostream>
using namespace std;

int russionPeasant(int n, int m)
{
    //Used to see if n is negative
    int neg = -2147483648;
    
    int sum = 0;

    //Loop ends when n = 0
    while(n)
    {
	//n is odd
	if(n & 1)
	{
	    if(n & neg)
		sum = sum - m;
	    else
		sum = sum + m;
	}
	
	if(n & neg)
	{
	    //Make n positive, so bitshifting n still works properly
	    n = -n;
	    n = n >> 1;

	    //Make n negative again
	    n = -n;
	}
	else
	 n = n >> 1;

	//Doubles m
	m = m << 1;
    }
    return sum;
}

int main()
{
    int n,m; 
    cin >> n >> m;

    cout << russionPeasant(n,m) << endl;
    
    return 0;
}
