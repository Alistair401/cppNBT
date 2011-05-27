/******************************************************************************
 *
 *  Utilities (util.cc)
 *  ---
 *  Created: 03.02.2011 02:52:37
 *  Author:  Lukas Niederbremer
 *
 ******************************************************************************/
#include "util.h"


std::string string_replace(const std::string &string,
                   const std::string &find,
                   const std::string &replace)
{
    std::string ret = string;

    for (int j = 0; (j = ret.find(find, j)) != std::string::npos;)
        ret.replace(j++, find.length(), replace);

    return ret;
}