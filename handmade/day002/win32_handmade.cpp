#include <windows.h>

LRESULT CALLBACK
MainWindowCallback(HWND Window,
                   UINT Message,
                  WPARAM WParam,
                  LPARAM LParam)

{
    LRESULT Result = 0;

    switch(Message)
    {
        case WM_SIZE:
        {
            OutputDebugStringA("WM_SIZE\n");
        } break;

        case WM_DESTROY:
        {
            OutputDebugStringA("WM_DESTROY\n");
        } break;

        case WM_CLOSE:
        {
            OutputDebugStringA("WM_CLOSE\n");
        } break;

        case WM_ACTIVATEAPP:
        {
            OutputDebugStringA("WM_ACTIVATEAPP\n");
        } break;

        case WM_PAINT:
        {
            PAINTSTRUCT Paint;
            HDC DeviceContext = BeginPaint(Window, &Paint);
            int x = Paint.rcPaint.left;
            int y = Paint.rcPaint.top;
            int width = Paint.rcPaint.right - Paint.rcPaint.left;
            int height = Paint.rcPaint.bottom - Paint.rcPaint.top;
            PatBlt(DeviceContext, x, y, width, height, BLACKNESS);
            EndPaint(Window, &Paint);
        } break;

        default:
        {
        //    OutputDebugStringA("default\n");
            Result = DefWindowProc(Window, Message, WParam, LParam);
        } break;
    }

    return(Result);

}


int CALLBACK
WinMain(HINSTANCE hInstance,
       HINSTANCE hPrevInstance,
       LPSTR lpCmdLine,
       int nCmdShow)

{

    WNDCLASSA WindowClass = {};
        WindowClass.style = CS_OWNDC|CS_HREDRAW|CS_VREDRAW;
        WindowClass.lpfnWndProc = MainWindowCallback;
        WindowClass.hInstance = hInstance;
        // WindowClass.hIcon = ;
        WindowClass.lpszClassName = "HandmadeHeroWindowClass";

        if(RegisterClass(&WindowClass))
        {
            HWND WindowHandle = 
                CreateWindowExA(
                    0,
                    WindowClass.lpszClassName,
                    "Handmade Hero",
                    WS_OVERLAPPEDWINDOW|WS_VISIBLE,
                    CW_USEDEFAULT,
                    CW_USEDEFAULT,
                    CW_USEDEFAULT,
                    CW_USEDEFAULT,
                    0,
                    0,
                    hInstance,
                    0
                );

            if(WindowHandle)
            {
                for(;;)
                {
                    MSG Message;
                    BOOL MessageResult = GetMessage(&Message, 0, 0, 0);
                    if(MessageResult > 0)
                    {
                        TranslateMessage(&Message);
                        DispatchMessage(&Message);
                    }
                    else
                    {    
                        break;
                    }
                }
            }
            else
            {
               
            }

        }
        else
        {
            
        }
    return(0);
}