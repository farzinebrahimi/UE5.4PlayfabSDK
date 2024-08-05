//////////////////////////////////////////////////////
// Copyright (C) Microsoft. 2018. All rights reserved.
//////////////////////////////////////////////////////


// This is automatically generated by PlayFab SDKGenerator. DO NOT modify this manually!
#include "Core/PlayFabLeaderboardsAPI.h"
#include "Core/PlayFabSettings.h"
#include "Core/PlayFabResultHandler.h"
#include "PlayFab.h"

using namespace PlayFab;
using namespace PlayFab::LeaderboardsModels;

UPlayFabLeaderboardsAPI::UPlayFabLeaderboardsAPI() {}

UPlayFabLeaderboardsAPI::~UPlayFabLeaderboardsAPI() {}

int UPlayFabLeaderboardsAPI::GetPendingCalls() const
{
    return PlayFabRequestHandler::GetPendingCalls();
}

FString UPlayFabLeaderboardsAPI::GetBuildIdentifier() const
{
    return PlayFabSettings::buildIdentifier;
}


bool UPlayFabLeaderboardsAPI::CreateLeaderboardDefinition(
    LeaderboardsModels::FCreateLeaderboardDefinitionRequest& request,
    const FCreateLeaderboardDefinitionDelegate& SuccessDelegate,
    const FPlayFabErrorDelegate& ErrorDelegate)
{
    FString entityToken = request.AuthenticationContext.IsValid() ? request.AuthenticationContext->GetEntityToken() : PlayFabSettings::GetEntityToken();
    if (entityToken.Len() == 0) {
        UE_LOG(LogPlayFabCpp, Error, TEXT("You must call GetEntityToken API Method before calling this function."));
    }


    auto HttpRequest = PlayFabRequestHandler::SendRequest(nullptr, TEXT("/Leaderboard/CreateLeaderboardDefinition"), request.toJSONString(), TEXT("X-EntityToken"), entityToken);
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &UPlayFabLeaderboardsAPI::OnCreateLeaderboardDefinitionResult, SuccessDelegate, ErrorDelegate);
    return HttpRequest->ProcessRequest();
}

void UPlayFabLeaderboardsAPI::OnCreateLeaderboardDefinitionResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FCreateLeaderboardDefinitionDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate)
{
    LeaderboardsModels::FEmptyResponse outResult;
    FPlayFabCppError errorResult;
    if (PlayFabRequestHandler::DecodeRequest(HttpRequest, HttpResponse, bSucceeded, outResult, errorResult))
    {
        SuccessDelegate.ExecuteIfBound(outResult);
    }
    else
    {
        ErrorDelegate.ExecuteIfBound(errorResult);
    }
}

bool UPlayFabLeaderboardsAPI::CreateStatisticDefinition(
    LeaderboardsModels::FCreateStatisticDefinitionRequest& request,
    const FCreateStatisticDefinitionDelegate& SuccessDelegate,
    const FPlayFabErrorDelegate& ErrorDelegate)
{
    FString entityToken = request.AuthenticationContext.IsValid() ? request.AuthenticationContext->GetEntityToken() : PlayFabSettings::GetEntityToken();
    if (entityToken.Len() == 0) {
        UE_LOG(LogPlayFabCpp, Error, TEXT("You must call GetEntityToken API Method before calling this function."));
    }


    auto HttpRequest = PlayFabRequestHandler::SendRequest(nullptr, TEXT("/Statistic/CreateStatisticDefinition"), request.toJSONString(), TEXT("X-EntityToken"), entityToken);
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &UPlayFabLeaderboardsAPI::OnCreateStatisticDefinitionResult, SuccessDelegate, ErrorDelegate);
    return HttpRequest->ProcessRequest();
}

void UPlayFabLeaderboardsAPI::OnCreateStatisticDefinitionResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FCreateStatisticDefinitionDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate)
{
    LeaderboardsModels::FEmptyResponse outResult;
    FPlayFabCppError errorResult;
    if (PlayFabRequestHandler::DecodeRequest(HttpRequest, HttpResponse, bSucceeded, outResult, errorResult))
    {
        SuccessDelegate.ExecuteIfBound(outResult);
    }
    else
    {
        ErrorDelegate.ExecuteIfBound(errorResult);
    }
}

