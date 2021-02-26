// Copyright (c) Andreas Fertig.
// SPDX-License-Identifier: MIT

#if __has_include(<source_location>)
#include <source_location>

void Assert(bool                 condition,
            std::source_location loc = std::source_location::current());

void Use()
{
    Assert(1 > 2);
}

void Assert(bool condition, std::source_location loc)
{
    // custom handling
}

int main()
{
    Assert(1 > 2);
}
#else
int main()
{
#pragma message("not supported")
}
#endif