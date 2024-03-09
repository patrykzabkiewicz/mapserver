/**
 *
 *	Data source for all other modules
 *
 *	Author: 	Patryk Ząbkiewicz
 * 	Data: 		01.11.2016	
 *
*/

#include <stdio.h>
#include "list.h"

namespace MapServer {

template<typename input, typename output>
class DataSource {

private:
	list<FILE> * list;
	read();

protected:
    
public:
    DataSource();
    virtual ~DataSource();

	void openSource(input source);
	output getData();
	

};


}
