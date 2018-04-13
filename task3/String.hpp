#ifndef STRING_HPP
#define STRING_HPP

class String {
public:
    String();
    String(const char* s);
    String(const String& s);
    virtual ~String();
    String& operator=(String& s);
    void print();
protected:
    char* data() const;
private:
    void init(const char* newData);
    char* m_data;
    bool m_isInit;
};

#endif // STRING_HPP