bool UPlayFabLeaderboardsAPI::DeleteLeaderboardDefinition(
    LeaderboardsModels::FDeleteLeaderboardDefinitionRequest& request,
    const FDeleteLeaderboardDefinitionDelegate& SuccessDelegate,
    const FPlayFabErrorDelegate& ErrorDelegate)
{
    FString entityToken = request.AuthenticationContext.IsValid() ? request.AuthenticationContext->GetEntityToken() : PlayFabSettings::GetEntityToken();
    if (entityToken.Len() == 0) {
        UE_LOG(LogPlayFabCpp, Error, TEXT("You must call GetEntityToken API Method before calling this function."));
    }


    auto HttpRequest = PlayFabRequestHandler::SendRequest(nullptr, TEXT("/Leaderboard/DeleteLeaderboardDefinition"), request.toJSONString(), TEXT("X-EntityToken"), entityToken);
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &UPlayFabLeaderboardsAPI::OnDeleteLeaderboardDefinitionResult, SuccessDelegate, ErrorDelegate);
    return HttpRequest->ProcessRequest();
}

void UPlayFabLeaderboardsAPI::OnDeleteLeaderboardDefinitionResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDeleteLeaderboardDefinitionDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate)
{
    LeaderboardsModels::FEmptyResponse outResult;
    FPlayFabCppError errorResult;
    if (PlayFabRequestHandler::DecodeRequest(HttpRequest, HttpResponse, bSucceeded, outResult, errorResult))
    {
        SuccessDelegate.ExecuteIfBound(outResult);
    }
    else
    {
        ErrorDelegate.ExecuteIfBound(errorResult);
    }
}

bool UPlayFabLeaderboardsAPI::DeleteLeaderboardEntries(
    LeaderboardsModels::FDeleteLeaderboardEntriesRequest& request,
    const FDeleteLeaderboardEntriesDelegate& SuccessDelegate,
    const FPlayFabErrorDelegate& ErrorDelegate)
{
    FString entityToken = request.AuthenticationContext.IsValid() ? request.AuthenticationContext->GetEntityToken() : PlayFabSettings::GetEntityToken();
    if (entityToken.Len() == 0) {
        UE_LOG(LogPlayFabCpp, Error, TEXT("You must call GetEntityToken API Method before calling this function."));
    }


    auto HttpRequest = PlayFabRequestHandler::SendRequest(nullptr, TEXT("/Leaderboard/DeleteLeaderboardEntries"), request.toJSONString(), TEXT("X-EntityToken"), entityToken);
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &UPlayFabLeaderboardsAPI::OnDeleteLeaderboardEntriesResult, SuccessDelegate, ErrorDelegate);
    return HttpRequest->ProcessRequest();
}

void UPlayFabLeaderboardsAPI::OnDeleteLeaderboardEntriesResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDeleteLeaderboardEntriesDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate)
{
    LeaderboardsModels::FEmptyResponse outResult;
    FPlayFabCppError errorResult;
    if (PlayFabRequestHandler::DecodeRequest(HttpRequest, HttpResponse, bSucceeded, outResult, errorResult))
    {
        SuccessDelegate.ExecuteIfBound(outResult);
    }
    else
    {
        ErrorDelegate.ExecuteIfBound(errorResult);
    }
}

bool UPlayFabLeaderboardsAPI::DeleteStatisticDefinition(
    LeaderboardsModels::FDeleteStatisticDefinitionRequest& request,
    const FDeleteStatisticDefinitionDelegate& SuccessDelegate,
    const FPlayFabErrorDelegate& ErrorDelegate)
{
    FString entityToken = request.AuthenticationContext.IsValid() ? request.AuthenticationContext->GetEntityToken() : PlayFabSettings::GetEntityToken();
    if (entityToken.Len() == 0) {
        UE_LOG(LogPlayFabCpp, Error, TEXT("You must call GetEntityToken API Method before calling this function."));
    }


    auto HttpRequest = PlayFabRequestHandler::SendRequest(nullptr, TEXT("/Statistic/DeleteStatisticDefinition"), request.toJSONString(), TEXT("X-EntityToken"), entityToken);
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &UPlayFabLeaderboardsAPI::OnDeleteStatisticDefinitionResult, SuccessDelegate, ErrorDelegate);
    return HttpRequest->ProcessRequest();
}

void UPlayFabLeaderboardsAPI::OnDeleteStatisticDefinitionResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDeleteStatisticDefinitionDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate)
{
    LeaderboardsModels::FEmptyResponse outResult;
    FPlayFabCppError errorResult;
    if (PlayFabRequestHandler::DecodeRequest(HttpRequest, HttpResponse, bSucceeded, outResult, errorResult))
    {
        SuccessDelegate.ExecuteIfBound(outResult);
    }
    else
    {
        ErrorDelegate.ExecuteIfBound(errorResult);
    }
}

