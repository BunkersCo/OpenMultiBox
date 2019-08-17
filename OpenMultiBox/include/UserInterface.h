#pragma once

#include <thread>
#include <map>

class QWidget;
class QApplication;
class QLabel;
class QMainWindow;

namespace omb
{
	class UserInterface
	{
	public:
		void Start();
		void Stop();
		int CreateIdWindow();
		void SetIdWindowPosition(int windowId, int x, int y);

		void SetBroadcast(bool b);
		void SetStayOnTop(bool b);
		void SetMovementBroadcast(bool b);
		void SetMainWindowPosition(int x, int y);

	private:
		std::thread uiThread;
		QApplication* app = nullptr;

		std::map<int, QWidget*> idWindows;

		QLabel* mouseBroadcastLabel = nullptr;
		QLabel* movementBroadcastLabel = nullptr;
		QLabel* stayOnTopLabel = nullptr;
		QLabel* copyWTFLabel = nullptr;
		QLabel* broadcastLabel = nullptr;

		QMainWindow* mainWindow = nullptr;

		int nextWindowId = 0;
	};
}