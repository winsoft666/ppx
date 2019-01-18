/*******************************************************************************
* Copyright (C) 2018 - 2020, winsoft666, <winsoft666@outlook.com>.
*
* THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
* EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED
* WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A PARTICULAR PURPOSE.
*
* Expect bugs
*
* Please use and enjoy. Please let me know of any bugs/improvements
* that you have found/implemented and I will fix/incorporate them into this
* file.
*******************************************************************************/



#ifndef PPX_BASE_FILE_UTIL_H_
#define PPX_BASE_FILE_UTIL_H_
#pragma once
#include "ppx_export.h"

namespace ppx {
    namespace base {
        PPX_API bool DeleteDir(const char* pszDir);
        PPX_API bool CreateDir(const wchar_t* pszDir);
        PPX_API bool CreateDir(const char* pszDir);

         // bCopySource: 
         // CopyDir(L"D:\\test", L"E:\\", true, &num); will create new folder named 'test' in E:\\
         //
        PPX_API void CopyDir(const wchar_t* pszSource, const wchar_t* pszDest, bool bCopySource, int *pIgnoreNum);
    }
}

#endif // !PPX_BASE_FILE_UTIL_H_