//Addison Stotler
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
	//If n is odd
	if(n & 1)
	{
	    // If n is negative subtract m from the sum
	    if(n & neg)
	    {
		sum = sum - m;
	    }
	    //If n is positive add m to the sum
	    else
	    {
		sum = sum + m;
	    }
	}

	//If n is negative
	if(n & neg)
	{
	    //Make n positive, so bitshifting n still works properly
	    //Note: This is sepecific for C++
	    n = -n;

	    //Halves n
	    n = n >> 1;

	    //Make n negative again
	    n = -n;
	}
	else
	{
	 n = n >> 1;
	}
	
	//Doubles m
	m = m << 1;
    }
    return sum;
}

int main()
{
    //Two numbers being multiplied
    int n,m;

    cout << "Enter the two integers being multiplied:" << endl;
    cin >> n >> m;

    //Multiplies the two integers
    cout << russionPeasant(n,m) << endl;
    
    return 0;
}
