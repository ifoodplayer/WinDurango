#include "Windows.Xbox.System.Console.h"
#include "WinDurangoWinRT.h"

namespace winrt::Windows::Xbox::System::implementation
{
    hstring Console::ConsoleId()
    {
        return L"FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF";
    }

    hstring Console::DeviceId()
    {
        return L"00000000-0000-0000-0000-000000000001";
    }

    bool Console::IsDeveloperConsole()
    {
        return false;
    }

    hstring Console::SerialNumber()
    {
        return L"000000000000";
    }
}