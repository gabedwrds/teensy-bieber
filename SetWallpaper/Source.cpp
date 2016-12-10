#include <windows.h>

void main() {
    SystemParametersInfo(SPI_SETDESKWALLPAPER, 0,  L"%TEMP%\\bieber.jpg", SPIF_UPDATEINIFILE);
}
