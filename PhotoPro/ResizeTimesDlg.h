#pragma once


// ResizeTimesDlg �Ի���

class ResizeTimesDlg : public CDialogEx
{
	DECLARE_DYNAMIC(ResizeTimesDlg)

public:
	ResizeTimesDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~ResizeTimesDlg();
	double times;
// �Ի�������
	enum { IDD = IDD_RESIZEBYTIMES };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
};
