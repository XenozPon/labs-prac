// laba9.cpp : Определяет точку входа для приложения.
//

#include "framework.h"
#include "laba9.h"

#define MAX_LOADSTRING 100

// Глобальные переменные:
HINSTANCE hInst;                                // текущий экземпляр
WCHAR szTitle[MAX_LOADSTRING];                  // Текст строки заголовка
WCHAR szWindowClass[MAX_LOADSTRING];            // имя класса главного окна

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

    // TODO: Разместите код здесь.

    // Инициализация глобальных строк
    LoadStringW(hInstance, IDS_APP_TITLE, szTitle, MAX_LOADSTRING);
    LoadStringW(hInstance, IDC_LABA9, szWindowClass, MAX_LOADSTRING);
    MyRegisterClass(hInstance);

    // Выполнить инициализацию приложения:
    if (!InitInstance (hInstance, nCmdShow))
    {
        return FALSE;
    }

    HACCEL hAccelTable = LoadAccelerators(hInstance, MAKEINTRESOURCE(IDC_LABA9));

    MSG msg;

    // Цикл основного сообщения:
    while (GetMessage(&msg, nullptr, 0, 0))
    {
        if (!TranslateAccelerator(msg.hwnd, hAccelTable, &msg))
        {
            TranslateMessage(&msg);
            DispatchMessage(&msg);
        }
    }

    return (int) msg.wParam;
}



//
//  ФУНКЦИЯ: MyRegisterClass()
//
//  ЦЕЛЬ: Регистрирует класс окна.
//
ATOM MyRegisterClass(HINSTANCE hInstance)
{
    WNDCLASSEXW wcex;

    wcex.cbSize = sizeof(WNDCLASSEX);

    wcex.style          = CS_HREDRAW | CS_VREDRAW;
    wcex.lpfnWndProc    = WndProc;
    wcex.cbClsExtra     = 0;
    wcex.cbWndExtra     = 0;
    wcex.hInstance      = hInstance;
    wcex.hIcon          = LoadIcon(hInstance, MAKEINTRESOURCE(IDI_LABA9));
    wcex.hCursor        = LoadCursor(nullptr, IDC_ARROW);
    wcex.hbrBackground  = (HBRUSH)(COLOR_WINDOW+1);
    wcex.lpszMenuName   = MAKEINTRESOURCEW(IDC_LABA9);
    wcex.lpszClassName  = szWindowClass;
    wcex.hIconSm        = LoadIcon(wcex.hInstance, MAKEINTRESOURCE(IDI_SMALL));

    return RegisterClassExW(&wcex);
}

