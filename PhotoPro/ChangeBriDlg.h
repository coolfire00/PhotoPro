#pragma once


// ChangeBriDlg �Ի���

class ChangeBriDlg : public CDialogEx
{
	DECLARE_DYNAMIC(ChangeBriDlg)

public:
	ChangeBriDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~ChangeBriDlg();
	double adjust_number;
// �Ի�������
	enum { IDD = IDD_CHANGEBRI };

protected:
	CString input_data;
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
};
