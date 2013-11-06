#include <windows.h>

class C
{
public:
	void Method()
	{
		EnumWindows(HandleWindow, (LPARAM)this);
	}

private:
	static BOOL CALLBACK HandleWindow(HWND hWnd, LPARAM lParam)
	{
		return FALSE;
	}
};

int main()
{
	C c;
	c.Method();
	system("pause");
	return 0;
} 





