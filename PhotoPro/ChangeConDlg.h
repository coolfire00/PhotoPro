#pragma once


// ChangeConDlg �Ի���

class ChangeConDlg : public CDialogEx
{
	DECLARE_DYNAMIC(ChangeConDlg)

public:
	ChangeConDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~ChangeConDlg();
	double adjust_number;
// �Ի�������
	enum { IDD = IDD_CHANGECON };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
};
