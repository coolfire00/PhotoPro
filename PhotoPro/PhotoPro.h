
// PhotoPro.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CPhotoProApp:
// �йش����ʵ�֣������ PhotoPro.cpp
//

class CPhotoProApp : public CWinApp
{
public:
	CPhotoProApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CPhotoProApp theApp;