//***************************************************************************
//
//  Copyright (c) 1999 - 2006 Intel Corporation
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//
//***************************************************************************
//
//	CIFXSchedulerInfo.h
//
//	DESCRIPTION
//		This module defines the CIFXSchedulerInfo class.  It is used to...
//
//	NOTES
//
//***************************************************************************

#ifndef __CIFXSchedulerInfo_H__
#define __CIFXSchedulerInfo_H__

#include "IFXSchedulerInfo.h"

//-------------------------------------------------------------------
//
//  IFXSchedulerInfo Implementation
//
//-------------------------------------------------------------------

class CIFXSchedulerInfo : public IFXSchedulerInfo {

	// allow factory access to private constructor
	friend IFXRESULT IFXAPI_CALLTYPE CIFXSchedulerInfo_Factory(IFXREFIID riid, void **ppv);

private:
	// IFXCOM
	U32 m_refcount;
	U32 m_initialized;

	// IFXTaskData
	IFXCoreServices * m_pCoreServices;
	IFXUnknown      * m_pOrigin;
	IFXTaskManager  * m_pTaskManager;
	IFXTaskHandle     m_taskHandle;
	void            * m_pUserData;
	U32               m_time;

	U32               m_priority;

private:

	// Housekeeping
	CIFXSchedulerInfo();
	virtual ~CIFXSchedulerInfo();

public:

	// IFXCOM
	virtual U32 IFXAPI  AddRef(void);
	virtual U32 IFXAPI  Release(void);
	virtual IFXRESULT IFXAPI  QueryInterface(IFXREFIID riid, void **ppv);

	// IFXTaskData methods
	virtual IFXRESULT IFXAPI  Initialize(IFXCoreServices * pCoreServices);
	virtual IFXRESULT IFXAPI  GetCoreServices(IFXCoreServices ** ppCoreServices);
	virtual IFXRESULT IFXAPI  SetOrigin(IFXUnknown * pObject);
	virtual IFXRESULT IFXAPI  GetOrigin(IFXUnknown ** ppObject);
	virtual IFXRESULT IFXAPI  SetTaskManager(IFXTaskManager * pTaskManager);
	virtual IFXRESULT IFXAPI  GetTaskManager(IFXTaskManager ** ppTaskManager);
	virtual IFXRESULT IFXAPI  SetTaskHandle(IFXTaskHandle taskHandle);
	virtual IFXRESULT IFXAPI  GetTaskHandle(IFXTaskHandle * pTaskHandle);
	virtual IFXRESULT IFXAPI  SetUserData(void * pObject);
	virtual IFXRESULT IFXAPI  GetUserData(void ** ppObject);

	virtual IFXRESULT IFXAPI  SetTime(U32 time);
	virtual IFXRESULT IFXAPI  GetTime(U32 *pTime);
	// result is TRUE (1) if match, or FALSE (0) if no match
	virtual IFXRESULT IFXAPI  MatchPattern(IFXTaskData * pViewPattern, BOOL * pResult);
	virtual IFXRESULT IFXAPI  GetSortKey(U32 * pKey);

	virtual IFXRESULT IFXAPI  SetPriority(U32 priority);
	virtual IFXRESULT IFXAPI  GetPriority(U32 *pPriority);
};

#endif // __CIFXSchedulerInfo_H__

