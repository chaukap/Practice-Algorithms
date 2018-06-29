// Davis who has number of scanners in his shop select only two scanners to scan the documents of a customer. 
// When a customer comes to his shop he knows three parameters S1, S2 and N.  S1 and S2 are the time taken by 
// scanner 1 and scanner 2 to scan one document respectively And N is the number of documents given by the 
// customer. As he is suppose to entertain a number of customers, he wants to calculate the minimum time to 
// scan all the N documents using those two scanners.

using namespace std;

int main() {
	int cases; // number of test cases
	cin >> cases;
	
	int scan1, scan2, papers, time1, time2; //initialized outside to save time
	for(int cas = 0; cas < cases; cas++)
	{
	    cin >> scan1 >> scan2 >> papers; // speed of scanner1 >> speed of scanner2 >> # of papers
	    
	    time1 = 0;
	    time2 = 0;
	    for(int i = 0; i < papers; ++i)
	    {
	        if(time1 + scan1 < time2 + scan2) // Greedy algorithm. If it is faster to give to scan 1 do it. Else give to scan2
	        {
	            time1 += scan1;
	        }
	        else
	        {
	            time2 += scan2;
	        }
	    }
	    
	    time1 < time2 ? cout << time2 : cout << time1; //print the longer time
	    cout << endl;
	}
	return 0;
}
