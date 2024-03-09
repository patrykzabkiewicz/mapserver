#ifndef ITERATOR_H_
#define ITERATOR_H_

template<typename T>
class iterator {
public:
    int isEmpty();
    int hasNext();
    T * next();
};

#endif /* ITERATOR_H_ */
