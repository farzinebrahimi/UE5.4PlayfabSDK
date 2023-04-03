//////////////////////////////////////////////////////
// Copyright (C) Microsoft. 2018. All rights reserved.
//////////////////////////////////////////////////////


// This is automatically generated by PlayFab SDKGenerator. DO NOT modify this manually!
#pragma once

#include "CoreMinimal.h"
#include "PlayFabCppBaseModel.h"

namespace PlayFab
{
namespace ProfilesModels
{

    enum EffectType
    {
        EffectTypeAllow,
        EffectTypeDeny
    };

    PLAYFABCPP_API void writeEffectTypeEnumJSON(EffectType enumVal, JsonWriter& writer);
    PLAYFABCPP_API EffectType readEffectTypeFromValue(const TSharedPtr<FJsonValue>& value);
    PLAYFABCPP_API EffectType readEffectTypeFromValue(const FString& value);

    struct PLAYFABCPP_API FEntityDataObject : public PlayFab::FPlayFabCppBaseModel
    {
        // [optional] Un-escaped JSON object, if DataAsObject is true.
        FJsonKeeper DataObject;

        // [optional] Escaped string JSON body of the object, if DataAsObject is default or false.
        FString EscapedDataObject;

        // [optional] Name of this object.
        FString ObjectName;

        FEntityDataObject() :
            FPlayFabCppBaseModel(),
            DataObject(),
            EscapedDataObject(),
            ObjectName()
            {}

        FEntityDataObject(const FEntityDataObject& src) = default;

        FEntityDataObject(const TSharedPtr<FJsonObject>& obj) : FEntityDataObject()
        {
            readFromValue(obj);
        }

        ~FEntityDataObject();

        void writeJSON(JsonWriter& writer) const override;
        bool readFromValue(const TSharedPtr<FJsonObject>& obj) override;
    };

    struct PLAYFABCPP_API FEntityKey : public PlayFab::FPlayFabCppBaseModel
    {
        // Unique ID of the entity.
        FString Id;

        // [optional] Entity type. See https://docs.microsoft.com/gaming/playfab/features/data/entities/available-built-in-entity-types
        FString Type;

        FEntityKey() :
            FPlayFabCppBaseModel(),
            Id(),
            Type()
            {}

        FEntityKey(const FEntityKey& src) = default;

        FEntityKey(const TSharedPtr<FJsonObject>& obj) : FEntityKey()
        {
            readFromValue(obj);
        }

        ~FEntityKey();

        void writeJSON(JsonWriter& writer) const override;
        bool readFromValue(const TSharedPtr<FJsonObject>& obj) override;
    };

    struct PLAYFABCPP_API FEntityLineage : public PlayFab::FPlayFabCppBaseModel
    {
        // [optional] The Character Id of the associated entity.
        FString CharacterId;

        // [optional] The Group Id of the associated entity.
        FString GroupId;

        // [optional] The Master Player Account Id of the associated entity.
        FString MasterPlayerAccountId;

        // [optional] The Namespace Id of the associated entity.
        FString NamespaceId;

        // [optional] The Title Id of the associated entity.
        FString TitleId;

        // [optional] The Title Player Account Id of the associated entity.
        FString TitlePlayerAccountId;

        FEntityLineage() :
            FPlayFabCppBaseModel(),
            CharacterId(),
            GroupId(),
            MasterPlayerAccountId(),
            NamespaceId(),
            TitleId(),
            TitlePlayerAccountId()
            {}

        FEntityLineage(const FEntityLineage& src) = default;

        FEntityLineage(const TSharedPtr<FJsonObject>& obj) : FEntityLineage()
        {
            readFromValue(obj);
        }

        ~FEntityLineage();

        void writeJSON(JsonWriter& writer) const override;
        bool readFromValue(const TSharedPtr<FJsonObject>& obj) override;
    };

