//Akku have solved many problems, she is genius. One day her friend gave her an Array and asked her to perform
//some queries of following type:
//Each query consists of three integers
//1 A B : Update the Array at index A by value B
//2 A B : if the subarray from index A to B (both inclusive) is
//        1. Both increasing(Non-decreasing) and decreasing(Non-increasing) print -1
//        2. Only increasing(Non-decreasing) print 0
//        3. Only decreasing(Non-increasing) print 1
//        4. Neither increasing nor decreasing print -1

using namespace std;

int main() {
	int cases;
	cin >> cases;
	
	int size;
	int queres;
	int opcode, start, end;
	for(int cas = 0; cas < cases; ++cas)
	{
	    int* a;
	    cin >> size;
	    a = new int[size];
	    for(int i = 0; i < size; ++i)
	    {
	        cin >> a[i];
	    }
	    
	    cin >> queres;
	    for(int q = 0; q < queres; ++q)
	    {
	        cin >> opcode >> start >> end;
	        if(opcode == 1)
	        {
	            a[start - 1] = end;
	        }
	        else
	        {
	            --start; // switch to 0 indexing
	            --end; //switch to 0 indexing
	            
	            bool inc(false);
	            bool dec(false);
	            for(int i = start; i < end; ++i)
	            {
	                if(a[i] == a[i+1])
	                {
	                    inc = true;
	                    dec = true;
	                }
	                else if(a[i] < a[i+1])
	                {
	                    inc = true;
	                }
	                else if(a[i] > a[i+1])
	                {
	                    dec = true;
	                }
	            }
	            
	            if(inc && dec || !inc && !dec)
	            {
	                cout << -1 << endl;
	            }
	            else if(inc)
	            {
	                cout << 0 << endl;
	            }
	            else
	            {
	                cout << 1 << endl;
	            }
	            
	        }
	    }
	}
	return 0;
}
