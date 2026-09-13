#pragma once
#include "Windows.Xbox.System.Console.g.h"

namespace winrt::Windows::Xbox::System::implementation
{
    struct Console
    {
        Console() = default;

        static hstring ConsoleId();
        static hstring DeviceId();
        static bool IsDeveloperConsole();
        static hstring SerialNumber();
    };
}

namespace winrt::Windows::Xbox::System::factory_implementation
{
    struct Console : ConsoleT<Console, implementation::Console>
    {
    };
}