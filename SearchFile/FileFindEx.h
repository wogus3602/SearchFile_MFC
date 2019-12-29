#pragma once
#include <afx.h>
class CFileFindEx :
	public CFileFind
{
public:
	CFileFindEx();
	~CFileFindEx();
	CString GetCreationTimeString(CString strTmp = _T("-"));
	CString GetLengthString();
};

