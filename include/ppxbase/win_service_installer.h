/****************************** Module Header ******************************\
* Module Name:  ServiceInstaller.h
* Project:      CppWindowsService
* Copyright (c) Microsoft Corporation.
* 
* The file declares functions that install and uninstall the service.
* 
* This source is subject to the Microsoft Public License.
* See http://www.microsoft.com/en-us/openness/resources/licenses.aspx#MPL.
* All other rights reserved.
* 
* THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND, 
* EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED 
* WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A PARTICULAR PURPOSE.
\***************************************************************************/
#ifndef PPX_BASE_WIN_SERVICE_INSTALLER_H_
#define PPX_BASE_WIN_SERVICE_INSTALLER_H_
#pragma once

#include "ppxbase_export.h"

namespace ppx {
    namespace base {
        //
        //   FUNCTION: InstallService
        //
        //   PURPOSE: Install the current application as a service to the local 
        //   service control manager database.
        //
        //   PARAMETERS:
        //   * pszServiceName - the name of the service to be installed
        //   * pszDisplayName - the display name of the service
        //   * dwStartType - the service start option. This parameter can be one of 
        //     the following values: SERVICE_AUTO_START, SERVICE_BOOT_START, 
        //     SERVICE_DEMAND_START, SERVICE_DISABLED, SERVICE_SYSTEM_START.
        //   * pszDependencies - a pointer to a double null-terminated array of null-
        //     separated names of services or load ordering groups that the system 
        //     must start before this service.
        //   * pszAccount - the name of the account under which the service runs.
        //   * pszPassword - the password to the account name.
        //
        //   NOTE: If the function fails to install the service, it prints the error 
        //   in the standard output stream for users to diagnose the problem.
        //
        PPXBASE_API void InstallService(PWSTR pszServiceName,
            PWSTR pszDisplayName,
            PWSTR pszDecription,
            DWORD dwStartType,
            PWSTR pszDependencies,
            PWSTR pszAccount,
            PWSTR pszPassword);


        //
        //   FUNCTION: UninstallService
        //
        //   PURPOSE: Stop and remove the service from the local service control 
        //   manager database.
        //
        //   PARAMETERS: 
        //   * pszServiceName - the name of the service to be removed.
        //
        //   NOTE: If the function fails to uninstall the service, it prints the 
        //   error in the standard output stream for users to diagnose the problem.
        //
        PPXBASE_API void UninstallService(PWSTR pszServiceName);


        PPXBASE_API void StartService(PWSTR pszServiceName);

        PPXBASE_API void StopService(PWSTR pszServiceName);
    }
}

#endif // !PPX_BASE_WIN_SERVICE_INSTALLER_H_