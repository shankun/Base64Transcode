#pragma once


// CTextStringXPage �Ի���

class CTextStringXPage : public CPropertyPage
{
	DECLARE_DYNAMIC(CTextStringXPage)

public:
	CTextStringXPage();
	virtual ~CTextStringXPage();

// �Ի�������
	enum { IDD = IDD_TEXTSTRINGXPAGE };


	virtual BOOL OnInitDialog();

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	afx_msg void OnBnClickedButtonStringencode();
	afx_msg void OnBnClickedButtonStringdecode();
	DECLARE_MESSAGE_MAP()
	// �����ַ���
	CString m_strSrcTextString;
	// �ַ�������
	CString m_strEncodedString;

};
