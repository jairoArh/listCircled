//
// Created by Jairo Riaño on 19/07/23.
//

#ifndef LISTCIRCLE_NUMBERORDINAL_H
#define LISTCIRCLE_NUMBERORDINAL_H

#include <string>
#include <ostream>

class NumberOrdinal {

public:
    NumberOrdinal();

    NumberOrdinal(const std::string &id, const std::string &ordinal);

    const std::string &getId() const;

    void setId(const std::string &id);

    const std::string &getOrdinal() const;

    void setOrdinal(const std::string &ordinal);

    friend std::ostream &operator<<(std::ostream &os, const NumberOrdinal &ordinal);

    virtual ~NumberOrdinal();

private:
    std::string id;
    std::string ordinal;
};


#endif //LISTCIRCLE_NUMBERORDINAL_H
