// Copyright (c) Andreas Fertig.
// SPDX-License-Identifier: MIT

void Assert(bool condition, const char* fileName, int lineNo);

#define CASSERT(condition) Assert((condition), __FILE__, __LINE__)

void Use()
{
    CASSERT(1 > 2);
}

void Assert(bool condition, const char* fileName, int lineNo)
{
    // custom handling
}

int main()
{
    CASSERT(1 > 2);
}