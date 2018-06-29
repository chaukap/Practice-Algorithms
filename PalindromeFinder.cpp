//Jarvis is weak in computing palindromes for Alphanumeric characters.
//While Ironman is busy fighting Thanos, he needs to activate sonic punch but Jarvis is stuck in computing palindromes.
//You are given a string containing the alphanumeric character. Find whether the string is palindrome or not.
//If you are unable to solve it then it may result in the death of Iron Man.

//Input:
//The first line of the input contains t, the number of test cases. Each line of the test case contains string 'S'.

//Output:
//Each new line of the output contains "YES" if the string is palindrome and "NO" if the string is not a palindrome.


#include <locale>
#include <regex>
using namespace std;

int main() {
	int cases;
	cin >> cases;
	
	string pal;
	locale loc;
	regex notword("\\W");
	regex notdigit("\\D");
	getline(cin, pal);
	for(int k = 0; k < cases; ++k)
	{
	    getline(cin, pal);
	    for(int i = 0; i < pal.size(); ++i)
	    {
	        pal[i] = tolower(pal[i], loc);
	    }
	    
	    int i(0);
	    int j(pal.size()-1);
	    bool palendrome(true);
	    while(i < j)
	    {
	        string istring = pal.substr(i,1);
	        string jstring = pal.substr(j,1);
	        
	        if(pal[i] == pal[j])
	        {
	            ++i;
	            --j;
	        }
	        else if(regex_match(istring, notword) && regex_match(istring, notdigit))
	        {
	            ++i;
	        }
	        else if(regex_match(jstring, notword) && regex_match(jstring, notdigit))
	        {
	            --j;
	        }
	        else
	        {
	            palendrome = false;
	            break;
	        }
	    }
	    palendrome ? cout << "YES": cout << "NO";
	    cout << endl;
	}
	return 0;
}
