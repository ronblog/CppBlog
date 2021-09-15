#pragma once

#include <string>

class Observer4
{
public:
    Observer4();
    void notified(const std::string &msg);
protected:
    std::string m_name;

private:
    int m_value;
};