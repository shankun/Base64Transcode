
// Base64Tool.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CBase64ToolApp:
// �йش����ʵ�֣������ Base64Tool.cpp
//

class CBase64ToolApp : public CWinAppEx
{
public:
	CBase64ToolApp();

// ��д
	public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CBase64ToolApp theApp;