#ifndef PYSTG_HPP
#define PYSTG_HPP

#include <QString>

#include "pylsb.hpp"
#include "pykutter.hpp"

using namespace boost::python;
using namespace Stg;

template<typename ... T>
const char *compile_name(T ... name)
{
    return (QString(name) + ...).c_str();
}

#endif // PYSTG_HPP
