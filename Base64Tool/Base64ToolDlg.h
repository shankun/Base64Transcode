
// Base64ToolDlg.h : 头文件
//
#pragma once
#include "afxwin.h"
#include "afxcmn.h"

// CBase64ToolDlg 对话框
class CBase64ToolDlg : public CDialog
{
// 构造
public:
	CBase64ToolDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_BASE64TOOL_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnTcnSelchangeTabBase64transfer(NMHDR *pNMHDR, LRESULT *pResult);
	DECLARE_MESSAGE_MAP()

	CTabCtrl m_tabUtilities;	// 二进制与字符串标签页控件
	CPropertyPage m_pageBinary; // 文件压缩包二进制页
	CPropertyPage m_pageString; // 字符串页
};

