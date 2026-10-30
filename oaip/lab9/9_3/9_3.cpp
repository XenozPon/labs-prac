// 9_3.cpp : Определяет точку входа для приложения.
//

#include "framework.h"
#include "9_3.h"

#define MAX_LOADSTRING 100

// Объявления функций отрисовки
void StClausAuto(HDC hdc, int x, int y);
void drawTruck(HDC hdc, int x, int y);
void SnowWoman(HDC hdc, int x, int y);
void Logo(HDC hdc, int x, int y);

// Объявления функций для переключения сцен (9.3.6)
void DrawScene1(HDC hdc);
void DrawScene2(HDC hdc);
void DrawScene3(HDC hdc);
void DrawScene4(HDC hdc);

// Глобальные переменные:
HINSTANCE hInst;                                // текущий экземпляр
WCHAR szTitle[MAX_LOADSTRING];                  // Текст строки заголовка
WCHAR szWindowClass[MAX_LOADSTRING];            // имя класса главного окна

// Глобальная переменная для переключения рисунков (9.3.6)
int currentView = 0;

// Отправить объявления функций, включенных в этот модуль кода:
ATOM                MyRegisterClass(HINSTANCE hInstance);
BOOL                InitInstance(HINSTANCE, int);
LRESULT CALLBACK    WndProc(HWND, UINT, WPARAM, LPARAM);
INT_PTR CALLBACK    About(HWND, UINT, WPARAM, LPARAM);

int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
    _In_opt_ HINSTANCE hPrevInstance,
    _In_ LPWSTR    lpCmdLine,
    _In_ int       nCmdShow)
{
    UNREFERENCED_PARAMETER(hPrevInstance);
    UNREFERENCED_PARAMETER(lpCmdLine);

    LoadStringW(hInstance, IDS_APP_TITLE, szTitle, MAX_LOADSTRING);
    LoadStringW(hInstance, IDC_MY93, szWindowClass, MAX_LOADSTRING);
    MyRegisterClass(hInstance);

    if (!InitInstance(hInstance, nCmdShow))
    {
        return FALSE;
    }

    HACCEL hAccelTable = LoadAccelerators(hInstance, MAKEINTRESOURCE(IDC_MY93));

    MSG msg;
    while (GetMessage(&msg, nullptr, 0, 0))
    {
        if (!TranslateAccelerator(msg.hwnd, hAccelTable, &msg))
        {
            TranslateMessage(&msg);
            DispatchMessage(&msg);
        }
    }

    return (int)msg.wParam;
}

ATOM MyRegisterClass(HINSTANCE hInstance)
{
    WNDCLASSEXW wcex;
    wcex.cbSize = sizeof(WNDCLASSEX);
    wcex.style = CS_HREDRAW | CS_VREDRAW;
    wcex.lpfnWndProc = WndProc;
    wcex.cbClsExtra = 0;
    wcex.cbWndExtra = 0;
    wcex.hInstance = hInstance;
    wcex.hIcon = LoadIcon(hInstance, MAKEINTRESOURCE(IDI_MY93));
    wcex.hCursor = LoadCursor(nullptr, IDC_ARROW);
    wcex.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
    wcex.lpszMenuName = MAKEINTRESOURCEW(IDC_MY93);
    wcex.lpszClassName = szWindowClass;
    wcex.hIconSm = LoadIcon(wcex.hInstance, MAKEINTRESOURCE(IDI_SMALL));

    return RegisterClassExW(&wcex);
}

BOOL InitInstance(HINSTANCE hInstance, int nCmdShow)
{
    hInst = hInstance;

    HWND hWnd = CreateWindowW(szWindowClass, szTitle, WS_OVERLAPPEDWINDOW,
        CW_USEDEFAULT, 0, CW_USEDEFAULT, 0, nullptr, nullptr, hInstance, nullptr);

    if (!hWnd)
    {
        return FALSE;
    }

    ShowWindow(hWnd, nCmdShow);
    UpdateWindow(hWnd);

    return TRUE;
}

// ==========================================
// ФУНКЦИИ ОТРИСОВКИ ОБЪЕКТОВ
// ==========================================

