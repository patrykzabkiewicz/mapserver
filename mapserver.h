/**
 *  Map Server class
 *
 *  Main class of the server enviroment
 *  Autor:  Patryk Zabkiewicz
 *  Date:   15.07.2016
 */

#ifndef MAPSERVER_H_
#define MAPSERVER_H_

#include "typedef.h"
#include "parser.h"
#include "renderer.h"
#include "datasource.h"

namespace MapServer {

class MapServer {
private:

protected:
    Server(Server s);

public:
    Server();
    virtual ~Server();
};


}

#endif /* MAPSERVER_H_ */