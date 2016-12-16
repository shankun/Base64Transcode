#pragma once


// CTextStringXPage 对话框

class CTextStringXPage : public CPropertyPage
{
	DECLARE_DYNAMIC(CTextStringXPage)

public:
	CTextStringXPage();
	virtual ~CTextStringXPage();

// 对话框数据
	enum { IDD = IDD_TEXTSTRINGXPAGE };


	virtual BOOL OnInitDialog();

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	afx_msg void OnBnClickedButtonStringencode();
	afx_msg void OnBnClickedButtonStringdecode();
	DECLARE_MESSAGE_MAP()
	// 明文字符串
	CString m_strSrcTextString;
	// 字符串密文
	CString m_strEncodedString;

};
