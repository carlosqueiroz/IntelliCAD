#pragma once

#include "stdafx.h"

// CCustomRibbonBar

class CCustomRibbonBar : public CMFCRibbonBar
{
	DECLARE_DYNAMIC(CCustomRibbonBar)

public:
	CCustomRibbonBar();
	virtual ~CCustomRibbonBar();

protected:
	DECLARE_MESSAGE_MAP()
public:
	void DeleteDropdown();
};

