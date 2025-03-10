//////////////////////////////////////////////////////
// Copyright (C) Microsoft. 2018. All rights reserved.
//////////////////////////////////////////////////////


#include "PlayFab.h"

#include "PlayFabSettings.h"
#include "PlayFabCommon.h"

// Api's
#include "Core/PlayFabAdminAPI.h"
#include "Core/PlayFabClientAPI.h"
#include "Core/PlayFabServerAPI.h"
#include "Core/PlayFabAuthenticationAPI.h"
#include "Core/PlayFabCloudScriptAPI.h"
#include "Core/PlayFabDataAPI.h"
#include "Core/PlayFabEconomyAPI.h"
#include "Core/PlayFabEventsAPI.h"
#include "Core/PlayFabExperimentationAPI.h"
#include "Core/PlayFabInsightsAPI.h"
#include "Core/PlayFabGroupsAPI.h"
#include "Core/PlayFabLeaderboardsAPI.h"
#include "Core/PlayFabLocalizationAPI.h"
#include "Core/PlayFabMultiplayerAPI.h"
#include "Core/PlayFabProfilesAPI.h"

DEFINE_LOG_CATEGORY(LogPlayFabCpp);

class FPlayFabModule : public IPlayFabModuleInterface
{
    /** IModuleInterface implementation */
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;

    PlayFabAdminPtr GetAdminAPI() const override { return AdminAPI; };
    PlayFabClientPtr GetClientAPI() const override { return ClientAPI; };
    PlayFabServerPtr GetServerAPI() const override { return ServerAPI; };
    PlayFabAuthenticationPtr GetAuthenticationAPI() const override { return AuthenticationAPI; };
    PlayFabCloudScriptPtr GetCloudScriptAPI() const override { return CloudScriptAPI; };
    PlayFabDataPtr GetDataAPI() const override { return DataAPI; };
    PlayFabEconomyPtr GetEconomyAPI() const override { return EconomyAPI; };
    PlayFabEventsPtr GetEventsAPI() const override { return EventsAPI; };
    PlayFabExperimentationPtr GetExperimentationAPI() const override { return ExperimentationAPI; };
    PlayFabInsightsPtr GetInsightsAPI() const override { return InsightsAPI; };
    PlayFabGroupsPtr GetGroupsAPI() const override { return GroupsAPI; };
    PlayFabLeaderboardsPtr GetLeaderboardsAPI() const override { return LeaderboardsAPI; };
    PlayFabLocalizationPtr GetLocalizationAPI() const override { return LocalizationAPI; };
    PlayFabMultiplayerPtr GetMultiplayerAPI() const override { return MultiplayerAPI; };
    PlayFabProfilesPtr GetProfilesAPI() const override { return ProfilesAPI; };

    PlayFabAdminPtr AdminAPI;
    PlayFabClientPtr ClientAPI;
    PlayFabServerPtr ServerAPI;
    PlayFabAuthenticationPtr AuthenticationAPI;
    PlayFabCloudScriptPtr CloudScriptAPI;
    PlayFabDataPtr DataAPI;
    PlayFabEconomyPtr EconomyAPI;
    PlayFabEventsPtr EventsAPI;
    PlayFabExperimentationPtr ExperimentationAPI;
    PlayFabInsightsPtr InsightsAPI;
    PlayFabGroupsPtr GroupsAPI;
    PlayFabLeaderboardsPtr LeaderboardsAPI;
    PlayFabLocalizationPtr LocalizationAPI;
    PlayFabMultiplayerPtr MultiplayerAPI;
    PlayFabProfilesPtr ProfilesAPI;


};

void FPlayFabModule::StartupModule()
{
    PlayFab::PlayFabSettings::sdkVersion = IPlayFabCommonModuleInterface::Get().GetSdkVersion();
    PlayFab::PlayFabSettings::buildIdentifier = IPlayFabCommonModuleInterface::Get().GetBuildIdentifier();
    PlayFab::PlayFabSettings::versionString = IPlayFabCommonModuleInterface::Get().GetVersionString();

    // create the API
    
    AdminAPI = MakeShareable(new PlayFab::UPlayFabAdminAPI());
    ClientAPI = MakeShareable(new PlayFab::UPlayFabClientAPI());
    ServerAPI = MakeShareable(new PlayFab::UPlayFabServerAPI());
    AuthenticationAPI = MakeShareable(new PlayFab::UPlayFabAuthenticationAPI());
    CloudScriptAPI = MakeShareable(new PlayFab::UPlayFabCloudScriptAPI());
    DataAPI = MakeShareable(new PlayFab::UPlayFabDataAPI());
    EconomyAPI = MakeShareable(new PlayFab::UPlayFabEconomyAPI());
    EventsAPI = MakeShareable(new PlayFab::UPlayFabEventsAPI());
    ExperimentationAPI = MakeShareable(new PlayFab::UPlayFabExperimentationAPI());
    InsightsAPI = MakeShareable(new PlayFab::UPlayFabInsightsAPI());
    GroupsAPI = MakeShareable(new PlayFab::UPlayFabGroupsAPI());
    LeaderboardsAPI = MakeShareable(new PlayFab::UPlayFabLeaderboardsAPI());
    LocalizationAPI = MakeShareable(new PlayFab::UPlayFabLocalizationAPI());
    MultiplayerAPI = MakeShareable(new PlayFab::UPlayFabMultiplayerAPI());
    ProfilesAPI = MakeShareable(new PlayFab::UPlayFabProfilesAPI());
}

void FPlayFabModule::ShutdownModule()
{
    
}

IMPLEMENT_MODULE(FPlayFabModule, PlayFabCpp)
