#pragma once
#include <core\types_c.h>


// AddTextDlg �Ի���

class AddTextDlg : public CDialogEx
{
	DECLARE_DYNAMIC(AddTextDlg)

public:
	AddTextDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~AddTextDlg();

// �Ի�������
	enum { IDD = IDD_ADDTEXT };

	CString text;
	CvScalar color;
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
};
