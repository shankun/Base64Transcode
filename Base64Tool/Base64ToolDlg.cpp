
// Base64ToolDlg.cpp : ʵ���ļ�
//
#include "stdafx.h"
#include "Base64Tool.h"
#include "Base64ToolDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CBase64ToolDlg �Ի���

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


// CBase64ToolDlg ��Ϣ�������

BOOL CBase64ToolDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// ���ô˶Ի����ͼ�ꡣ��Ӧ�ó��������ڲ��ǶԻ���ʱ����ܽ��Զ�
	//  ִ�д˲���
	SetIcon(m_hIcon, TRUE);			// ���ô�ͼ��
	SetIcon(m_hIcon, FALSE);		// ����Сͼ��

	m_pageBinary.Create(IDD_BINARYXPAGE, GetDlgItem(IDC_TAB_BASE64TRANSFER));
	m_pageString.Create(IDD_TEXTSTRINGXPAGE, GetDlgItem(IDC_TAB_BASE64TRANSFER));

	m_tabUtilities.InsertItem(0, _T("ѹ����"));
	m_tabUtilities.InsertItem(1, _T("�ַ���"));

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

	return TRUE;  // ���ǽ��������õ��ؼ������򷵻� TRUE
}

// �����Ի��������С����ť������Ҫ����Ĵ���
//  �����Ƹ�ͼ�ꡣ����ʹ���ĵ�/��ͼģ�͵� MFC Ӧ�ó���
//  �⽫�ɿ���Զ���ɡ�

void CBase64ToolDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // ���ڻ��Ƶ��豸������

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// ʹͼ���ڹ����������о���
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// ����ͼ��
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

//���û��϶���С������ʱϵͳ���ô˺���ȡ�ù��
//��ʾ��
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
