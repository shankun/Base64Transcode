
// Base64ToolDlg.cpp : 实现文件
//
#include "stdafx.h"
#include "Base64Tool.h"
#include "Base64ToolDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CBase64ToolDlg 对话框

CBase64ToolDlg::CBase64ToolDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CBase64ToolDlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CBase64ToolDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_TAB_BASE64TRANSFER, m_tabUtilities);
}

BEGIN_MESSAGE_MAP(CBase64ToolDlg, CDialog)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
	ON_NOTIFY(TCN_SELCHANGE, IDC_TAB_BASE64TRANSFER, &CBase64ToolDlg::OnTcnSelchangeTabBase64transfer)
END_MESSAGE_MAP()


// CBase64ToolDlg 消息处理程序

BOOL CBase64ToolDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// 设置此对话框的图标。当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	m_pageBinary.Create(IDD_BINARYXPAGE, GetDlgItem(IDC_TAB_BASE64TRANSFER));
	m_pageString.Create(IDD_TEXTSTRINGXPAGE, GetDlgItem(IDC_TAB_BASE64TRANSFER));

	m_tabUtilities.InsertItem(0, _T("压缩包"));
	m_tabUtilities.InsertItem(1, _T("字符串"));

	CRect recTab, rectHeader;
	m_tabUtilities.GetClientRect(&recTab);
	m_tabUtilities.GetItemRect(0, &rectHeader);
	recTab.top += rectHeader.Height() + 4;
	recTab.bottom -= 2;
	recTab.left += 2;
	recTab.right -= 4;
	m_pageBinary.MoveWindow(&recTab);
	m_pageString.MoveWindow(&recTab);
	m_pageBinary.ShowWindow(SW_SHOW);
	m_tabUtilities.SetCurSel(0);

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CBase64ToolDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CBase64ToolDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

void CBase64ToolDlg::OnTcnSelchangeTabBase64transfer(NMHDR *pNMHDR, LRESULT *pResult)
{
	int nCurTab = m_tabUtilities.GetCurSel();
	m_pageBinary.ShowWindow(nCurTab == 0 ? SW_SHOW : SW_HIDE);
	m_pageString.ShowWindow(nCurTab == 0 ? SW_HIDE : SW_SHOW);
	*pResult = 0;
}
