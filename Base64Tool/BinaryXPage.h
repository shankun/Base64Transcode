#pragma once
#include "afxwin.h"

// CBinaryXPage �Ի���

class CBinaryXPage : public CPropertyPage
{
	DECLARE_DYNAMIC(CBinaryXPage)

public:
	CBinaryXPage();
	virtual ~CBinaryXPage();

// �Ի�������
	enum { IDD = IDD_BINARYXPAGE };

	virtual BOOL OnInitDialog();

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()

	afx_msg void OnBnClickedButtonPathexplorer();
	afx_msg void OnBnClickedRadioSelsrcfileslist();
	afx_msg void OnBnClickedRadioSelsrcfolder();
	afx_msg void OnBnClickedRadioSelbase64txt();
	afx_msg void OnBnClickedButtonSelsourcedirectory();
	afx_msg void OnBnClickedButtonSeldestinationtxt();
	afx_msg void OnBnClickedButtonZipbinencode();
	afx_msg void OnBnClickedButtonZipbindecode();

private:
	// 7zip����Ŀ¼
	CString m_str7zipPath;
	// ѡ��Դ�ļ��б�����ѹ�����İ�ť
	CButton m_rdBtnSrcFilesList;
	// ѡ��ԴĿ¼������İ�ť
	CButton m_radioSelFolder;
	// ѡ������ļ��İ�ť
	CButton m_radioSelDestxt;
	// Դ�ļ���ԴĿ¼
	CString m_strSource;
	// �����ļ���Ŀ¼
	CString m_strClearTxt;
	// �����ļ���ȫ·��
	CString m_strCipherTxt;
};