bool UPlayFabLeaderboardsAPI::DeleteStatistics(
    LeaderboardsModels::FDeleteStatisticsRequest& request,
    const FDeleteStatisticsDelegate& SuccessDelegate,
    const FPlayFabErrorDelegate& ErrorDelegate)
{
    FString entityToken = request.AuthenticationContext.IsValid() ? request.AuthenticationContext->GetEntityToken() : PlayFabSettings::GetEntityToken();
    if (entityToken.Len() == 0) {
        UE_LOG(LogPlayFabCpp, Error, TEXT("You must call GetEntityToken API Method before calling this function."));
    }


    auto HttpRequest = PlayFabRequestHandler::SendRequest(nullptr, TEXT("/Statistic/DeleteStatistics"), request.toJSONString(), TEXT("X-EntityToken"), entityToken);
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &UPlayFabLeaderboardsAPI::OnDeleteStatisticsResult, SuccessDelegate, ErrorDelegate);
    return HttpRequest->ProcessRequest();
}

void UPlayFabLeaderboardsAPI::OnDeleteStatisticsResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDeleteStatisticsDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate)
{
    LeaderboardsModels::FDeleteStatisticsResponse outResult;
    FPlayFabCppError errorResult;
    if (PlayFabRequestHandler::DecodeRequest(HttpRequest, HttpResponse, bSucceeded, outResult, errorResult))
    {
        SuccessDelegate.ExecuteIfBound(outResult);
    }
    else
    {
        ErrorDelegate.ExecuteIfBound(errorResult);
    }
}

bool UPlayFabLeaderboardsAPI::GetFriendLeaderboardForEntity(
    LeaderboardsModels::FGetFriendLeaderboardForEntityRequest& request,
    const FGetFriendLeaderboardForEntityDelegate& SuccessDelegate,
    const FPlayFabErrorDelegate& ErrorDelegate)
{
    FString entityToken = request.AuthenticationContext.IsValid() ? request.AuthenticationContext->GetEntityToken() : PlayFabSettings::GetEntityToken();
    if (entityToken.Len() == 0) {
        UE_LOG(LogPlayFabCpp, Error, TEXT("You must call GetEntityToken API Method before calling this function."));
    }


    auto HttpRequest = PlayFabRequestHandler::SendRequest(nullptr, TEXT("/Leaderboard/GetFriendLeaderboardForEntity"), request.toJSONString(), TEXT("X-EntityToken"), entityToken);
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &UPlayFabLeaderboardsAPI::OnGetFriendLeaderboardForEntityResult, SuccessDelegate, ErrorDelegate);
    return HttpRequest->ProcessRequest();
}

void UPlayFabLeaderboardsAPI::OnGetFriendLeaderboardForEntityResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FGetFriendLeaderboardForEntityDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate)
{
    LeaderboardsModels::FGetEntityLeaderboardResponse outResult;
    FPlayFabCppError errorResult;
    if (PlayFabRequestHandler::DecodeRequest(HttpRequest, HttpResponse, bSucceeded, outResult, errorResult))
    {
        SuccessDelegate.ExecuteIfBound(outResult);
    }
    else
    {
        ErrorDelegate.ExecuteIfBound(errorResult);
    }
}

bool UPlayFabLeaderboardsAPI::GetLeaderboard(
    LeaderboardsModels::FGetEntityLeaderboardRequest& request,
    const FGetLeaderboardDelegate& SuccessDelegate,
    const FPlayFabErrorDelegate& ErrorDelegate)
{
    FString entityToken = request.AuthenticationContext.IsValid() ? request.AuthenticationContext->GetEntityToken() : PlayFabSettings::GetEntityToken();
    if (entityToken.Len() == 0) {
        UE_LOG(LogPlayFabCpp, Error, TEXT("You must call GetEntityToken API Method before calling this function."));
    }


    auto HttpRequest = PlayFabRequestHandler::SendRequest(nullptr, TEXT("/Leaderboard/GetLeaderboard"), request.toJSONString(), TEXT("X-EntityToken"), entityToken);
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &UPlayFabLeaderboardsAPI::OnGetLeaderboardResult, SuccessDelegate, ErrorDelegate);
    return HttpRequest->ProcessRequest();
}

void UPlayFabLeaderboardsAPI::OnGetLeaderboardResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FGetLeaderboardDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate)
{
    LeaderboardsModels::FGetEntityLeaderboardResponse outResult;
    FPlayFabCppError errorResult;
    if (PlayFabRequestHandler::DecodeRequest(HttpRequest, HttpResponse, bSucceeded, outResult, errorResult))
    {
        SuccessDelegate.ExecuteIfBound(outResult);
    }
    else
    {
        ErrorDelegate.ExecuteIfBound(errorResult);
    }
}

