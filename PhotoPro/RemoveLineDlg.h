#pragma once


// RemoveLineDlg �Ի���

class RemoveLineDlg : public CDialogEx
{
	DECLARE_DYNAMIC(RemoveLineDlg)

public:
	RemoveLineDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~RemoveLineDlg();
	int pLeng;
// �Ի�������
	enum { IDD = IDD_REMOVELINE };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
};
