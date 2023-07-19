//
// Created by Jairo Riaño on 19/07/23.
//

#ifndef LISTCIRCLE_NODE_H
#define LISTCIRCLE_NODE_H

template <class T> class CircledList;

template <class T>
class Node {

    friend class CircledList<T>;
public:
    Node() {}

    explicit Node(T *info) : info(info) {}

    virtual ~Node() {

    }

private:
    T* info;
    Node<T>* next;
};


#endif //LISTCIRCLE_NODE_H
