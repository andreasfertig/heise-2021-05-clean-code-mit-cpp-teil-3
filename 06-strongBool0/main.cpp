// Copyright (c) Andreas Fertig.
// SPDX-License-Identifier: MIT



#if defined (_MSC_VER)
#  define not !
#endif /* MSVC */


void OpenFile() {}

void FileAccess(bool open, bool close, bool readonly)
{
    if(close) {
        OpenFile(/* ... */);
    }
}

// ...

void SomeFunction()
{
    FileAccess(true, false, false);
}

void OtherFunction()
{
    FileAccess(/*open*/ true, /*close*/ false, /*readonly*/ false);
}

int main() {}