    struct PLAYFABCPP_API FEntityPermissionStatement : public PlayFab::FPlayFabCppBaseModel
    {
        // The action this statement effects. May be 'Read', 'Write' or '*' for both read and write.
        FString Action;

        // [optional] A comment about the statement. Intended solely for bookkeeping and debugging.
        FString Comment;

        // [optional] Additional conditions to be applied for entity resources.
        FJsonKeeper Condition;

        // The effect this statement will have. It may be either Allow or Deny
        EffectType Effect;

        // The principal this statement will effect.
        FJsonKeeper Principal;

        // The resource this statements effects. Similar to 'pfrn:data--title![Title ID]/Profile/*'
        FString Resource;

        FEntityPermissionStatement() :
            FPlayFabCppBaseModel(),
            Action(),
            Comment(),
            Condition(),
            Effect(),
            Principal(),
            Resource()
            {}

        FEntityPermissionStatement(const FEntityPermissionStatement& src) = default;

        FEntityPermissionStatement(const TSharedPtr<FJsonObject>& obj) : FEntityPermissionStatement()
        {
            readFromValue(obj);
        }

        ~FEntityPermissionStatement();

        void writeJSON(JsonWriter& writer) const override;
        bool readFromValue(const TSharedPtr<FJsonObject>& obj) override;
    };

    struct PLAYFABCPP_API FEntityProfileFileMetadata : public PlayFab::FPlayFabCppBaseModel
    {
        // [optional] Checksum value for the file, can be used to check if the file on the server has changed.
        FString Checksum;

        // [optional] Name of the file
        FString FileName;

        // Last UTC time the file was modified
        FDateTime LastModified;

        // Storage service's reported byte count
        int32 Size;

        FEntityProfileFileMetadata() :
            FPlayFabCppBaseModel(),
            Checksum(),
            FileName(),
            LastModified(0),
            Size(0)
            {}

        FEntityProfileFileMetadata(const FEntityProfileFileMetadata& src) = default;

        FEntityProfileFileMetadata(const TSharedPtr<FJsonObject>& obj) : FEntityProfileFileMetadata()
        {
            readFromValue(obj);
        }

        ~FEntityProfileFileMetadata();

        void writeJSON(JsonWriter& writer) const override;
        bool readFromValue(const TSharedPtr<FJsonObject>& obj) override;
    };

    struct PLAYFABCPP_API FEntityStatisticChildValue : public PlayFab::FPlayFabCppBaseModel
    {
        // [optional] Child name value, if child statistic
        FString ChildName;

        // [optional] Child statistic metadata
        FString Metadata;

        // Child statistic value
        int32 Value;

        FEntityStatisticChildValue() :
            FPlayFabCppBaseModel(),
            ChildName(),
            Metadata(),
            Value(0)
            {}

        FEntityStatisticChildValue(const FEntityStatisticChildValue& src) = default;

        FEntityStatisticChildValue(const TSharedPtr<FJsonObject>& obj) : FEntityStatisticChildValue()
        {
            readFromValue(obj);
        }

        ~FEntityStatisticChildValue();

        void writeJSON(JsonWriter& writer) const override;
        bool readFromValue(const TSharedPtr<FJsonObject>& obj) override;
    };

    struct PLAYFABCPP_API FEntityStatisticValue : public PlayFab::FPlayFabCppBaseModel
    {
        // [optional] Child statistic values
        TMap<FString, FEntityStatisticChildValue> ChildStatistics;
        // [optional] Statistic metadata
        FString Metadata;

        // [optional] Statistic name
        FString Name;

        // [optional] Statistic value
        Boxed<int32> Value;

        // Statistic version
        int32 Version;

        FEntityStatisticValue() :
            FPlayFabCppBaseModel(),
            ChildStatistics(),
            Metadata(),
            Name(),
            Value(),
            Version(0)
            {}

        FEntityStatisticValue(const FEntityStatisticValue& src) = default;

