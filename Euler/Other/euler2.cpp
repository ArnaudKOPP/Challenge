#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

/*
 * Euler problem 2
 */

void prob2()
{
    std::vector<int> list;
    int i = 1;
    int j = 2;
    int n = 0;
    list.push_back(j);
    while (n < 4000000)
    {
        n = i + j;
        i = j;
        j = n;
        if ( n > 4000000)
        {
            break;
        }
        else 
        {
            if (n % 2 ==0)
            {
                list.push_back(n);
            }
            cout << n <<endl;
        }
    }
    int somme = std::accumulate(list.begin(), list.end(), 0);
    std::cout << "Euler problem 2 results: "<< std::endl;
	std::cout << somme << std::endl;
}


/*
 * Euler problem 2 alias
 */
void prob2alias()
{

    int term_1 = 1;
    int term_2 = 2;
    int term_3 = 0;
    int MaxTerm = 0;
    int sum = 0;

    cout<< "This Program lists the Fibonacci sequence. Please enter the Max number you want to have sequence:" << endl;

    cin >> MaxTerm ;

    while (term_1 <= MaxTerm)
    {
        cout<< term_1 << endl;
        if ((term_1 %2) == 0)
        {   
            sum += term_1;
        }

        term_3 = term_1 + term_2;
        term_1 = term_2;
        term_2 = term_3;

    }
    cout << "the sum of even value numbers is: "<< sum << endl;
}


int main()
{
	cout << "Problem 2" << endl;
	prob2();
	prob2alias();
	return 0;
}
