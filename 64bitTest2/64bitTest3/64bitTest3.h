// 64bitTest3.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CMy64bitTest3App:
// �� Ŭ������ ������ ���ؼ��� 64bitTest3.cpp�� �����Ͻʽÿ�.
//

class CMy64bitTest3App : public CWinApp
{
public:
	CMy64bitTest3App();

// �������Դϴ�.
	public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CMy64bitTest3App theApp;