//
// Created by Jairo Riaño on 19/07/23.
//

#include "NumberOrdinal.h"

NumberOrdinal::NumberOrdinal() {}

NumberOrdinal::NumberOrdinal(const std::string &id, const std::string &ordinal) : id(id), ordinal(ordinal) {}

const std::string &NumberOrdinal::getId() const {
    return id;
}

void NumberOrdinal::setId(const std::string &id) {
    NumberOrdinal::id = id;
}

const std::string &NumberOrdinal::getOrdinal() const {
    return ordinal;
}

void NumberOrdinal::setOrdinal(const std::string &ordinal) {
    NumberOrdinal::ordinal = ordinal;
}

std::ostream &operator<<(std::ostream &os, const NumberOrdinal &ordinal) {
    os << "id: " << ordinal.id << " ordinal: " << ordinal.ordinal;
    return os;
}

NumberOrdinal::~NumberOrdinal() {

}
