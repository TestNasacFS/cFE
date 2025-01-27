/*
**  GSC-18128-1, "Core Flight Executive Version 6.6"
**
**  Copyright (c) 2006-2019 United States Government as represented by
**  the Administrator of the National Aeronautics and Space Administration.
**  All Rights Reserved.
**
**  Licensed under the Apache License, Version 2.0 (the "License");
**  you may not use this file except in compliance with the License.
**  You may obtain a copy of the License at
**
**    http://www.apache.org/licenses/LICENSE-2.0
**
**  Unless required by applicable law or agreed to in writing, software
**  distributed under the License is distributed on an "AS IS" BASIS,
**  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
**  See the License for the specific language governing permissions and
**  limitations under the License.
*/

#ifndef _CFE_TBL_EXTERN_TYPEDEFS_H_
#define _CFE_TBL_EXTERN_TYPEDEFS_H_

/* This header may be generated from an EDS file, 
 * tools are available and the feature is enabled */
#ifdef CFE_EDS_ENABLED_BUILD

/* Use the EDS generated version of these types */
#include "cfe_tbl_eds_typedefs.h"

#else
/* Use the local definitions of these types */

#include "common_types.h"

/**
 * @brief Label definitions associated with CFE_TBL_BufferSelect_Enum_t
 */
enum CFE_TBL_BufferSelect
{

   /**
    * @brief Select the Inactive buffer for validate or dump
    */
   CFE_TBL_BufferSelect_INACTIVE                      = 0,

   /**
    * @brief Select the Active buffer for validate or dump
    */
   CFE_TBL_BufferSelect_ACTIVE                        = 1
};

/**
 * @brief Selects the buffer to operate on for validate or dump commands
 *
 *
 * @sa enum CFE_TBL_BufferSelect
 */
typedef uint16                                           CFE_TBL_BufferSelect_Enum_t;


#endif /* CFE_EDS_ENABLED_BUILD */

#endif /* _CFE_TBL_EXTERN_TYPEDEFS_H_ */

