// BinaryXPage.cpp : 实现文件
//
#include "stdafx.h"
#include "Base64Tool.h"
#include "BinaryXPage.h"


// CBinaryXPage 对话框

IMPLEMENT_DYNAMIC(CBinaryXPage, CPropertyPage)

CBinaryXPage::CBinaryXPage()
	: CPropertyPage(CBinaryXPage::IDD)
	, m_str7zipPath(_T("C:\\Program Files\\7-Zip\\7z.exe"))
{
}

CBinaryXPage::~CBinaryXPage()
{
}

BOOL CBinaryXPage::OnInitDialog()
{
	CPropertyPage::OnInitDialog();

	return TRUE;
}

void CBinaryXPage::DoDataExchange(CDataExchange* pDX)
{
	CPropertyPage::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT_PATH7ZIP, m_str7zipPath);
	DDV_MaxChars(pDX, m_str7zipPath, 512);
}


BEGIN_MESSAGE_MAP(CBinaryXPage, CPropertyPage)
	
END_MESSAGE_MAP()


// CBinaryXPage 消息处理程序
