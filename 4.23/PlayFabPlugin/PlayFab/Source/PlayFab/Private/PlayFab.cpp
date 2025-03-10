//////////////////////////////////////////////////////
// Copyright (C) Microsoft. 2018. All rights reserved.
//////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////////
// Automatically generated cpp file for the UE4 PlayFab plugin.
// This cpp file is the main cpp file for the plugin. We set up globals here.
//////////////////////////////////////////////////////////////////////////////////////////////

#include "CoreMinimal.h"
#include "PlayFabPrivate.h"
#include "PlayFabJsonValue.h"
#include "PlayFabJsonObject.h"


#include "PlayFabAdminAPI.h" 
#include "PlayFabClientAPI.h" 
#include "PlayFabServerAPI.h" 
#include "PlayFabAuthenticationAPI.h" 
#include "PlayFabCloudScriptAPI.h" 
#include "PlayFabDataAPI.h" 
#include "PlayFabEconomyAPI.h" 
#include "PlayFabEventsAPI.h" 
#include "PlayFabExperimentationAPI.h" 
#include "PlayFabInsightsAPI.h" 
#include "PlayFabGroupsAPI.h" 
#include "PlayFabLeaderboardsAPI.h" 
#include "PlayFabLocalizationAPI.h" 
#include "PlayFabMultiplayerAPI.h" 
#include "PlayFabProfilesAPI.h" 

class FPlayFab : public IPlayFab
{
    /** IModuleInterface implementation */
    virtual void StartupModule() override
    {
        //Force classes to be compiled on shipping build
        UPlayFabJsonObject::StaticClass();
        UPlayFabJsonValue::StaticClass();

        UPlayFabAdminAPI::StaticClass();
        UPlayFabClientAPI::StaticClass();
        UPlayFabServerAPI::StaticClass();
        UPlayFabAuthenticationAPI::StaticClass();
        UPlayFabCloudScriptAPI::StaticClass();
        UPlayFabDataAPI::StaticClass();
        UPlayFabEconomyAPI::StaticClass();
        UPlayFabEventsAPI::StaticClass();
        UPlayFabExperimentationAPI::StaticClass();
        UPlayFabInsightsAPI::StaticClass();
        UPlayFabGroupsAPI::StaticClass();
        UPlayFabLeaderboardsAPI::StaticClass();
        UPlayFabLocalizationAPI::StaticClass();
        UPlayFabMultiplayerAPI::StaticClass();
        UPlayFabProfilesAPI::StaticClass();
    }

    virtual void ShutdownModule() override
    {

    }

};

IMPLEMENT_MODULE(FPlayFab, PlayFab)

DEFINE_LOG_CATEGORY(LogPlayFab);
DEFINE_LOG_CATEGORY(LogPlayFabTests);
