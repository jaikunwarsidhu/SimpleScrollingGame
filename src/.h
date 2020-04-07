#pragma once
#ifndef __INSTRUCTIONS__
#define __INSTRUCTIONS__

#include "Button.h"

class instructions : public Button
{
public:
	instructions();
	~instructions();


	bool ButtonClick() override;
private:
	bool m_isClicked;
};

#endif /* defined (__INSTRUCTIONS_BUTTON__) */