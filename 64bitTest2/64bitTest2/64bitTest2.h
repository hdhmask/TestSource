// 64bitTest2.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CMy64bitTest2App:
// �� Ŭ������ ������ ���ؼ��� 64bitTest2.cpp�� �����Ͻʽÿ�.
//

class CMy64bitTest2App : public CWinApp
{
public:
	CMy64bitTest2App();

// �������Դϴ�.
	public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CMy64bitTest2App theApp;