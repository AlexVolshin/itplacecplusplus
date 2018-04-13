#include "String.hpp"
#include <iostream>
#include <cstring>

constexpr size_t c_STR_MAX_LENGTH = 100;

String::String() : m_data(new char[c_STR_MAX_LENGTH]), m_isInit(false) {}

String::String(const char *s) : m_data(new char[c_STR_MAX_LENGTH]), m_isInit(false) {
    init(s);
}

String::String(const String& s) : m_data(new char[c_STR_MAX_LENGTH]), m_isInit(false) {
    init(s.data());
}

String::~String() {
    delete [] m_data;
}

String& String::operator=(String& s) {
    init(s.data());
    return *this;
}

void String::print() {
    if (!m_isInit)
        return;
    std::cout << m_data << std::endl;
}

char* String::data() const {
    return m_data;
}

void String::init(const char* newData) {
    std::strncpy(m_data, newData, c_STR_MAX_LENGTH);
    m_isInit = true;
}
