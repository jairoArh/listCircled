//
// Created by Jairo Riaño on 19/07/23.
//

#ifndef LISTCIRCLE_CIRCLEDLIST_H
#define LISTCIRCLE_CIRCLEDLIST_H

#include <vector>
#include <cstdio>

#include "Node.h"

template <class T>
class CircledList {
public:
    CircledList();

    bool isEmpty();

    void addFirts(T* info);

    void addLast( T* info);

    Node<T>* findNode(T* object);

    T* findObject(T* object);

    std::vector<T*> getList();

    std::vector<T*> getList( Node<T>* node );

    T* jumping( Node<T>*node, int jumps );

    virtual ~CircledList();

private:
    Node<T>* head;
};


#endif //LISTCIRCLE_CIRCLEDLIST_H
