#include <iostream>
#include "CircledList.cpp"
#include "NumberOrdinal.h"

using namespace std;


int main() {

    CircledList<NumberOrdinal> *list = new CircledList<NumberOrdinal>();
    list->addLast( new NumberOrdinal("3","Tercero"));
    list->addFirts( new NumberOrdinal("2","Segundo"));
    list->addLast( new NumberOrdinal("4","Cuarto"));
    list->addFirts( new NumberOrdinal("1","Primero"));
    list->addLast( new NumberOrdinal("5","Quinto"));

    for( NumberOrdinal *numberOrdinal : list->getList()){
        cout<<*numberOrdinal<<endl;
    }

    cout<<*(list->findObject( new NumberOrdinal("3","")));

    delete(list);

    return 0;
}
