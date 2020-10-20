// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"
#include "KeInterface.h"

KeInterface Driver(R"(\\.\cbl)");

extern "C" {
    __declspec(dllexport) DWORD GetTargetPid()
    {
        return Driver.GetTargetPid();
    }

    __declspec(dllexport) ULONG ReadVirtualMemory(ULONG ProcessId, ULONG ReadAddress, SIZE_T Size)
    {
        return Driver.ReadVirtualMemory(ProcessId, ReadAddress, Size);
    }

    __declspec(dllexport) ULONG WriteVirtualMemory(ULONG ProcessId, ULONG WriteAddress, ULONG WriteValue, SIZE_T WriteSize)
    {
        return Driver.WriteVirtualMemory(ProcessId, WriteAddress, WriteValue, WriteSize);
    }

    __declspec(dllexport) DWORD GetClientModule()
    {
        return Driver.GetClientModule();
    }
};
