#pragma once


// AddBundaryDlg �Ի���

class AddBundaryDlg : public CDialogEx
{
	DECLARE_DYNAMIC(AddBundaryDlg)

public:
	AddBundaryDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~AddBundaryDlg();

// �Ի�������
	enum { IDD = IDD_ADDBUNDARY };
	int sx;
	int sy;
	int width;
	int height;
	CString name;
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
};