        FEntityStatisticValue(const TSharedPtr<FJsonObject>& obj) : FEntityStatisticValue()
        {
            readFromValue(obj);
        }

        ~FEntityStatisticValue();

        void writeJSON(JsonWriter& writer) const override;
        bool readFromValue(const TSharedPtr<FJsonObject>& obj) override;
    };

    struct PLAYFABCPP_API FEntityProfileBody : public PlayFab::FPlayFabCppBaseModel
    {
        // [optional] Avatar URL for the entity.
        FString AvatarUrl;

        // The creation time of this profile in UTC.
        FDateTime Created;

        /**
         * [optional] The display name of the entity. This field may serve different purposes for different entity types. i.e.: for a title
         * player account it could represent the display name of the player, whereas on a character it could be character's name.
         */
        FString DisplayName;

        // [optional] The entity id and type.
        TSharedPtr<FEntityKey> Entity;

        // [optional] The chain of responsibility for this entity. Use Lineage.
        FString EntityChain;

        // [optional] The experiment variants of this profile.
        TArray<FString> ExperimentVariants;
        // [optional] The files on this profile.
        TMap<FString, FEntityProfileFileMetadata> Files;
        // [optional] The language on this profile.
        FString Language;

        // [optional] Leaderboard metadata for the entity.
        FString LeaderboardMetadata;

        // [optional] The lineage of this profile.
        TSharedPtr<FEntityLineage> Lineage;

        // [optional] The objects on this profile.
        TMap<FString, FEntityDataObject> Objects;
        /**
         * [optional] The permissions that govern access to this entity profile and its properties. Only includes permissions set on this
         * profile, not global statements from titles and namespaces.
         */
        TArray<FEntityPermissionStatement> Permissions;
        // [optional] The statistics on this profile.
        TMap<FString, FEntityStatisticValue> Statistics;
        /**
         * The version number of the profile in persistent storage at the time of the read. Used for optional optimistic
         * concurrency during update.
         */
        int32 VersionNumber;

        FEntityProfileBody() :
            FPlayFabCppBaseModel(),
            AvatarUrl(),
            Created(0),
            DisplayName(),
            Entity(nullptr),
            EntityChain(),
            ExperimentVariants(),
            Files(),
            Language(),
            LeaderboardMetadata(),
            Lineage(nullptr),
            Objects(),
            Permissions(),
            Statistics(),
            VersionNumber(0)
            {}

        FEntityProfileBody(const FEntityProfileBody& src) = default;

        FEntityProfileBody(const TSharedPtr<FJsonObject>& obj) : FEntityProfileBody()
        {
            readFromValue(obj);
        }

        ~FEntityProfileBody();

        void writeJSON(JsonWriter& writer) const override;
        bool readFromValue(const TSharedPtr<FJsonObject>& obj) override;
    };

    struct PLAYFABCPP_API FGetEntityProfileRequest : public PlayFab::FPlayFabCppRequestCommon
    {
        // [optional] The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.).
        TMap<FString, FString> CustomTags;
        /**
         * [optional] Determines whether the objects will be returned as an escaped JSON string or as a un-escaped JSON object. Default is
         * JSON string.
         */
        Boxed<bool> DataAsObject;

        // [optional] The optional entity to perform this action on. Defaults to the currently logged in entity.
        TSharedPtr<FEntityKey> Entity;

        FGetEntityProfileRequest() :
            FPlayFabCppRequestCommon(),
            CustomTags(),
            DataAsObject(),
            Entity(nullptr)
            {}

        FGetEntityProfileRequest(const FGetEntityProfileRequest& src) = default;

        FGetEntityProfileRequest(const TSharedPtr<FJsonObject>& obj) : FGetEntityProfileRequest()
        {
            readFromValue(obj);
        }

        ~FGetEntityProfileRequest();

        void writeJSON(JsonWriter& writer) const override;
        bool readFromValue(const TSharedPtr<FJsonObject>& obj) override;
    };

