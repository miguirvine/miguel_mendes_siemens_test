#include <iostream>
#include <stdexcept>  

#include "seq_writer.h"

using namespace std;

void seq_writer(int p_last_integer) 
 /*
  * Writes sequencialy the integers from 1 to @p_last_integer, one per line. 
  * For lines multiple of 3 prints "Foo". For multiples of 5 prints "Baa". 
  * For multiples of 3 and 5 prints "FooBaa".
  * @parameter p_last_integer: defines the last integer to be printed. 
  * @return void. 
  */
{
    if (p_last_integer<1) {
        throw domain_error("Value for p_last_integer shold be greater than 0.");
    }
    for (int n=1; n<=p_last_integer; ++n) {
        unsigned char mod_test = ((n%3==0)<<1) | (n%5 == 0);
        switch(mod_test) {
            case 0: 
                // Is not a multiple of 3 or 5.
                cout << n << "\n";          
                break;
            case 1: 
                // Is a multiple of 5.
                cout << "Baa" << "\n";      
                break;
            case 2: 
                // Is a multiple of 3.
                cout << "Foo" << "\n";
                break;
            case 3: 
                // Is a multiple of 3 and 5.
                cout << "FooBaa" << "\n";
                break;
        }
    }
}