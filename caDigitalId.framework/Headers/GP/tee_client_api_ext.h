/*
 * Copyright (c) 2016-2017 TRUSTONIC LIMITED
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the TRUSTONIC LIMITED nor the names of its
 *    contributors may be used to endorse or promote products derived from
 *    this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED
 * TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 * ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef   __TEE_CLIENT_API_EXT_H__
#define   __TEE_CLIENT_API_EXT_H__

#if TBASE_API_LEVEL >= 9

#pragma GCC visibility push(default)

/*
 * Registers two contexts which are platform-specific, such the virtual machine
 * and the application in an Android-based environment.
 */
TEEC_EXPORT void TEEC_TT_RegisterPlatformContext(
    void                *globalContext,
    void                *localContext);

#pragma GCC visibility pop

#endif /* TBASE_API_LEVEL >= 9 */

// HF REFACTOR: shouldn't we use an API level here?

typedef TEEC_Result (*TEEC_TT_Callback_t)(uint32_t          commandId,
                                          uint32_t          paramTypes,
                                          TEEC_Parameter    params[2]);

#pragma GCC visibility push(default)

TEEC_EXPORT TEEC_Result TEEC_TT_RegisterCallback(
    TEEC_TT_Callback_t callback);

TEEC_EXPORT void TEEC_TT_UnregisterCallback(void);

/**
 * Dynamically activates the LibTee logging mechanism
 */
typedef enum {
    TEEC_TRACE,
    TEEC_DEBUG,
    TEEC_INFO,
    TEEC_WARNING,
    TEEC_ERROR,
    TEEC_NO_LOG,
} TEEC_LogLevel;

TEEC_EXPORT void TEEC_TT_SetLogLevel(TEEC_LogLevel level);

#pragma GCC visibility pop

#endif /* __TEE_CLIENT_API_EXT_H__ */
