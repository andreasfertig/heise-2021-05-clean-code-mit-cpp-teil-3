// Copyright (c) Andreas Fertig.
// SPDX-License-Identifier: MIT

#include <string>

int main()
{
    std::string str{"Hallo, iX"};

    if(str.find("Hallo") != std::string::npos) {
        // found
    }
}