#pragma once

#include <Windows.h>

#include <string>
#include <utility>
#include <vector>

namespace omb
{
	PROCESS_INFORMATION Launch(const std::string& path);
	std::vector<HWND> FindProcessWindowHandles(DWORD processId, const std::string& windowTitle);
	std::pair<int, int> GetMainScreenSize();
	bool IsFocusedWindow(HWND hwnd);
	POINT TransformWindowPoint(HWND originalWindowHandle, HWND targetWindowHandle, POINT point);
	void LeftClickWindows(const std::vector<class Window*>& windows, class Window* lastWindow, int delayMs);
}