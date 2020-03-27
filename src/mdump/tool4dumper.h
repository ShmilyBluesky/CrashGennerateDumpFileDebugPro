#ifndef TOOL4DUMPER_H
#define TOOL4DUMPER_H

#ifdef Q_OS_WIN
#include "mdump.h"
#endif

class Tool4Dumper
{
public:
    Tool4Dumper()
    {

    }

    ~Tool4Dumper()
    {

    }

private:

#ifdef Q_OS_WIN
    MiniDumper m_dump4Win;
#endif

};

#endif // TOOL4DUMPER_H
