// H�m thay doi kich co cua khung cmd voi tham so truyen vao l� chieu cao, chieu rong.
void resizeConsole(int width, int height)
{
	HWND console = GetConsoleWindow();
	RECT r;
	GetWindowRect(console, &r);
	MoveWindow(console, r.left, r.top, width, height, TRUE);
}

// H�m t� m�u.
void textcolor(int x)
{
	HANDLE mau;
	mau=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(mau,x);
}

// H�m dich chuyen con tro den toa do x, y.
void gotoxy(int x,int y)
{    
	HANDLE hConsoleOutput;    
	COORD Cursor_an_Pos = {x-1,y-1};   
	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);    
	SetConsoleCursorPosition(hConsoleOutput , Cursor_an_Pos);
}

// H�m x�a m�n h�nh.
void XoaManHinh()
{
	HANDLE hOut;
	COORD Position;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	Position.X = 0;
	Position.Y = 0;
	SetConsoleCursorPosition(hOut, Position);
}

// H�m lay Key tu b�n ph�m
/* GetAsyncKeyState(VK_ESCAPE) => bat su kien ph�m Esc */ 

// H�m tu viet
void ToMau(int x, int y, char *a, int color) // x, y l� t?a d? con tr? c?n nh?y d?n d? vi?t, a l� chu?i c?n truy?n v�o, color l� m�u truy?n v�o.
{
	gotoxy(x, y);
	textcolor(color);
	textcolor(7);
}
