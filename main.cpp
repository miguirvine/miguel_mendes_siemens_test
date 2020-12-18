/******************************************************************************

                    Main function prints the result.

*******************************************************************************/

#include <iostream>
#include <stdexcept>  
#include "seq_writer.h"

using namespace std;

int main()
{
    try {
        seq_writer();
    }
    catch( const exception& e ) {
        cout << "Error when executing seq_writer: " << e.what();
    }
    return 0;
}

