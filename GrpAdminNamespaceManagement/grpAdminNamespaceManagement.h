/*
 * Copyright (c) 2011, Intel Corporation.
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

#ifndef _GRPNAMESPACEMANAGEMENT_H_
#define _GRPNAMESPACEMANAGEMENT_H_

#include "../group.h"
#include "../Cmds/identify.h"

namespace GrpAdminNamespaceManagement {


/**
* This class implements admin cmd set async event request test cases.
*/
class GrpAdminNamespaceManagement : public Group
{
public:
    GrpAdminNamespaceManagement(size_t grpNum);
    virtual ~GrpAdminNamespaceManagement();
};

SharedIdentifyPtr CreateIdNamspcListActiveCmd(void);
SharedIdentifyPtr CreateIdNamspcListSubsystemCmd(void);
SharedIdentifyPtr CreateIdCtlrListAttachedCmd(void);
SharedIdentifyPtr CreateIdCtlrListSubsystemCmd(void);

}   // namespace

#endif
