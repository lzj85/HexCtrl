#pragma once
#include "resource.h" // main symbols

class CHexSampleApp : public CWinApp
{
public:
	CHexSampleApp();
public:
	virtual BOOL InitInstance();
	DECLARE_MESSAGE_MAP()
};