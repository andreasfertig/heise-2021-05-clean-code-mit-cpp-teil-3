// Copyright (c) Andreas Fertig.
// SPDX-License-Identifier: MIT



#if defined (_MSC_VER)
#  define not !
#endif /* MSVC */


#include <string>

int main()
{
    std::string str{"Hallo, iX"};

    if(str.starts_with("Hallo")) {
        // found
    }
}