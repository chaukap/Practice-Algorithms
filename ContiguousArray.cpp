//Given an array of n integers(duplicates allowed). Print “Yes” if it is a set of contiguous integers else print “No”.

//INPUT: The first line consists of an integer T i.e. the number of test cases. First line of each test case consists of an integer n, denoting the size of array. Next line consists of n spaced integers, denoting elements of array.

//OUTPUT:  Print “Yes” if it is a set of contiguous integers else print “No”.

#include <algorithm>
using namespace std;

int main() {
	int cases;
	cin >> cases;
	
	int size;
	int* a;
	for(int k = 0; k < cases; k++)
	{
	    cin >> size;
	    a = new int[size];
	    for(int i = 0; i < size; i++)
	    {
	        cin >> a[i];
	    }
	    
	    sort(a, a + size);
	    
	    bool cont(true);
	    for(int i = 0; i < size-1; i++)
	    {
	        if(a[i] == a[i+1] || a[i]+1 == a[i+1]);
	        else
	        {
	            cont = false;
	            break;
	        }
	    }
	    if(cont) cout << "Yes" << endl;
	    else cout << "No" << endl;
	}
}
