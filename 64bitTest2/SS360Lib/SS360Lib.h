// SS360Lib.h : SS360Lib DLL�� �⺻ ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CSS360LibApp
// �� Ŭ������ ������ ������ SS360Lib.cpp�� �����Ͻʽÿ�.
//

class CSS360LibApp : public CWinApp
{
public:
	CSS360LibApp();

// �������Դϴ�.
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