    struct PLAYFABCPP_API FGetEntityProfileResponse : public PlayFab::FPlayFabCppResultCommon
    {
        // [optional] Entity profile
        TSharedPtr<FEntityProfileBody> Profile;

        FGetEntityProfileResponse() :
            FPlayFabCppResultCommon(),
            Profile(nullptr)
            {}

        FGetEntityProfileResponse(const FGetEntityProfileResponse& src) = default;

        FGetEntityProfileResponse(const TSharedPtr<FJsonObject>& obj) : FGetEntityProfileResponse()
        {
            readFromValue(obj);
        }

        ~FGetEntityProfileResponse();

        void writeJSON(JsonWriter& writer) const override;
        bool readFromValue(const TSharedPtr<FJsonObject>& obj) override;
    };

    struct PLAYFABCPP_API FGetEntityProfilesRequest : public PlayFab::FPlayFabCppRequestCommon
    {
        // [optional] The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.).
        TMap<FString, FString> CustomTags;
        /**
         * [optional] Determines whether the objects will be returned as an escaped JSON string or as a un-escaped JSON object. Default is
         * JSON string.
         */
        Boxed<bool> DataAsObject;

        // Entity keys of the profiles to load. Must be between 1 and 25
        TArray<FEntityKey> Entities;
        FGetEntityProfilesRequest() :
            FPlayFabCppRequestCommon(),
            CustomTags(),
            DataAsObject(),
            Entities()
            {}

        FGetEntityProfilesRequest(const FGetEntityProfilesRequest& src) = default;

        FGetEntityProfilesRequest(const TSharedPtr<FJsonObject>& obj) : FGetEntityProfilesRequest()
        {
            readFromValue(obj);
        }

        ~FGetEntityProfilesRequest();

        void writeJSON(JsonWriter& writer) const override;
        bool readFromValue(const TSharedPtr<FJsonObject>& obj) override;
    };

    struct PLAYFABCPP_API FGetEntityProfilesResponse : public PlayFab::FPlayFabCppResultCommon
    {
        // [optional] Entity profiles
        TArray<FEntityProfileBody> Profiles;
        FGetEntityProfilesResponse() :
            FPlayFabCppResultCommon(),
            Profiles()
            {}

        FGetEntityProfilesResponse(const FGetEntityProfilesResponse& src) = default;

        FGetEntityProfilesResponse(const TSharedPtr<FJsonObject>& obj) : FGetEntityProfilesResponse()
        {
            readFromValue(obj);
        }

        ~FGetEntityProfilesResponse();

        void writeJSON(JsonWriter& writer) const override;
        bool readFromValue(const TSharedPtr<FJsonObject>& obj) override;
    };

    struct PLAYFABCPP_API FGetGlobalPolicyRequest : public PlayFab::FPlayFabCppRequestCommon
    {
        // [optional] The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.).
        TMap<FString, FString> CustomTags;
        // [optional] The optional entity to perform this action on. Defaults to the currently logged in entity.
        TSharedPtr<FEntityKey> Entity;

        FGetGlobalPolicyRequest() :
            FPlayFabCppRequestCommon(),
            CustomTags(),
            Entity(nullptr)
            {}

        FGetGlobalPolicyRequest(const FGetGlobalPolicyRequest& src) = default;

        FGetGlobalPolicyRequest(const TSharedPtr<FJsonObject>& obj) : FGetGlobalPolicyRequest()
        {
            readFromValue(obj);
        }

        ~FGetGlobalPolicyRequest();

        void writeJSON(JsonWriter& writer) const override;
        bool readFromValue(const TSharedPtr<FJsonObject>& obj) override;
    };

    struct PLAYFABCPP_API FGetGlobalPolicyResponse : public PlayFab::FPlayFabCppResultCommon
    {
        // [optional] The permissions that govern access to all entities under this title or namespace.
        TArray<FEntityPermissionStatement> Permissions;
        FGetGlobalPolicyResponse() :
            FPlayFabCppResultCommon(),
            Permissions()
            {}

