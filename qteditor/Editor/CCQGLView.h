#pragma once

#include "cocos2d.h"

#include <QMouseEvent>
#include <QWidget>
#include "WindowBox.h"

class CCQGLWidget;

USING_NS_CC;

class CCQGLView : public GLViewImpl
{
public:
    CCQGLView();
    virtual ~CCQGLView();

	virtual bool isOpenGLReady() override;
	virtual void end() override;
	virtual void swapBuffers() override;
	virtual void setFrameSize(float width, float height) override;
	virtual void setIMEKeyboardState(bool bOpen) override;
    virtual void setViewName(const char* pszViewName);

	void setBgColor(Color4B &color);

	static CCQGLView* getInstance();

	virtual void init();

	void setBox(WindowBox* box) {
		_box = box;
	}

	WindowBox* getBox() const {
		return _box;
	}

private:
    float			_screenScaleFactor;
	float			_lastWindowHeight;
	Color4F			_bgColor;
	WindowBox* _box;
};