bool UPlayFabLeaderboardsAPI::GetLeaderboardAroundEntity(
    LeaderboardsModels::FGetLeaderboardAroundEntityRequest& request,
    const FGetLeaderboardAroundEntityDelegate& SuccessDelegate,
    const FPlayFabErrorDelegate& ErrorDelegate)
{
    FString entityToken = request.AuthenticationContext.IsValid() ? request.AuthenticationContext->GetEntityToken() : PlayFabSettings::GetEntityToken();
    if (entityToken.Len() == 0) {
        UE_LOG(LogPlayFabCpp, Error, TEXT("You must call GetEntityToken API Method before calling this function."));
    }


    auto HttpRequest = PlayFabRequestHandler::SendRequest(nullptr, TEXT("/Leaderboard/GetLeaderboardAroundEntity"), request.toJSONString(), TEXT("X-EntityToken"), entityToken);
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &UPlayFabLeaderboardsAPI::OnGetLeaderboardAroundEntityResult, SuccessDelegate, ErrorDelegate);
    return HttpRequest->ProcessRequest();
}

void UPlayFabLeaderboardsAPI::OnGetLeaderboardAroundEntityResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FGetLeaderboardAroundEntityDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate)
{
    LeaderboardsModels::FGetEntityLeaderboardResponse outResult;
    FPlayFabCppError errorResult;
    if (PlayFabRequestHandler::DecodeRequest(HttpRequest, HttpResponse, bSucceeded, outResult, errorResult))
    {
        SuccessDelegate.ExecuteIfBound(outResult);
    }
    else
    {
        ErrorDelegate.ExecuteIfBound(errorResult);
    }
}

bool UPlayFabLeaderboardsAPI::GetLeaderboardDefinition(
    LeaderboardsModels::FGetLeaderboardDefinitionRequest& request,
    const FGetLeaderboardDefinitionDelegate& SuccessDelegate,
    const FPlayFabErrorDelegate& ErrorDelegate)
{
    FString entityToken = request.AuthenticationContext.IsValid() ? request.AuthenticationContext->GetEntityToken() : PlayFabSettings::GetEntityToken();
    if (entityToken.Len() == 0) {
        UE_LOG(LogPlayFabCpp, Error, TEXT("You must call GetEntityToken API Method before calling this function."));
    }


    auto HttpRequest = PlayFabRequestHandler::SendRequest(nullptr, TEXT("/Leaderboard/GetLeaderboardDefinition"), request.toJSONString(), TEXT("X-EntityToken"), entityToken);
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &UPlayFabLeaderboardsAPI::OnGetLeaderboardDefinitionResult, SuccessDelegate, ErrorDelegate);
    return HttpRequest->ProcessRequest();
}

void UPlayFabLeaderboardsAPI::OnGetLeaderboardDefinitionResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FGetLeaderboardDefinitionDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate)
{
    LeaderboardsModels::FGetLeaderboardDefinitionResponse outResult;
    FPlayFabCppError errorResult;
    if (PlayFabRequestHandler::DecodeRequest(HttpRequest, HttpResponse, bSucceeded, outResult, errorResult))
    {
        SuccessDelegate.ExecuteIfBound(outResult);
    }
    else
    {
        ErrorDelegate.ExecuteIfBound(errorResult);
    }
}

bool UPlayFabLeaderboardsAPI::GetLeaderboardForEntities(
    LeaderboardsModels::FGetLeaderboardForEntitiesRequest& request,
    const FGetLeaderboardForEntitiesDelegate& SuccessDelegate,
    const FPlayFabErrorDelegate& ErrorDelegate)
{
    FString entityToken = request.AuthenticationContext.IsValid() ? request.AuthenticationContext->GetEntityToken() : PlayFabSettings::GetEntityToken();
    if (entityToken.Len() == 0) {
        UE_LOG(LogPlayFabCpp, Error, TEXT("You must call GetEntityToken API Method before calling this function."));
    }


    auto HttpRequest = PlayFabRequestHandler::SendRequest(nullptr, TEXT("/Leaderboard/GetLeaderboardForEntities"), request.toJSONString(), TEXT("X-EntityToken"), entityToken);
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &UPlayFabLeaderboardsAPI::OnGetLeaderboardForEntitiesResult, SuccessDelegate, ErrorDelegate);
    return HttpRequest->ProcessRequest();
}