void StClausAuto(HDC hdc, int x, int y) {
    MoveToEx(hdc, x + 20, y, NULL);
    LineTo(hdc, x + 30, y + 20);
    LineTo(hdc, x + 10, y + 20);
    LineTo(hdc, x + 20, y);
    MoveToEx(hdc, x + 20, y + 10, NULL);
    LineTo(hdc, x + 30, y + 40);
    LineTo(hdc, x + 10, y + 40);
    LineTo(hdc, x + 20, y + 10);
    MoveToEx(hdc, x + 20, y + 30, NULL);
    LineTo(hdc, x + 40, y + 80);
    LineTo(hdc, x, y + 80);
    LineTo(hdc, x + 20, y + 30);
}

void drawTruck(HDC hdc, int x, int y) {
    MoveToEx(hdc, x + 40, y + 20, NULL);
    LineTo(hdc, x + 100, y + 20);
    LineTo(hdc, x + 100, y + 70);
    LineTo(hdc, x + 40, y + 70);
    LineTo(hdc, x + 40, y + 20);

    MoveToEx(hdc, x, y + 30, NULL);
    LineTo(hdc, x + 40, y + 30);
    LineTo(hdc, x + 40, y + 70);
    LineTo(hdc, x, y + 70);
    LineTo(hdc, x, y + 30);

    MoveToEx(hdc, x + 5, y + 35, NULL);
    LineTo(hdc, x + 35, y + 35);
    LineTo(hdc, x + 35, y + 55);
    LineTo(hdc, x + 5, y + 55);
    LineTo(hdc, x + 5, y + 35);

    Ellipse(hdc, x + 10, y + 70, x + 30, y + 90);
    Ellipse(hdc, x + 70, y + 70, x + 90, y + 90);
}

void SnowWoman(HDC hdc, int x, int y) {
    HBRUSH hSnowBrush = CreateSolidBrush(RGB(220, 240, 255));
    HPEN hBlackPen = CreatePen(PS_SOLID, 1, RGB(0, 0, 0));

    SelectObject(hdc, hSnowBrush);
    SelectObject(hdc, hBlackPen);

    Ellipse(hdc, x, y + 60, x + 60, y + 120);
    Ellipse(hdc, x + 10, y + 30, x + 50, y + 70);
    Ellipse(hdc, x + 20, y, x + 40, y + 30);

    Ellipse(hdc, x + 25, y + 8, x + 28, y + 11);
    Ellipse(hdc, x + 32, y + 8, x + 35, y + 11);

    MoveToEx(hdc, x + 30, y + 15, NULL);
    LineTo(hdc, x + 40, y + 18);

    MoveToEx(hdc, x + 10, y + 45, NULL);
    LineTo(hdc, x - 10, y + 35);

    MoveToEx(hdc, x + 50, y + 45, NULL);
    LineTo(hdc, x + 70, y + 35);

    DeleteObject(hSnowBrush);
    DeleteObject(hBlackPen);
}

void Logo(HDC hdc, int x, int y) {
    HPEN hPen = CreatePen(PS_SOLID, 4, RGB(100, 100, 100));
    SelectObject(hdc, hPen);
    SelectObject(hdc, GetStockObject(NULL_BRUSH));

    Ellipse(hdc, x, y, x + 80, y + 50);

    HPEN hThickPen = CreatePen(PS_SOLID, 8, RGB(150, 150, 150));
    SelectObject(hdc, hThickPen);

    MoveToEx(hdc, x + 50, y + 5, NULL);
    LineTo(hdc, x + 20, y + 40);
    LineTo(hdc, x + 60, y + 40);
}


void DrawScene1(HDC hdc) {
    //// 9.3.1.1
    //StClausAuto(hdc, 50, 50);
    //StClausAuto(hdc, 350, 50);
    //StClausAuto(hdc, 50, 350);
    //StClausAuto(hdc, 350, 350);
    //StClausAuto(hdc, 200, 200);
    //// 9.3.1.2
    //int i = 0; int xPos = 50;
    //while (i < 8) { StClausAuto(hdc, xPos, 450); xPos += 60; i++; }
    //// 9.3.1.3
    //int j = 0; int yPos = 50;
    //while (j < 4) { StClausAuto(hdc, 500, yPos); yPos += 100; j++; }
    //// 9.3.1.4
    int k = 0; int xDiag = 50; int yDiag = 50;
    while (k < 4) { StClausAuto(hdc, xDiag, yDiag); xDiag += 80; yDiag += 100; k++; }
}

