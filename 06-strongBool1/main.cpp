// Copyright (c) Andreas Fertig.
// SPDX-License-Identifier: MIT

void OpenFile() {}

struct FileAccessParams
{
    bool open{false};
    bool close{false};
    bool readonly{false};
};

void FileAccess(FileAccessParams params)
{
    if(params.close) {
        OpenFile(/* ... */);
    }
}

// ...

void SomeFunction()
{
    FileAccess(FileAccessParams{.open = true});
}

int main()
{
    FileAccess({.open = true});
}