        FGetGlobalPolicyResponse(const FGetGlobalPolicyResponse& src) = default;

        FGetGlobalPolicyResponse(const TSharedPtr<FJsonObject>& obj) : FGetGlobalPolicyResponse()
        {
            readFromValue(obj);
        }

        ~FGetGlobalPolicyResponse();

        void writeJSON(JsonWriter& writer) const override;
        bool readFromValue(const TSharedPtr<FJsonObject>& obj) override;
    };

    struct PLAYFABCPP_API FGetTitlePlayersFromMasterPlayerAccountIdsRequest : public PlayFab::FPlayFabCppRequestCommon
    {
        // [optional] The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.).
        TMap<FString, FString> CustomTags;
        // Master player account ids.
        TArray<FString> MasterPlayerAccountIds;
        // [optional] Id of title to get players from.
        FString TitleId;

        FGetTitlePlayersFromMasterPlayerAccountIdsRequest() :
            FPlayFabCppRequestCommon(),
            CustomTags(),
            MasterPlayerAccountIds(),
            TitleId()
            {}

        FGetTitlePlayersFromMasterPlayerAccountIdsRequest(const FGetTitlePlayersFromMasterPlayerAccountIdsRequest& src) = default;

        FGetTitlePlayersFromMasterPlayerAccountIdsRequest(const TSharedPtr<FJsonObject>& obj) : FGetTitlePlayersFromMasterPlayerAccountIdsRequest()
        {
            readFromValue(obj);
        }

        ~FGetTitlePlayersFromMasterPlayerAccountIdsRequest();

        void writeJSON(JsonWriter& writer) const override;
        bool readFromValue(const TSharedPtr<FJsonObject>& obj) override;
    };

    struct PLAYFABCPP_API FGetTitlePlayersFromMasterPlayerAccountIdsResponse : public PlayFab::FPlayFabCppResultCommon
    {
        // [optional] Optional id of title to get players from, required if calling using a master_player_account.
        FString TitleId;

        // [optional] Dictionary of master player ids mapped to title player entity keys and id pairs
        TMap<FString, FEntityKey> TitlePlayerAccounts;
        FGetTitlePlayersFromMasterPlayerAccountIdsResponse() :
            FPlayFabCppResultCommon(),
            TitleId(),
            TitlePlayerAccounts()
            {}

        FGetTitlePlayersFromMasterPlayerAccountIdsResponse(const FGetTitlePlayersFromMasterPlayerAccountIdsResponse& src) = default;

        FGetTitlePlayersFromMasterPlayerAccountIdsResponse(const TSharedPtr<FJsonObject>& obj) : FGetTitlePlayersFromMasterPlayerAccountIdsResponse()
        {
            readFromValue(obj);
        }

        ~FGetTitlePlayersFromMasterPlayerAccountIdsResponse();

        void writeJSON(JsonWriter& writer) const override;
        bool readFromValue(const TSharedPtr<FJsonObject>& obj) override;
    };

    struct PLAYFABCPP_API FGetTitlePlayersFromProviderIDsResponse : public PlayFab::FPlayFabCppResultCommon
    {
        /**
         * [optional] Dictionary of provider identifiers mapped to title_player_account lineage. Missing lineage indicates the player either
         * doesn't exist or doesn't play the requested title.
         */
        TMap<FString, FEntityLineage> TitlePlayerAccounts;
        FGetTitlePlayersFromProviderIDsResponse() :
            FPlayFabCppResultCommon(),
            TitlePlayerAccounts()
            {}

        FGetTitlePlayersFromProviderIDsResponse(const FGetTitlePlayersFromProviderIDsResponse& src) = default;

        FGetTitlePlayersFromProviderIDsResponse(const TSharedPtr<FJsonObject>& obj) : FGetTitlePlayersFromProviderIDsResponse()
        {
            readFromValue(obj);
        }

