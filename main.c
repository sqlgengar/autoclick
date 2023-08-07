#include <stdio.h>
#include <windows.h>

int main()
{
    // Obtiene las coordenadas actuales del cursor
    POINT cursorPosition;
    GetCursorPos(&cursorPosition);

    // Realiza un clic del botón izquierdo del mouse en las coordenadas actuales
    mouse_event(MOUSEEVENTF_RIGHTDOWN, cursorPosition.x, cursorPosition.y, 0, 0);
    mouse_event(MOUSEEVENTF_RIGHTUP, cursorPosition.x, cursorPosition.y, 0, 0);

    return 0;
}