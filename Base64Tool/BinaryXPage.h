#pragma once

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
	// 7zip����Ŀ¼
	CString m_str7zipPath;
	// ����ļ���
//	CButton m_btnExplore;
	// ѡ��Դ�ļ��б����
//	CButton m_radioFilesList;
	// ѡ��ԴĿ¼�����
//	CButton m_radioSelFolder;
};