        ~FGetTitlePlayersFromProviderIDsResponse();

        void writeJSON(JsonWriter& writer) const override;
        bool readFromValue(const TSharedPtr<FJsonObject>& obj) override;
    };

    struct PLAYFABCPP_API FGetTitlePlayersFromXboxLiveIDsRequest : public PlayFab::FPlayFabCppRequestCommon
    {
        // [optional] The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.).
        TMap<FString, FString> CustomTags;
        // Xbox Sandbox the players had on their Xbox tokens.
        FString Sandbox;

        // [optional] Optional ID of title to get players from, required if calling using a master_player_account.
        FString TitleId;

        // List of Xbox Live XUIDs
        TArray<FString> XboxLiveIds;
        FGetTitlePlayersFromXboxLiveIDsRequest() :
            FPlayFabCppRequestCommon(),
            CustomTags(),
            Sandbox(),
            TitleId(),
            XboxLiveIds()
            {}

        FGetTitlePlayersFromXboxLiveIDsRequest(const FGetTitlePlayersFromXboxLiveIDsRequest& src) = default;

        FGetTitlePlayersFromXboxLiveIDsRequest(const TSharedPtr<FJsonObject>& obj) : FGetTitlePlayersFromXboxLiveIDsRequest()
        {
            readFromValue(obj);
        }

        ~FGetTitlePlayersFromXboxLiveIDsRequest();

        void writeJSON(JsonWriter& writer) const override;
        bool readFromValue(const TSharedPtr<FJsonObject>& obj) override;
    };

    enum OperationTypes
    {
        OperationTypesCreated,
        OperationTypesUpdated,
        OperationTypesDeleted,
        OperationTypesNone
    };

    PLAYFABCPP_API void writeOperationTypesEnumJSON(OperationTypes enumVal, JsonWriter& writer);
    PLAYFABCPP_API OperationTypes readOperationTypesFromValue(const TSharedPtr<FJsonValue>& value);
    PLAYFABCPP_API OperationTypes readOperationTypesFromValue(const FString& value);

    struct PLAYFABCPP_API FSetEntityProfilePolicyRequest : public PlayFab::FPlayFabCppRequestCommon
    {
        // [optional] The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.).
        TMap<FString, FString> CustomTags;
        // The entity to perform this action on.
        FEntityKey Entity;

        // The statements to include in the access policy.
        TArray<FEntityPermissionStatement> Statements;
        FSetEntityProfilePolicyRequest() :
            FPlayFabCppRequestCommon(),
            CustomTags(),
            Entity(),
            Statements()
            {}

        FSetEntityProfilePolicyRequest(const FSetEntityProfilePolicyRequest& src) = default;

        FSetEntityProfilePolicyRequest(const TSharedPtr<FJsonObject>& obj) : FSetEntityProfilePolicyRequest()
        {
            readFromValue(obj);
        }

        ~FSetEntityProfilePolicyRequest();

        void writeJSON(JsonWriter& writer) const override;
        bool readFromValue(const TSharedPtr<FJsonObject>& obj) override;
    };

    struct PLAYFABCPP_API FSetEntityProfilePolicyResponse : public PlayFab::FPlayFabCppResultCommon
    {
        /**
         * [optional] The permissions that govern access to this entity profile and its properties. Only includes permissions set on this
         * profile, not global statements from titles and namespaces.
         */
        TArray<FEntityPermissionStatement> Permissions;
        FSetEntityProfilePolicyResponse() :
            FPlayFabCppResultCommon(),
            Permissions()
            {}

        FSetEntityProfilePolicyResponse(const FSetEntityProfilePolicyResponse& src) = default;

        FSetEntityProfilePolicyResponse(const TSharedPtr<FJsonObject>& obj) : FSetEntityProfilePolicyResponse()
        {
            readFromValue(obj);
        }

        ~FSetEntityProfilePolicyResponse();

