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
	, m_strSource(_T(""))
	, m_strClearTxt(_T(""))
	, m_strCipherTxt(_T(""))
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
	DDX_Control(pDX, IDC_RADIO_SELSRCFILESLIST, m_rdBtnSrcFilesList);
	DDX_Control(pDX, IDC_RADIO_SELSRCFOLDER, m_radioSelFolder);
	DDX_Control(pDX, IDC_RADIO_SELBASE64TXT, m_radioSelDestxt);
	DDX_Text(pDX, IDC_EDIT_SOURCEFILES, m_strSource);
	DDV_MaxChars(pDX, m_strSource, 1024);
	DDX_Text(pDX, IDC_EDIT_DESTINATIONTXTPATH, m_strClearTxt);
	DDV_MaxChars(pDX, m_strClearTxt, 1024);
}


BEGIN_MESSAGE_MAP(CBinaryXPage, CPropertyPage)
	ON_BN_CLICKED(IDC_BUTTON_PATHEXPLORER, &CBinaryXPage::OnBnClickedButtonPathexplorer)
	ON_BN_CLICKED(IDC_RADIO_SELSRCFILESLIST, &CBinaryXPage::OnBnClickedRadioSelsrcfileslist)
	ON_BN_CLICKED(IDC_RADIO_SELSRCFOLDER, &CBinaryXPage::OnBnClickedRadioSelsrcfolder)
	ON_BN_CLICKED(IDC_RADIO_SELBASE64TXT, &CBinaryXPage::OnBnClickedRadioSelbase64txt)
	ON_BN_CLICKED(IDC_BUTTON_SELSOURCEDIRECTORY, &CBinaryXPage::OnBnClickedButtonSelsourcedirectory)
	ON_BN_CLICKED(IDC_BUTTON_SELDESTINATIONTXT, &CBinaryXPage::OnBnClickedButtonSeldestinationtxt)
	ON_BN_CLICKED(IDC_BUTTON_ZIPBINENCODE, &CBinaryXPage::OnBnClickedButtonZipbinencode)
	ON_BN_CLICKED(IDC_BUTTON_ZIPBINDECODE, &CBinaryXPage::OnBnClickedButtonZipbindecode)
END_MESSAGE_MAP()


// CBinaryXPage 消息处理程序

void CBinaryXPage::OnBnClickedButtonPathexplorer()
{
	// TODO: 在此添加控件通知处理程序代码
}

void CBinaryXPage::OnBnClickedRadioSelsrcfileslist()
{
	// TODO: 在此添加控件通知处理程序代码
}

void CBinaryXPage::OnBnClickedRadioSelsrcfolder()
{
	// TODO: 在此添加控件通知处理程序代码
}

void CBinaryXPage::OnBnClickedRadioSelbase64txt()
{
	// TODO: 在此添加控件通知处理程序代码
}

void CBinaryXPage::OnBnClickedButtonSelsourcedirectory()
{
	// TODO: 在此添加控件通知处理程序代码
}

void CBinaryXPage::OnBnClickedButtonSeldestinationtxt()
{
	// TODO: 在此添加控件通知处理程序代码
}

void CBinaryXPage::OnBnClickedButtonZipbinencode()
{
	// TODO: 在此添加控件通知处理程序代码
}

void CBinaryXPage::OnBnClickedButtonZipbindecode()
{
	// TODO: 在此添加控件通知处理程序代码
}
