#pragma once


// ChangeByValDlg �Ի���

class ChangeByValDlg : public CDialogEx
{
	DECLARE_DYNAMIC(ChangeByValDlg)

public:
	ChangeByValDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~ChangeByValDlg();
	int width;
	int height;
// �Ի�������
	enum { IDD = IDD_RESIZEBYVALUE };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
};
