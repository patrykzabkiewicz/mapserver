#ifndef LIST_H_
#define LIST_H_

#include "iterator.h"

namespace framework {

template<typename T>
struct list_elem
{
    T data;
    list_elem<T> * next;
};

template<typename T>
class list : public iterator<T> {
private:
    list_elem<T> * data;
public:
    void insert(T elem, int pos);
    void replace();
    void append_back(T elem);
    void append_front(T elem);
    T pop_back();
    T pop_front();
};

}

#endif /* LIST_H_ */
