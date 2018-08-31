/***********************************************************************************************************************************
Handle IO

Simple IO functions operating on handles.  These will be superceded by general IoRead/IoWrite functionality.
***********************************************************************************************************************************/
#ifndef COMMON_IO_HANDLE_H
#define COMMON_IO_HANDLE_H

#include "common/type/string.h"

/***********************************************************************************************************************************
Functions
***********************************************************************************************************************************/
void ioHandleWriteOneStr(int handle, const String *string);

#endif