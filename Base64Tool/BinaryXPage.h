#pragma once

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
	// 7zip程序目录
	CString m_str7zipPath;
	// 浏览文件夹
//	CButton m_btnExplore;
	// 选择源文件列表并打包
//	CButton m_radioFilesList;
	// 选择源目录并打包
//	CButton m_radioSelFolder;
};
