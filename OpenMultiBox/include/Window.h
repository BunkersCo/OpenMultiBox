#pragma once

#include <Windows.h>

namespace omb
{
	class Window
	{
	public:
		Window(HWND windowHandle);

		void SetRect(int x, int y, int width, int height);

		HWND GetHandle() const;
	private:
		HWND windowHandle;
	};
}