void UPlayFabLeaderboardsAPI::OnGetLeaderboardForEntitiesResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FGetLeaderboardForEntitiesDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate)
{
    LeaderboardsModels::FGetEntityLeaderboardResponse outResult;
    FPlayFabCppError errorResult;
    if (PlayFabRequestHandler::DecodeRequest(HttpRequest, HttpResponse, bSucceeded, outResult, errorResult))
    {
        SuccessDelegate.ExecuteIfBound(outResult);
    }
    else
    {
        ErrorDelegate.ExecuteIfBound(errorResult);
    }
}

bool UPlayFabLeaderboardsAPI::GetStatisticDefinition(
    LeaderboardsModels::FGetStatisticDefinitionRequest& request,
    const FGetStatisticDefinitionDelegate& SuccessDelegate,
    const FPlayFabErrorDelegate& ErrorDelegate)
{
    FString entityToken = request.AuthenticationContext.IsValid() ? request.AuthenticationContext->GetEntityToken() : PlayFabSettings::GetEntityToken();
    if (entityToken.Len() == 0) {
        UE_LOG(LogPlayFabCpp, Error, TEXT("You must call GetEntityToken API Method before calling this function."));
    }


    auto HttpRequest = PlayFabRequestHandler::SendRequest(nullptr, TEXT("/Statistic/GetStatisticDefinition"), request.toJSONString(), TEXT("X-EntityToken"), entityToken);
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &UPlayFabLeaderboardsAPI::OnGetStatisticDefinitionResult, SuccessDelegate, ErrorDelegate);
    return HttpRequest->ProcessRequest();
}

void UPlayFabLeaderboardsAPI::OnGetStatisticDefinitionResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FGetStatisticDefinitionDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate)
{
    LeaderboardsModels::FGetStatisticDefinitionResponse outResult;
    FPlayFabCppError errorResult;
    if (PlayFabRequestHandler::DecodeRequest(HttpRequest, HttpResponse, bSucceeded, outResult, errorResult))
    {
        SuccessDelegate.ExecuteIfBound(outResult);
    }
    else
    {
        ErrorDelegate.ExecuteIfBound(errorResult);
    }
}

bool UPlayFabLeaderboardsAPI::GetStatisticDefinitions(
    LeaderboardsModels::FGetStatisticDefinitionsRequest& request,
    const FGetStatisticDefinitionsDelegate& SuccessDelegate,
    const FPlayFabErrorDelegate& ErrorDelegate)
{
    FString entityToken = request.AuthenticationContext.IsValid() ? request.AuthenticationContext->GetEntityToken() : PlayFabSettings::GetEntityToken();
    if (entityToken.Len() == 0) {
        UE_LOG(LogPlayFabCpp, Error, TEXT("You must call GetEntityToken API Method before calling this function."));
    }


    auto HttpRequest = PlayFabRequestHandler::SendRequest(nullptr, TEXT("/Statistic/GetStatisticDefinitions"), request.toJSONString(), TEXT("X-EntityToken"), entityToken);
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &UPlayFabLeaderboardsAPI::OnGetStatisticDefinitionsResult, SuccessDelegate, ErrorDelegate);
    return HttpRequest->ProcessRequest();
}

void UPlayFabLeaderboardsAPI::OnGetStatisticDefinitionsResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FGetStatisticDefinitionsDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate)
{
    LeaderboardsModels::FGetStatisticDefinitionsResponse outResult;
    FPlayFabCppError errorResult;
    if (PlayFabRequestHandler::DecodeRequest(HttpRequest, HttpResponse, bSucceeded, outResult, errorResult))
    {
        SuccessDelegate.ExecuteIfBound(outResult);
    }
    else
    {
        ErrorDelegate.ExecuteIfBound(errorResult);
    }
}

bool UPlayFabLeaderboardsAPI::GetStatistics(
    LeaderboardsModels::FGetStatisticsRequest& request,
    const FGetStatisticsDelegate& SuccessDelegate,
    const FPlayFabErrorDelegate& ErrorDelegate)
{
    FString entityToken = request.AuthenticationContext.IsValid() ? request.AuthenticationContext->GetEntityToken() : PlayFabSettings::GetEntityToken();
    if (entityToken.Len() == 0) {
        UE_LOG(LogPlayFabCpp, Error, TEXT("You must call GetEntityToken API Method before calling this function."));
    }


    auto HttpRequest = PlayFabRequestHandler::SendRequest(nullptr, TEXT("/Statistic/GetStatistics"), request.toJSONString(), TEXT("X-EntityToken"), entityToken);
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &UPlayFabLeaderboardsAPI::OnGetStatisticsResult, SuccessDelegate, ErrorDelegate);
    return HttpRequest->ProcessRequest();
}

