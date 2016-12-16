// TextStringXPage.cpp : 实现文件
//

#include "stdafx.h"
#include "Base64Tool.h"
#include "TextStringXPage.h"


// CTextStringXPage 对话框

IMPLEMENT_DYNAMIC(CTextStringXPage, CPropertyPage)

CTextStringXPage::CTextStringXPage()
	: CPropertyPage(CTextStringXPage::IDD)
	, m_strSrcTextString(_T(""))
	, m_strEncodedString(_T(""))
{

}

CTextStringXPage::~CTextStringXPage()
{
}

BOOL CTextStringXPage::OnInitDialog()
{
	CPropertyPage::OnInitDialog();

	return TRUE;
}

void CTextStringXPage::DoDataExchange(CDataExchange* pDX)
{
	CPropertyPage::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT_ORIGINALTEXT, m_strSrcTextString);
	DDX_Text(pDX, IDC_EDIT_BASE64TEXT, m_strEncodedString);
}


BEGIN_MESSAGE_MAP(CTextStringXPage, CPropertyPage)
	ON_BN_CLICKED(IDC_BUTTON_STRINGENCODE, &CTextStringXPage::OnBnClickedButtonStringencode)
	ON_BN_CLICKED(IDC_BUTTON_STRINGDECODE, &CTextStringXPage::OnBnClickedButtonStringdecode)
END_MESSAGE_MAP()


// CTextStringXPage 消息处理程序

void CTextStringXPage::OnBnClickedButtonStringencode()
{
	// TODO: 在此添加控件通知处理程序代码
}

void CTextStringXPage::OnBnClickedButtonStringdecode()
{
	// TODO: 在此添加控件通知处理程序代码
}