        void writeJSON(JsonWriter& writer) const override;
        bool readFromValue(const TSharedPtr<FJsonObject>& obj) override;
    };

    struct PLAYFABCPP_API FSetGlobalPolicyRequest : public PlayFab::FPlayFabCppRequestCommon
    {
        // [optional] The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.).
        TMap<FString, FString> CustomTags;
        // [optional] The permissions that govern access to all entities under this title or namespace.
        TArray<FEntityPermissionStatement> Permissions;
        FSetGlobalPolicyRequest() :
            FPlayFabCppRequestCommon(),
            CustomTags(),
            Permissions()
            {}

        FSetGlobalPolicyRequest(const FSetGlobalPolicyRequest& src) = default;

        FSetGlobalPolicyRequest(const TSharedPtr<FJsonObject>& obj) : FSetGlobalPolicyRequest()
        {
            readFromValue(obj);
        }

        ~FSetGlobalPolicyRequest();

        void writeJSON(JsonWriter& writer) const override;
        bool readFromValue(const TSharedPtr<FJsonObject>& obj) override;
    };

    struct PLAYFABCPP_API FSetGlobalPolicyResponse : public PlayFab::FPlayFabCppResultCommon
    {
        FSetGlobalPolicyResponse() :
            FPlayFabCppResultCommon()
            {}

        FSetGlobalPolicyResponse(const FSetGlobalPolicyResponse& src) = default;

        FSetGlobalPolicyResponse(const TSharedPtr<FJsonObject>& obj) : FSetGlobalPolicyResponse()
        {
            readFromValue(obj);
        }

        ~FSetGlobalPolicyResponse();

        void writeJSON(JsonWriter& writer) const override;
        bool readFromValue(const TSharedPtr<FJsonObject>& obj) override;
    };

    struct PLAYFABCPP_API FSetProfileLanguageRequest : public PlayFab::FPlayFabCppRequestCommon
    {
        // [optional] The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.).
        TMap<FString, FString> CustomTags;
        // [optional] The optional entity to perform this action on. Defaults to the currently logged in entity.
        TSharedPtr<FEntityKey> Entity;

        // [optional] The expected version of a profile to perform this update on
        Boxed<int32> ExpectedVersion;

        // [optional] The language to set on the given entity. Deletes the profile's language if passed in a null string.
        FString Language;

        FSetProfileLanguageRequest() :
            FPlayFabCppRequestCommon(),
            CustomTags(),
            Entity(nullptr),
            ExpectedVersion(),
            Language()
            {}

        FSetProfileLanguageRequest(const FSetProfileLanguageRequest& src) = default;

        FSetProfileLanguageRequest(const TSharedPtr<FJsonObject>& obj) : FSetProfileLanguageRequest()
        {
            readFromValue(obj);
        }

        ~FSetProfileLanguageRequest();

        void writeJSON(JsonWriter& writer) const override;
        bool readFromValue(const TSharedPtr<FJsonObject>& obj) override;
    };

    struct PLAYFABCPP_API FSetProfileLanguageResponse : public PlayFab::FPlayFabCppResultCommon
    {
        // [optional] The type of operation that occured on the profile's language
        Boxed<OperationTypes> OperationResult;

        // [optional] The updated version of the profile after the language update
        Boxed<int32> VersionNumber;

        FSetProfileLanguageResponse() :
            FPlayFabCppResultCommon(),
            OperationResult(),
            VersionNumber()
            {}

        FSetProfileLanguageResponse(const FSetProfileLanguageResponse& src) = default;

        FSetProfileLanguageResponse(const TSharedPtr<FJsonObject>& obj) : FSetProfileLanguageResponse()
        {
            readFromValue(obj);
        }

        ~FSetProfileLanguageResponse();

        void writeJSON(JsonWriter& writer) const override;
        bool readFromValue(const TSharedPtr<FJsonObject>& obj) override;
    };

}
}