void UPlayFabLeaderboardsAPI::OnGetStatisticsResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FGetStatisticsDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate)
{
    LeaderboardsModels::FGetStatisticsResponse outResult;
    FPlayFabCppError errorResult;
    if (PlayFabRequestHandler::DecodeRequest(HttpRequest, HttpResponse, bSucceeded, outResult, errorResult))
    {
        SuccessDelegate.ExecuteIfBound(outResult);
    }
    else
    {
        ErrorDelegate.ExecuteIfBound(errorResult);
    }
}

bool UPlayFabLeaderboardsAPI::GetStatisticsForEntities(
    LeaderboardsModels::FGetStatisticsForEntitiesRequest& request,
    const FGetStatisticsForEntitiesDelegate& SuccessDelegate,
    const FPlayFabErrorDelegate& ErrorDelegate)
{
    FString entityToken = request.AuthenticationContext.IsValid() ? request.AuthenticationContext->GetEntityToken() : PlayFabSettings::GetEntityToken();
    if (entityToken.Len() == 0) {
        UE_LOG(LogPlayFabCpp, Error, TEXT("You must call GetEntityToken API Method before calling this function."));
    }


    auto HttpRequest = PlayFabRequestHandler::SendRequest(nullptr, TEXT("/Statistic/GetStatisticsForEntities"), request.toJSONString(), TEXT("X-EntityToken"), entityToken);
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &UPlayFabLeaderboardsAPI::OnGetStatisticsForEntitiesResult, SuccessDelegate, ErrorDelegate);
    return HttpRequest->ProcessRequest();
}

void UPlayFabLeaderboardsAPI::OnGetStatisticsForEntitiesResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FGetStatisticsForEntitiesDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate)
{
    LeaderboardsModels::FGetStatisticsForEntitiesResponse outResult;
    FPlayFabCppError errorResult;
    if (PlayFabRequestHandler::DecodeRequest(HttpRequest, HttpResponse, bSucceeded, outResult, errorResult))
    {
        SuccessDelegate.ExecuteIfBound(outResult);
    }
    else
    {
        ErrorDelegate.ExecuteIfBound(errorResult);
    }
}

bool UPlayFabLeaderboardsAPI::IncrementLeaderboardVersion(
    LeaderboardsModels::FIncrementLeaderboardVersionRequest& request,
    const FIncrementLeaderboardVersionDelegate& SuccessDelegate,
    const FPlayFabErrorDelegate& ErrorDelegate)
{
    FString entityToken = request.AuthenticationContext.IsValid() ? request.AuthenticationContext->GetEntityToken() : PlayFabSettings::GetEntityToken();
    if (entityToken.Len() == 0) {
        UE_LOG(LogPlayFabCpp, Error, TEXT("You must call GetEntityToken API Method before calling this function."));
    }


    auto HttpRequest = PlayFabRequestHandler::SendRequest(nullptr, TEXT("/Leaderboard/IncrementLeaderboardVersion"), request.toJSONString(), TEXT("X-EntityToken"), entityToken);
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &UPlayFabLeaderboardsAPI::OnIncrementLeaderboardVersionResult, SuccessDelegate, ErrorDelegate);
    return HttpRequest->ProcessRequest();
}

void UPlayFabLeaderboardsAPI::OnIncrementLeaderboardVersionResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FIncrementLeaderboardVersionDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate)
{
    LeaderboardsModels::FIncrementLeaderboardVersionResponse outResult;
    FPlayFabCppError errorResult;
    if (PlayFabRequestHandler::DecodeRequest(HttpRequest, HttpResponse, bSucceeded, outResult, errorResult))
    {
        SuccessDelegate.ExecuteIfBound(outResult);
    }
    else
    {
        ErrorDelegate.ExecuteIfBound(errorResult);
    }
}

bool UPlayFabLeaderboardsAPI::IncrementStatisticVersion(
    LeaderboardsModels::FIncrementStatisticVersionRequest& request,
    const FIncrementStatisticVersionDelegate& SuccessDelegate,
    const FPlayFabErrorDelegate& ErrorDelegate)
{
    FString entityToken = request.AuthenticationContext.IsValid() ? request.AuthenticationContext->GetEntityToken() : PlayFabSettings::GetEntityToken();
    if (entityToken.Len() == 0) {
        UE_LOG(LogPlayFabCpp, Error, TEXT("You must call GetEntityToken API Method before calling this function."));
    }


    auto HttpRequest = PlayFabRequestHandler::SendRequest(nullptr, TEXT("/Statistic/IncrementStatisticVersion"), request.toJSONString(), TEXT("X-EntityToken"), entityToken);
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &UPlayFabLeaderboardsAPI::OnIncrementStatisticVersionResult, SuccessDelegate, ErrorDelegate);
    return HttpRequest->ProcessRequest();
}

