
// Base64ToolDlg.h : ͷ�ļ�
//
#pragma once
#include "afxwin.h"
#include "afxcmn.h"

// CBase64ToolDlg �Ի���
class CBase64ToolDlg : public CDialog
{
// ����
public:
	CBase64ToolDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_BASE64TOOL_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnTcnSelchangeTabBase64transfer(NMHDR *pNMHDR, LRESULT *pResult);
	DECLARE_MESSAGE_MAP()

	CTabCtrl m_tabUtilities;	// ���������ַ�����ǩҳ�ؼ�
	CPropertyPage m_pageBinary; // �ļ�ѹ����������ҳ
	CPropertyPage m_pageString; // �ַ���ҳ
};

