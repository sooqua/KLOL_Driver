#pragma once

/*
Offset dumper by @Ph4nton
Mon Apr 20 04:28:21 2020
*/

#define BASEADDRESS GetModuleHandle(NULL)
#define oLocalPlayer 0x3504A14	//A1 ? ? ? ? 85 C0 74 07 05 ? ? ? ? EB 02 33 C0 56
#define oObjManager 0x1C5C8B0	//8B 0D ? ? ? ? E8 ? ? ? ? FF 77
#define oGetFirstObject 0x2BC400	//8B 51 28 85 D2 74 20
#define oGetNextObject 0x2BD5B0	//E8 ? ? ? ? 8B F0 85 F6 75 E4
#define oIsAlive 0x1B8810	//56 8B F1 8B 06 8B 80 ? ? ? ? FF D0 84 C0 74 19
#define oIsInhib 0x1CC250	//E8 ? ? ? ? 83 C4 04 84 C0 74 38
#define oIsNexus 0x0	//E8 ? ? ? ? 83 C4 04 84 C0 75 1E 57
#define oIsTurret 0x1CC5C0	//E8 ? ? ? ? 83 C4 04 84 C0 74 09 5F
#define oIsMinion 0x0	//E8 ? ? ? ? 83 C4 04 84 C0 74 4A 8B 45
#define oIsDragon 0x0	//83 EC 10 A1 ? ? ? ? 33 C4 89 44 24 0C 56 E8
#define oIsBaron 0x0	//56 E8 ? ? ? ? 68 ? ? ? ? 8B 30
#define oIsHero 0x0	//E8 ? ? ? ? 83 C4 04 84 C0 75 22 8B 8D
#define oIsMissile 0x0	//E8 ? ? ? ? 83 C4 04 84 C0 74 1C FF
#define oIsTargetable 0x1EFDB0	//56 8B F1 E8 ? ? ? ? 84 C0 74 2E
#define oIssueOrder 0x18B0E0	//E8 ? ? ? ? 85 FF 5F
#define oGetSpellState 0x507BB0	//E8 ? ? ? ? 8B F8 8B CB 89
#define oGetBasicAttack 0x177590	//53 8B D9 B8 ? ? ? ? 8B 93
#define oGetAttackDelay 0x2B6D50		//8B 44 24 04 51 F3
#define oGetAttackCastDelay 0x2B6C50	//83 EC 0C 53 8B 5C 24 14 8B CB 56 57 8B 03 FF 90
#define oDrawCircle 0x50B8F0	//E8 ? ? ? ? 83 C4 1C 8B 7C 24 28
#define oWorldToScreen 0x966A90	//83 EC 10 56 E8 ? ? ? ? 8B 08
#define oGameTime 0x34F7704	//F3 0F 11 05 ? ? ? ? 8B 49
#define oGameInfo 0x34F8654	//A1 ? ? ? ? 83 78 08 02 0F 94 C0
#define oGameVersion 0x57C140	//8B 44 24 04 BA ? ? ? ? 2B D0
#define oHudInstance 0x1C5C8EC		//8B 0D ? ? ? ? 6A 00 8B 49 34 E8 ? ? ? ? B0
#define oRenderer 0x3526534	//8B 15 ? ? ? ? 83 EC 08 F3
#define oD3DRenderer 0x3529200	//A1 ? ? ? ? 89 54 24 18
#define oZoomClass 0x34F6EA4	//A3 ? ? ? ? 83 FA 10 72 32
#define oNetClient 0x35062AC	//8B 0D ? ? ? ? 85 C9 74 07 8B 01 6A 01 FF 50 08 8B
#define oUnderMouseObject 0x1C072C0	//8B 0D ? ? ? ? 89 0D ? ? ? ? 3B 44 24 30
#define oViewMatrix 0x6C	//8D 4A ? 51 81 C2 ? ? ? ? 52
#define oProjection 0xAC	//8D 4A ? 51 81 C2 ? ? ? ? 52

#define oObjName 0x6C
#define oObjPosition 0x1D8
#define oObjTeam 0x4C
#define oObjVisible 0x450
#define oObjIndex 0x20
#define oObjNetworkID 0xCC