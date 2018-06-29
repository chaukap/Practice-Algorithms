//Given an array of distinct integers, print all the pairs having positive value and negative value 
//of a number that exists in the array.
//NOTE: If there is no such pair in the array , print "0".

//Input:
//The first line consists of an integer T i.e number of test cases. The first line of each test case 
//consists of an integer n.The next line of each test case consists of n spaced integers.

//Output:
//Print all the required pairs in the increasing order of their absolute numbers.

#include <algorithm>
#include<vector>
using namespace std;

int main() {
	int cases;
	cin >> cases;
	
	int size;
	int* a;
	for(int k = 0; k < cases; ++k)
	{
	    cin >> size;
	    a = new int[size];
	    
	    for(int i = 0; i < size; ++i)
	    {
	        cin >> a[i];
	    }
	    
	    sort(a, a + size); //A sorted array will be much easier to work with
	    
	    int j = size-1; //j will start at the end of the array
	    int i = 0;      //i will start at the beginning of the array
	    vector<int> pairs;  //pairs will be stored in a vector since the number of pairs is unknown.
	    while(i < j)
	    {
	        if(a[i] == a[j] * -1)       //If we find a pair
	        {
	            pairs.push_back(a[i]);  //Add it to the list
	            ++i;          //Decrement both ends
	            --j;
	        }
	        else if ((a[i] * -1) > a[j]) //if |a[i]| > a[j] then a[i] cannot possibly have a match
	        {
	            ++i;
	        }
	        else                         //if |a[i]| < a[j] then a[j] cannot possibly have a match
	        {
	            --j;
	        }
	    }
	    
	    if(pairs.size() == 0)
	    {
	        cout << 0;
	    }
	    
	    for(int i = pairs.size() - 1; i >=0; --i)
	    {
	        cout << pairs[i] << " " << pairs[i] * -1 << " ";
	    }
	    
	    cout << endl;
	    
	}
	return 0;
}