//
//   ФУНКЦИЯ: InitInstance(HINSTANCE, int)
//
//   ЦЕЛЬ: Сохраняет маркер экземпляра и создает главное окно
//
//   КОММЕНТАРИИ:
//
//        В этой функции маркер экземпляра сохраняется в глобальной переменной, а также
//        создается и выводится главное окно программы.
//
BOOL InitInstance(HINSTANCE hInstance, int nCmdShow)
{
   hInst = hInstance; // Сохранить маркер экземпляра в глобальной переменной

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

//
//  ФУНКЦИЯ: WndProc(HWND, UINT, WPARAM, LPARAM)
//
//  ЦЕЛЬ: Обрабатывает сообщения в главном окне.
//
//  WM_COMMAND  - обработать меню приложения
//  WM_PAINT    - Отрисовка главного окна
//  WM_DESTROY  - отправить сообщение о выходе и вернуться
//
//
LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
    switch (message)
    {
    case WM_COMMAND:
        {
            int wmId = LOWORD(wParam);
            // Разобрать выбор в меню:
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

        //домик 9.1.1
        MoveToEx(hdc, 100, 50, NULL);
        LineTo(hdc, 150, 100);
        LineTo(hdc, 50, 100);
        LineTo(hdc, 150, 100);
        LineTo(hdc, 150, 200);
        LineTo(hdc, 50, 200);
        LineTo(hdc, 50, 100);
        LineTo(hdc, 100, 50);
        MoveToEx(hdc, 75, 125, NULL);
        LineTo(hdc, 125, 125);
        LineTo(hdc, 125, 175);
        LineTo(hdc, 75, 175);
        LineTo(hdc, 75, 125);
        LineTo(hdc, 100, 125);
        LineTo(hdc, 100, 175);
        MoveToEx(hdc, 75, 150, NULL);
        LineTo(hdc, 125, 150);

        // ёлка 9.1.2
        MoveToEx(hdc, 285, 0, NULL);
        LineTo(hdc, 350, 75);
        LineTo(hdc, 325, 75);
        LineTo(hdc, 375, 125);
        LineTo(hdc, 325, 125);
        LineTo(hdc, 375, 175);
        LineTo(hdc, 300, 175);
        LineTo(hdc, 300, 150);
        LineTo(hdc, 300, 200);
        LineTo(hdc, 275, 200);
        LineTo(hdc, 275, 150);
        LineTo(hdc, 275, 175);
        LineTo(hdc, 200, 175);
        LineTo(hdc, 250, 125);
        LineTo(hdc, 200, 125);
        LineTo(hdc, 250, 75);
        LineTo(hdc, 225, 75);
        LineTo(hdc, 285, 0);

        // снежная баба 9.1.4
        
        
        MoveToEx(hdc, 475, 0, NULL);
        LineTo(hdc, 525, 0);
        LineTo(hdc, 525, 60);
        LineTo(hdc, 475, 60);
        LineTo(hdc, 475, 0);
        Ellipse(hdc, 475, 50, 525, 100);
        Ellipse(hdc, 450, 100, 550, 200);
        Ellipse(hdc, 450, 200, 550, 300);
        
        Ellipse(hdc, 550, 300, 525, 275);
        Ellipse(hdc, 450, 300, 475, 275);

        MoveToEx(hdc, 525, 25, NULL);
        LineTo(hdc, 525, 25);
        LineTo(hdc, 550, 50);
        LineTo(hdc, 525, 55);

        MoveToEx(hdc, 500, 75, NULL);
        LineTo(hdc, 475, 75);
        LineTo(hdc, 500, 90);
        LineTo(hdc, 500, 75);
        Ellipse(hdc, 485, 65, 490, 70);
        Ellipse(hdc, 505, 65, 510, 70);

        MoveToEx(hdc, 450, 150, NULL);
        LineTo(hdc, 400, 100);
        LineTo(hdc, 425, 125);
        LineTo(hdc, 400, 125);
        LineTo(hdc, 425, 125);
        LineTo(hdc, 425, 100);

        MoveToEx(hdc, 550, 150, NULL);
        LineTo(hdc, 600, 100);
        LineTo(hdc, 575, 125);
        LineTo(hdc, 600, 125);
        LineTo(hdc, 575, 125);
        LineTo(hdc, 575, 100);
        
        //9.1.3 авто
        MoveToEx(hdc, 50, 300, NULL);
        LineTo(hdc,100, 250);
        LineTo(hdc,300, 250);
        LineTo(hdc,350, 300);
        
        LineTo(hdc,400, 300);
        LineTo(hdc,400, 325);
        LineTo(hdc,375, 325);
        LineTo(hdc, 375, 300);
        MoveToEx(hdc, 400, 300, NULL);
        LineTo(hdc, 400, 350);
        LineTo(hdc, 350, 350);
        MoveToEx(hdc, 300, 350, NULL);
        LineTo(hdc, 150, 350);
        MoveToEx(hdc, 100, 350, NULL);
        LineTo(hdc, 50, 350);
        LineTo(hdc, 50, 325);
        LineTo(hdc, 75, 325);
        LineTo(hdc, 75, 300);
        LineTo(hdc, 50, 300);
        LineTo(hdc, 50, 325);
        LineTo(hdc, 50, 300);

        Ellipse(hdc, 100, 325, 150, 375);
        Ellipse(hdc, 300, 325, 350, 375);

       //9.1.5 - дерево
       
        HBRUSH hBrownBrush = CreateSolidBrush(RGB(139, 69, 19)); 
        HBRUSH hGreenBrush = CreateSolidBrush(RGB(34, 139, 34));
        HBRUSH hBlackBrush = CreateSolidBrush(RGB(30, 30, 30));
        

        SelectObject(hdc, hBrownBrush);
        Rectangle(hdc, 95, 500, 115, 550);

        SelectObject(hdc, hGreenBrush);

        Ellipse(hdc, 50, 400, 150, 510);
        Ellipse(hdc, 100, 450, 160, 510);
        Ellipse(hdc, 35, 425, 100, 495);
        Ellipse(hdc, 100, 400, 170, 480);
        Ellipse(hdc, 50, 395, 120, 490);
        Ellipse(hdc, 75, 375, 125, 425);

        //9.1.6 строение
        HBRUSH hDefBrush = CreateSolidBrush(RGB(255, 255, 255));
        HPEN hDefPen = CreatePen(PS_SOLID,2,RGB(1, 1, 1));
        SelectObject(hdc, hDefBrush);
        Rectangle(hdc, 200, 450, 300, 550);
        Rectangle(hdc, 300, 450, 450, 550);
        MoveToEx(hdc, 200, 450, NULL);
        LineTo(hdc, 250, 400);
        LineTo(hdc, 300, 450);
        LineTo(hdc, 200, 450);
        LineTo(hdc, 250, 400);
        LineTo(hdc, 400, 400);
        LineTo(hdc, 450, 450);
        Rectangle(hdc, 225, 475, 275, 550);
        Rectangle(hdc, 350, 475, 400, 525);
        MoveToEx(hdc, 375, 475, NULL);
        LineTo(hdc, 375, 525);
        MoveToEx(hdc, 350, 500, NULL);
        LineTo(hdc, 400, 500);
        MoveToEx(hdc, 220, 430, NULL);
        LineTo(hdc, 220, 405);
        LineTo(hdc, 235, 405);
        LineTo(hdc, 235, 415);

        //9.1.7 сердешко линиями
        MoveToEx(hdc, 500, 500, NULL);
        LineTo(hdc, 470, 470);
        LineTo(hdc, 440, 430);
        LineTo(hdc, 420, 390);
        LineTo(hdc, 410, 350);
        LineTo(hdc, 430, 320);
        LineTo(hdc, 460, 310);
        LineTo(hdc, 490, 330);
        LineTo(hdc, 500, 340);
        LineTo(hdc, 510, 330);
        LineTo(hdc, 540, 310);
        LineTo(hdc, 570, 320);
        LineTo(hdc, 590, 350);
        LineTo(hdc, 580, 390);
        LineTo(hdc, 560, 430);
        LineTo(hdc, 530, 470);
        LineTo(hdc, 500, 500);
        MoveToEx(hdc, 500, 500, NULL);
        LineTo(hdc, 470, 470);MoveToEx(hdc, 500, 500, NULL);
        LineTo(hdc, 440, 430);MoveToEx(hdc, 500, 500, NULL);
        LineTo(hdc, 420, 390);MoveToEx(hdc, 500, 500, NULL);
        LineTo(hdc, 410, 350);MoveToEx(hdc, 500, 500, NULL);
        LineTo(hdc, 430, 320);MoveToEx(hdc, 500, 500, NULL);
        LineTo(hdc, 460, 310);MoveToEx(hdc, 500, 500, NULL);
        LineTo(hdc, 490, 330);MoveToEx(hdc, 500, 500, NULL);
        LineTo(hdc, 500, 340);MoveToEx(hdc, 500, 500, NULL);
        LineTo(hdc, 510, 330);MoveToEx(hdc, 500, 500, NULL);
        LineTo(hdc, 540, 310);MoveToEx(hdc, 500, 500, NULL);
        LineTo(hdc, 570, 320);MoveToEx(hdc, 500, 500, NULL);
        LineTo(hdc, 590, 350);MoveToEx(hdc, 500, 500, NULL);
        LineTo(hdc, 580, 390);MoveToEx(hdc, 500, 500, NULL);
        LineTo(hdc, 560, 430);MoveToEx(hdc, 500, 500, NULL);
        LineTo(hdc, 530, 470);MoveToEx(hdc, 500, 500, NULL);
        LineTo(hdc, 500, 500);MoveToEx(hdc, 500, 500, NULL);
       
        //9.1.8
        MoveToEx(hdc,50,600,NULL);
        LineTo(hdc, 150, 600);
        LineTo(hdc, 150, 650);
        LineTo(hdc, 200, 650);
        LineTo(hdc, 200, 625);
        LineTo(hdc, 210, 625);
        LineTo(hdc, 210, 650);
        LineTo(hdc, 225, 650);
        LineTo(hdc, 225, 700);
        LineTo(hdc, 200, 700);
        MoveToEx(hdc, 175, 700, NULL);
        LineTo(hdc, 125, 700);
        MoveToEx(hdc,75, 700, NULL);
        LineTo(hdc, 50, 700);
        LineTo(hdc, 50, 690);
        LineTo(hdc, 25, 690);
        LineTo(hdc, 25, 675);
        LineTo(hdc, 50, 675);
        LineTo(hdc, 50, 600);
        Ellipse(hdc, 75, 675, 125, 725);
        Ellipse(hdc, 175, 695, 200, 720 );
        MoveToEx(hdc, 125, 600, NULL);
        LineTo(hdc, 125, 650);
        LineTo(hdc, 150, 650);
        LineTo(hdc, 50, 650);



        //9.1.9
        SelectObject(hdc, hGreenBrush);
        Rectangle(hdc, 275, 575, 475, 765);
        SelectObject(hdc, hBlackBrush);
        Rectangle(hdc, 300, 600, 350, 650);
        Rectangle(hdc, 400, 600, 450, 650);
        Rectangle(hdc, 350, 650, 400, 725);
        Rectangle(hdc, 325, 675, 350, 750);
        Rectangle(hdc, 400, 675, 425, 750);
        SelectObject(hdc, hDefBrush);

        //9.1.10
        Ellipse(hdc, 50, 750, 150, 800);
        MoveToEx(hdc, 50, 775, NULL);
        LineTo(hdc,75, 900);
        LineTo(hdc,125, 900);
        LineTo(hdc,150, 775);

        //9.1.11
        MoveToEx(hdc, 250, 750, NULL);
        Arc(hdc, 650, 700, 850, 800, 650, 750, 850, 750);
        Arc(hdc, 850, 700, 1050, 800, 850, 750, 1050, 750);
        Arc(hdc, 1050, 700, 1250, 800, 1050, 750, 1250, 750);

        //9.2.1

        HPEN hGreenPen = CreatePen(PS_SOLID, 2, RGB(34, 139, 34));
        SelectObject(hdc, hGreenPen);
        int xo = 750;
        int yo = 150;
        MoveToEx(hdc,xo, yo, NULL);
        int y = yo - 50;
        int x = xo - 150;
        int n = 0;
        while (n <= 10) {
            LineTo(hdc, x, y);
            x += 30;
            n++;
            MoveToEx(hdc, xo, yo, NULL);
        }

        //9.2.2

        int zo = 950;
        int jo = 150;
        MoveToEx(hdc, zo, jo, NULL);
        int j = jo;
        int z = zo- 75;
        n = 0;
        while (n <= 5) {
            LineTo(hdc, z, j);
            z += 15;
            j -= 10;
            n++;
            MoveToEx(hdc, zo, jo, NULL);
        }
        j += 10;
        z -= 15;
        while (n <= 10) {
            z += 15;
            j += 10;
            LineTo(hdc, z, j);
            n++;
            MoveToEx(hdc, zo, jo, NULL);
        }

        //9.2.4
        HPEN hRedPen = CreatePen(PS_SOLID, 2, RGB(255, 7, 3));
        SelectObject(hdc, hRedPen);
        int o = 800;
        int p = 0;
        MoveToEx(hdc, o, p, NULL);
        n = 0;
        while (n < 10) {
            LineTo(hdc, o, p + 60);
            o += 10;
            MoveToEx(hdc, o, p, NULL);
            n++;
        }

        //9.2.5
        HPEN hBROWNPen = CreatePen(PS_SOLID, 2, RGB(217, 109, 9));
        SelectObject(hdc, hBROWNPen);
        x = 600;
        y = 250;
        MoveToEx(hdc, x, y, NULL);
        n = 0;
        while (n < 10) {
            LineTo(hdc, x, y -= 50);
            LineTo(hdc, x+=20, y);
            LineTo(hdc, x, y +=50);
            LineTo(hdc, x, y -=25);
            LineTo(hdc, x += 20, y);
            LineTo(hdc, x, y+=25);

            n++;
        }
        LineTo(hdc, x, y -= 50);
        LineTo(hdc, x += 20, y);
        LineTo(hdc, x, y += 50);
        LineTo(hdc, x, y -= 25);

        x = 650;
        y = 300;
        n = 0;
        Rectangle(hdc, x + 10, y-20, x + 40, y + 100);
        Rectangle(hdc, x + 110, y-20, x + 140, y + 100);
        while (n < 4) {
            Rectangle(hdc, x + 10, y + 25, x + 40, y + 100);
            Rectangle(hdc, x + 110, y + 25, x + 140, y + 100);
            Rectangle(hdc, x, y, x + 150, y + 50);
            y += 90;
            n++;
        }

        //9.2.6 - 1
        SelectObject(hdc, hDefPen);
        x = 850;
        y = 350;
        z = 50;
        n = 0;
        z = 50;
        MoveToEx(hdc, x, y - (z/2), NULL);
        z += 10;
        while(n < 10) {
            LineTo(hdc, x, y + (z/2));
            MoveToEx(hdc, x+=10, y - (z/2), NULL);
            n++;
            z += 10;
        }


        //9.2.6 - 2 
        SelectObject(hdc, hDefPen);
        x = 975;
        y = 400;
        n = 0;
        while (n < 20) {
            MoveToEx(hdc, x + n * 5, y, NULL);
            LineTo(hdc, x, y - n * 5);
            n++;
        }

        //9.2.6 - 3
        SelectObject(hdc, hDefPen);
        x = 950;
        y = 550;
        n = 0;
        while (n < 15) {
            MoveToEx(hdc, x - 100, y - 100 + n * 15, NULL);
            LineTo(hdc, x + 100, y + 100 - n * 15);
            MoveToEx(hdc, x - 100, y + 100 - n * 15, NULL);
            LineTo(hdc, x + 100, y - 100 + n * 15);
            n++;
        }

     
        //9.2.6 - 4
        SelectObject(hdc, hDefPen);
        x = 1100;
        y = 15;
        n = 0;
        while (n < 16) {
            MoveToEx(hdc, x, y + n * 20, NULL); 
            LineTo(hdc, x + n * 20, y + 300);  
            n++;
        }
        EndPaint(hWnd, &ps);  
    }
    break;
    case WM_DESTROY:
        PostQuitMessage(0);
        break;
    default:
        return DefWindowProc(hWnd, message, wParam, lParam);
    }
    return 0;
}

// Обработчик сообщений для окна "О программе".
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