void UPlayFabLeaderboardsAPI::OnIncrementStatisticVersionResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FIncrementStatisticVersionDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate)
{
    LeaderboardsModels::FIncrementStatisticVersionResponse outResult;
    FPlayFabCppError errorResult;
    if (PlayFabRequestHandler::DecodeRequest(HttpRequest, HttpResponse, bSucceeded, outResult, errorResult))
    {
        SuccessDelegate.ExecuteIfBound(outResult);
    }
    else
    {
        ErrorDelegate.ExecuteIfBound(errorResult);
    }
}

bool UPlayFabLeaderboardsAPI::ListLeaderboardDefinitions(
    LeaderboardsModels::FListLeaderboardDefinitionsRequest& request,
    const FListLeaderboardDefinitionsDelegate& SuccessDelegate,
    const FPlayFabErrorDelegate& ErrorDelegate)
{
    FString entityToken = request.AuthenticationContext.IsValid() ? request.AuthenticationContext->GetEntityToken() : PlayFabSettings::GetEntityToken();
    if (entityToken.Len() == 0) {
        UE_LOG(LogPlayFabCpp, Error, TEXT("You must call GetEntityToken API Method before calling this function."));
    }


    auto HttpRequest = PlayFabRequestHandler::SendRequest(nullptr, TEXT("/Leaderboard/ListLeaderboardDefinitions"), request.toJSONString(), TEXT("X-EntityToken"), entityToken);
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &UPlayFabLeaderboardsAPI::OnListLeaderboardDefinitionsResult, SuccessDelegate, ErrorDelegate);
    return HttpRequest->ProcessRequest();
}

void UPlayFabLeaderboardsAPI::OnListLeaderboardDefinitionsResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FListLeaderboardDefinitionsDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate)
{
    LeaderboardsModels::FListLeaderboardDefinitionsResponse outResult;
    FPlayFabCppError errorResult;
    if (PlayFabRequestHandler::DecodeRequest(HttpRequest, HttpResponse, bSucceeded, outResult, errorResult))
    {
        SuccessDelegate.ExecuteIfBound(outResult);
    }
    else
    {
        ErrorDelegate.ExecuteIfBound(errorResult);
    }
}

bool UPlayFabLeaderboardsAPI::ListStatisticDefinitions(
    LeaderboardsModels::FListStatisticDefinitionsRequest& request,
    const FListStatisticDefinitionsDelegate& SuccessDelegate,
    const FPlayFabErrorDelegate& ErrorDelegate)
{
    FString entityToken = request.AuthenticationContext.IsValid() ? request.AuthenticationContext->GetEntityToken() : PlayFabSettings::GetEntityToken();
    if (entityToken.Len() == 0) {
        UE_LOG(LogPlayFabCpp, Error, TEXT("You must call GetEntityToken API Method before calling this function."));
    }


    auto HttpRequest = PlayFabRequestHandler::SendRequest(nullptr, TEXT("/Statistic/ListStatisticDefinitions"), request.toJSONString(), TEXT("X-EntityToken"), entityToken);
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &UPlayFabLeaderboardsAPI::OnListStatisticDefinitionsResult, SuccessDelegate, ErrorDelegate);
    return HttpRequest->ProcessRequest();
}

void UPlayFabLeaderboardsAPI::OnListStatisticDefinitionsResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FListStatisticDefinitionsDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate)
{
    LeaderboardsModels::FListStatisticDefinitionsResponse outResult;
    FPlayFabCppError errorResult;
    if (PlayFabRequestHandler::DecodeRequest(HttpRequest, HttpResponse, bSucceeded, outResult, errorResult))
    {
        SuccessDelegate.ExecuteIfBound(outResult);
    }
    else
    {
        ErrorDelegate.ExecuteIfBound(errorResult);
    }
}

