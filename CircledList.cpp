//
// Created by Jairo Riaño on 19/07/23.
//

#include "CircledList.h"

template<class T>
CircledList<T>::CircledList() {
    CircledList::head = NULL;
}

template<class T>
T *CircledList<T>::jumping(Node<T> *node, int jumps) {
    return nullptr;
}

template<class T>
std::vector<T *> CircledList<T>::getList(Node<T> *node) {
    return std::vector<T *>();
}

template<class T>
std::vector<T *> CircledList<T>::getList() {
    std::vector<T*> vecOut;
    Node<T>* aux = head;
    do{
        vecOut.push_back( aux->next->info);
        aux = aux->next;
    }while( aux != head );

    return vecOut;
}

template<class T>
T *CircledList<T>::findObject(T *object) {
    Node<T>* aux = head;
    do{
        if( object->getId().compare( aux->next->info->getId()) == 0 ){
            return aux->next->info;
        }
        aux = aux->next;
    }while( aux != head);

    return NULL;
}

template<class T>
Node<T> *CircledList<T>::findNode(T* object) {
    Node<T>* aux = head;
    do{
        if( object->getId().compare( aux->next->info->getId()) == 0 ){
            return aux->next;
        }
        aux = aux->next;
    }while( aux != head);

    return NULL;
}

template<class T>
void CircledList<T>::addLast(T *info) {
    if( isEmpty() ){
        head = new Node<T>(info);
        head->next = head;
    }else{
        Node<T>* newNode = new Node<T>(info);
        newNode->next = head->next;
        head->next = newNode;
        head = newNode;
    }
}

template<class T>
void CircledList<T>::addFirts(T *info) {
    if( isEmpty() ){
        head = new Node<T>(info);
        head->next = head;
    }else{
        Node<T>* newNode = new Node<T>(info);
        newNode->next = head->next;
        head->next = newNode;
    }
}

template<class T>
bool CircledList<T>::isEmpty() {
    return head == NULL;
}

template<class T>
CircledList<T>::~CircledList() {

}


