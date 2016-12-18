#pragma once
#include "afxwin.h"

// CBinaryXPage 对话框

class CBinaryXPage : public CPropertyPage
{
	DECLARE_DYNAMIC(CBinaryXPage)

public:
	CBinaryXPage();
	virtual ~CBinaryXPage();

// 对话框数据
	enum { IDD = IDD_BINARYXPAGE };

	virtual BOOL OnInitDialog();

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

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
	// 7zip程序目录
	CString m_str7zipPath;
	// 选择源文件列表并创建压缩包的按钮
	CButton m_rdBtnSrcFilesList;
	// 选择源目录并打包的按钮
	CButton m_radioSelFolder;
	// 选择加密文件的按钮
	CButton m_radioSelDestxt;
	// 源文件或源目录
	CString m_strSource;
	// 明文文件或目录
	CString m_strClearTxt;
	// 加密文件的全路径
	CString m_strCipherTxt;
};