bool UPlayFabLeaderboardsAPI::UnlinkLeaderboardFromStatistic(
    LeaderboardsModels::FUnlinkLeaderboardFromStatisticRequest& request,
    const FUnlinkLeaderboardFromStatisticDelegate& SuccessDelegate,
    const FPlayFabErrorDelegate& ErrorDelegate)
{
    FString entityToken = request.AuthenticationContext.IsValid() ? request.AuthenticationContext->GetEntityToken() : PlayFabSettings::GetEntityToken();
    if (entityToken.Len() == 0) {
        UE_LOG(LogPlayFabCpp, Error, TEXT("You must call GetEntityToken API Method before calling this function."));
    }


    auto HttpRequest = PlayFabRequestHandler::SendRequest(nullptr, TEXT("/Leaderboard/UnlinkLeaderboardFromStatistic"), request.toJSONString(), TEXT("X-EntityToken"), entityToken);
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &UPlayFabLeaderboardsAPI::OnUnlinkLeaderboardFromStatisticResult, SuccessDelegate, ErrorDelegate);
    return HttpRequest->ProcessRequest();
}

void UPlayFabLeaderboardsAPI::OnUnlinkLeaderboardFromStatisticResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FUnlinkLeaderboardFromStatisticDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate)
{
    LeaderboardsModels::FEmptyResponse outResult;
    FPlayFabCppError errorResult;
    if (PlayFabRequestHandler::DecodeRequest(HttpRequest, HttpResponse, bSucceeded, outResult, errorResult))
    {
        SuccessDelegate.ExecuteIfBound(outResult);
    }
    else
    {
        ErrorDelegate.ExecuteIfBound(errorResult);
    }
}

bool UPlayFabLeaderboardsAPI::UpdateLeaderboardEntries(
    LeaderboardsModels::FUpdateLeaderboardEntriesRequest& request,
    const FUpdateLeaderboardEntriesDelegate& SuccessDelegate,
    const FPlayFabErrorDelegate& ErrorDelegate)
{
    FString entityToken = request.AuthenticationContext.IsValid() ? request.AuthenticationContext->GetEntityToken() : PlayFabSettings::GetEntityToken();
    if (entityToken.Len() == 0) {
        UE_LOG(LogPlayFabCpp, Error, TEXT("You must call GetEntityToken API Method before calling this function."));
    }


    auto HttpRequest = PlayFabRequestHandler::SendRequest(nullptr, TEXT("/Leaderboard/UpdateLeaderboardEntries"), request.toJSONString(), TEXT("X-EntityToken"), entityToken);
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &UPlayFabLeaderboardsAPI::OnUpdateLeaderboardEntriesResult, SuccessDelegate, ErrorDelegate);
    return HttpRequest->ProcessRequest();
}

void UPlayFabLeaderboardsAPI::OnUpdateLeaderboardEntriesResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FUpdateLeaderboardEntriesDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate)
{
    LeaderboardsModels::FEmptyResponse outResult;
    FPlayFabCppError errorResult;
    if (PlayFabRequestHandler::DecodeRequest(HttpRequest, HttpResponse, bSucceeded, outResult, errorResult))
    {
        SuccessDelegate.ExecuteIfBound(outResult);
    }
    else
    {
        ErrorDelegate.ExecuteIfBound(errorResult);
    }
}

bool UPlayFabLeaderboardsAPI::UpdateStatistics(
    LeaderboardsModels::FUpdateStatisticsRequest& request,
    const FUpdateStatisticsDelegate& SuccessDelegate,
    const FPlayFabErrorDelegate& ErrorDelegate)
{
    FString entityToken = request.AuthenticationContext.IsValid() ? request.AuthenticationContext->GetEntityToken() : PlayFabSettings::GetEntityToken();
    if (entityToken.Len() == 0) {
        UE_LOG(LogPlayFabCpp, Error, TEXT("You must call GetEntityToken API Method before calling this function."));
    }


    auto HttpRequest = PlayFabRequestHandler::SendRequest(nullptr, TEXT("/Statistic/UpdateStatistics"), request.toJSONString(), TEXT("X-EntityToken"), entityToken);
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &UPlayFabLeaderboardsAPI::OnUpdateStatisticsResult, SuccessDelegate, ErrorDelegate);
    return HttpRequest->ProcessRequest();
}

void UPlayFabLeaderboardsAPI::OnUpdateStatisticsResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FUpdateStatisticsDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate)
{
    LeaderboardsModels::FUpdateStatisticsResponse outResult;
    FPlayFabCppError errorResult;
    if (PlayFabRequestHandler::DecodeRequest(HttpRequest, HttpResponse, bSucceeded, outResult, errorResult))
    {
        SuccessDelegate.ExecuteIfBound(outResult);
    }
    else
    {
        ErrorDelegate.ExecuteIfBound(errorResult);
    }
}
