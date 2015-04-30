//-------------------------------------------------------------------------------------------------
// <copyright file="StubSection.cpp" company="Outercurve Foundation">
//   Copyright (c) 2004, Outercurve Foundation.
//   This software is released under Microsoft Reciprocal License (MS-RL).
//   The license and further copyright text can be found in the file
//   LICENSE.TXT at the root directory of the distribution.
// </copyright>
//-------------------------------------------------------------------------------------------------

#include "precomp.h"

#pragma section(".wixburn",read)

// If these defaults ever change, be sure to update constants in burn\engine\section.cpp as well.
__declspec(allocate(".wixburn")) static DWORD dwMagic = 0x00f14300;
__declspec(allocate(".wixburn")) static DWORD dwVersion = 0x00000002;

__declspec(allocate(".wixburn")) static GUID guidBundleId = { };

__declspec(allocate(".wixburn")) static DWORD dwStubSize = 0;
__declspec(allocate(".wixburn")) static DWORD dwOriginalChecksum = 0;
__declspec(allocate(".wixburn")) static DWORD dwOriginalSignatureOffset = 0;
__declspec(allocate(".wixburn")) static DWORD dwOriginalSignatureSize = 0;

__declspec(allocate(".wixburn")) static DWORD dwContainerFormat = 1;
__declspec(allocate(".wixburn")) static DWORD dwContainerCount = 0;
__declspec(allocate(".wixburn")) static DWORD qwBootstrapperApplicationContainerSize = 0;
__declspec(allocate(".wixburn")) static DWORD qwAttachedContainerSize = 0;