void DrawScene2(HDC hdc) {
    //// 9.3.2.1
    //drawTruck(hdc, 50, 150);
    //drawTruck(hdc, 350, 150);
    //drawTruck(hdc, 50, 350);
    //drawTruck(hdc, 350, 350);
    //drawTruck(hdc, 200, 250);
    //// 9.3.2.2
    //int i = 0; int xPos = 50;
    //while (i < 5) { drawTruck(hdc, xPos, 500); xPos += 120; i++; }
    //// 9.3.2.3
    int j = 0; int yPos = 150;
    while (j < 4) { drawTruck(hdc, 500, yPos); yPos += 110; j++; }
    //// 9.3.2.4
    //int k = 0; int xDiag = 50; int yDiag = 50;
    //while (k < 4) { drawTruck(hdc, xDiag, yDiag); xDiag += 120; yDiag += 110; k++; }
}

void DrawScene3(HDC hdc) {
    //// 9.3.3.1
    //SnowWoman(hdc, 50, 150);
    //SnowWoman(hdc, 250, 150);
    //SnowWoman(hdc, 50, 350);
    //SnowWoman(hdc, 250, 350);
    //// 9.3.3.2
    int i = 0; int xPos = 50;
    while (i < 5) { SnowWoman(hdc, xPos, 500); xPos += 80; i++; }
    //// 9.3.3.3
    //int j = 0; int yPos = 150;
    //while (j < 4) { SnowWoman(hdc, 500, yPos); yPos += 130; j++; }
    //// 9.3.3.4
    //int k = 0; int xDiag = 50; int yDiag = 50;
    //while (k < 4) { SnowWoman(hdc, xDiag, yDiag); xDiag += 80; yDiag += 130; k++; }
}

void DrawScene4(HDC hdc) {
    // 9.3.4.1
    Logo(hdc, 50, 50);
    Logo(hdc, 250, 50);
    Logo(hdc, 50, 250);
    Logo(hdc, 250, 250);
    Logo(hdc, 150, 150);
    //// 9.3.4.2
    //int i = 0; int xPos = 50;
    //while (i < 6) { Logo(hdc, xPos, 350); xPos += 70; i++; }
    //// 9.3.4.3
    //int j = 0; int yPos = 50;
    //while (j < 4) { Logo(hdc, 500, yPos); yPos += 70; j++; }
    //// 9.3.4.4
    //int k = 0; int xDiag = 50; int yDiag = 50;
    //while (k < 4) { Logo(hdc, xDiag, yDiag); xDiag += 70; yDiag += 70; k++; }
}




LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
    switch (message)
    {
    case WM_COMMAND:
    {
        int wmId = LOWORD(wParam);
        switch (wmId)
        {
        case IDM_ABOUT:
            DialogBox(hInst, MAKEINTRESOURCE(IDD_ABOUTBOX), hWnd, About);
            break;
        case IDM_EXIT:
            DestroyWindow(hWnd);
            break;
        default:
            return DefWindowProc(hWnd, message, wParam, lParam);
        }
    }
    break;

    case WM_PAINT:
    {
        PAINTSTRUCT ps;
        HDC hdc = BeginPaint(hWnd, &ps);

        // Переключаем сцены в зависимости от переменной currentView
        if (currentView == 0) {
            DrawScene1(hdc);
        }
        else if (currentView == 1) {
            DrawScene2(hdc);
        }
        else if (currentView == 2) {
            DrawScene3(hdc);
        }
        else if (currentView == 3) {
            DrawScene4(hdc);
        }

        EndPaint(hWnd, &ps);
    }
    break;

    case WM_KEYDOWN:
        currentView++;
        if (currentView > 3) {
            currentView = 0; 
        }
   
        InvalidateRect(hWnd, NULL, TRUE);
        break;

    case WM_DESTROY:
        PostQuitMessage(0);
        break;
    default:
        return DefWindowProc(hWnd, message, wParam, lParam);
    }
    return 0;
}

INT_PTR CALLBACK About(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam)
{
    UNREFERENCED_PARAMETER(lParam);
    switch (message)
    {
    case WM_INITDIALOG:
        return (INT_PTR)TRUE;

    case WM_COMMAND:
        if (LOWORD(wParam) == IDOK || LOWORD(wParam) == IDCANCEL)
        {
            EndDialog(hDlg, LOWORD(wParam));
            return (INT_PTR)TRUE;
        }
        break;
    }
    return (INT_PTR)FALSE;
}