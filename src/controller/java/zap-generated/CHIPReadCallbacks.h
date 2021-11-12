/*
 *
 *    Copyright (c) 2021 Project CHIP Authors
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

// THIS FILE IS GENERATED BY ZAP
#include <zap-generated/CHIPClientCallbacks.h>

#include <jni.h>

class CHIPBooleanAttributeCallback : public chip::Callback::Callback<BooleanAttributeCallback>
{
public:
    CHIPBooleanAttributeCallback(jobject javaCallback, bool keepAlive = false);

    ~CHIPBooleanAttributeCallback();

    static void maybeDestroy(CHIPBooleanAttributeCallback * callback)
    {
        if (!callback->keepAlive)
        {
            callback->Cancel();
            delete callback;
        }
    }

    static void CallbackFn(void * context, bool value);

private:
    jobject javaCallbackRef;
    bool keepAlive;
};

class CHIPCharStringAttributeCallback : public chip::Callback::Callback<CharStringAttributeCallback>
{
public:
    CHIPCharStringAttributeCallback(jobject javaCallback, bool keepAlive = false);

    ~CHIPCharStringAttributeCallback();

    static void maybeDestroy(CHIPCharStringAttributeCallback * callback)
    {
        if (!callback->keepAlive)
        {
            callback->Cancel();
            delete callback;
        }
    }

    static void CallbackFn(void * context, const chip::CharSpan value);

private:
    jobject javaCallbackRef;
    bool keepAlive;
};

class CHIPInt8sAttributeCallback : public chip::Callback::Callback<Int8sAttributeCallback>
{
public:
    CHIPInt8sAttributeCallback(jobject javaCallback, bool keepAlive = false);

    ~CHIPInt8sAttributeCallback();

    static void maybeDestroy(CHIPInt8sAttributeCallback * callback)
    {
        if (!callback->keepAlive)
        {
            callback->Cancel();
            delete callback;
        }
    }

    static void CallbackFn(void * context, int8_t value);

private:
    jobject javaCallbackRef;
    bool keepAlive;
};

class CHIPInt8uAttributeCallback : public chip::Callback::Callback<Int8uAttributeCallback>
{
public:
    CHIPInt8uAttributeCallback(jobject javaCallback, bool keepAlive = false);

    ~CHIPInt8uAttributeCallback();

    static void maybeDestroy(CHIPInt8uAttributeCallback * callback)
    {
        if (!callback->keepAlive)
        {
            callback->Cancel();
            delete callback;
        }
    }

    static void CallbackFn(void * context, uint8_t value);

private:
    jobject javaCallbackRef;
    bool keepAlive;
};

class CHIPInt16sAttributeCallback : public chip::Callback::Callback<Int16sAttributeCallback>
{
public:
    CHIPInt16sAttributeCallback(jobject javaCallback, bool keepAlive = false);

    ~CHIPInt16sAttributeCallback();

    static void maybeDestroy(CHIPInt16sAttributeCallback * callback)
    {
        if (!callback->keepAlive)
        {
            callback->Cancel();
            delete callback;
        }
    }

    static void CallbackFn(void * context, int16_t value);

private:
    jobject javaCallbackRef;
    bool keepAlive;
};

class CHIPInt16uAttributeCallback : public chip::Callback::Callback<Int16uAttributeCallback>
{
public:
    CHIPInt16uAttributeCallback(jobject javaCallback, bool keepAlive = false);

    ~CHIPInt16uAttributeCallback();

    static void maybeDestroy(CHIPInt16uAttributeCallback * callback)
    {
        if (!callback->keepAlive)
        {
            callback->Cancel();
            delete callback;
        }
    }

    static void CallbackFn(void * context, uint16_t value);

private:
    jobject javaCallbackRef;
    bool keepAlive;
};

class CHIPInt32sAttributeCallback : public chip::Callback::Callback<Int32sAttributeCallback>
{
public:
    CHIPInt32sAttributeCallback(jobject javaCallback, bool keepAlive = false);

    ~CHIPInt32sAttributeCallback();

    static void maybeDestroy(CHIPInt32sAttributeCallback * callback)
    {
        if (!callback->keepAlive)
        {
            callback->Cancel();
            delete callback;
        }
    }

    static void CallbackFn(void * context, int32_t value);

private:
    jobject javaCallbackRef;
    bool keepAlive;
};

class CHIPInt32uAttributeCallback : public chip::Callback::Callback<Int32uAttributeCallback>
{
public:
    CHIPInt32uAttributeCallback(jobject javaCallback, bool keepAlive = false);

    ~CHIPInt32uAttributeCallback();

    static void maybeDestroy(CHIPInt32uAttributeCallback * callback)
    {
        if (!callback->keepAlive)
        {
            callback->Cancel();
            delete callback;
        }
    }

    static void CallbackFn(void * context, uint32_t value);

private:
    jobject javaCallbackRef;
    bool keepAlive;
};

class CHIPInt64sAttributeCallback : public chip::Callback::Callback<Int64sAttributeCallback>
{
public:
    CHIPInt64sAttributeCallback(jobject javaCallback, bool keepAlive = false);

    ~CHIPInt64sAttributeCallback();

    static void maybeDestroy(CHIPInt64sAttributeCallback * callback)
    {
        if (!callback->keepAlive)
        {
            callback->Cancel();
            delete callback;
        }
    }

    static void CallbackFn(void * context, int64_t value);

private:
    jobject javaCallbackRef;
    bool keepAlive;
};

class CHIPInt64uAttributeCallback : public chip::Callback::Callback<Int64uAttributeCallback>
{
public:
    CHIPInt64uAttributeCallback(jobject javaCallback, bool keepAlive = false);

    ~CHIPInt64uAttributeCallback();

    static void maybeDestroy(CHIPInt64uAttributeCallback * callback)
    {
        if (!callback->keepAlive)
        {
            callback->Cancel();
            delete callback;
        }
    }

    static void CallbackFn(void * context, uint64_t value);

private:
    jobject javaCallbackRef;
    bool keepAlive;
};

class CHIPOctetStringAttributeCallback : public chip::Callback::Callback<OctetStringAttributeCallback>
{
public:
    CHIPOctetStringAttributeCallback(jobject javaCallback, bool keepAlive = false);

    ~CHIPOctetStringAttributeCallback();

    static void maybeDestroy(CHIPOctetStringAttributeCallback * callback)
    {
        if (!callback->keepAlive)
        {
            callback->Cancel();
            delete callback;
        }
    }

    static void CallbackFn(void * context, const chip::ByteSpan value);

private:
    jobject javaCallbackRef;
    bool keepAlive;
};

class CHIPApplicationLauncherApplicationLauncherListAttributeCallback
    : public chip::Callback::Callback<ApplicationLauncherApplicationLauncherListListAttributeCallback>
{
public:
    CHIPApplicationLauncherApplicationLauncherListAttributeCallback(jobject javaCallback);

    ~CHIPApplicationLauncherApplicationLauncherListAttributeCallback();

    static void CallbackFn(void * context, const chip::app::DataModel::DecodableList<uint16_t> & list);

private:
    jobject javaCallbackRef;
};

class CHIPAudioOutputAudioOutputListAttributeCallback
    : public chip::Callback::Callback<AudioOutputAudioOutputListListAttributeCallback>
{
public:
    CHIPAudioOutputAudioOutputListAttributeCallback(jobject javaCallback);

    ~CHIPAudioOutputAudioOutputListAttributeCallback();

    static void CallbackFn(
        void * context,
        const chip::app::DataModel::DecodableList<chip::app::Clusters::AudioOutput::Structs::AudioOutputInfo::DecodableType> &
            list);

private:
    jobject javaCallbackRef;
};

class CHIPBridgedActionsActionListAttributeCallback : public chip::Callback::Callback<BridgedActionsActionListListAttributeCallback>
{
public:
    CHIPBridgedActionsActionListAttributeCallback(jobject javaCallback);

    ~CHIPBridgedActionsActionListAttributeCallback();

    static void CallbackFn(
        void * context,
        const chip::app::DataModel::DecodableList<chip::app::Clusters::BridgedActions::Structs::ActionStruct::DecodableType> &
            list);

private:
    jobject javaCallbackRef;
};

class CHIPBridgedActionsEndpointListAttributeCallback
    : public chip::Callback::Callback<BridgedActionsEndpointListListAttributeCallback>
{
public:
    CHIPBridgedActionsEndpointListAttributeCallback(jobject javaCallback);

    ~CHIPBridgedActionsEndpointListAttributeCallback();

    static void CallbackFn(
        void * context,
        const chip::app::DataModel::DecodableList<chip::app::Clusters::BridgedActions::Structs::EndpointListStruct::DecodableType> &
            list);

private:
    jobject javaCallbackRef;
};

class CHIPContentLauncherAcceptsHeaderListAttributeCallback
    : public chip::Callback::Callback<ContentLauncherAcceptsHeaderListListAttributeCallback>
{
public:
    CHIPContentLauncherAcceptsHeaderListAttributeCallback(jobject javaCallback);

    ~CHIPContentLauncherAcceptsHeaderListAttributeCallback();

    static void CallbackFn(void * context, const chip::app::DataModel::DecodableList<chip::ByteSpan> & list);

private:
    jobject javaCallbackRef;
};

class CHIPContentLauncherSupportedStreamingTypesAttributeCallback
    : public chip::Callback::Callback<ContentLauncherSupportedStreamingTypesListAttributeCallback>
{
public:
    CHIPContentLauncherSupportedStreamingTypesAttributeCallback(jobject javaCallback);

    ~CHIPContentLauncherSupportedStreamingTypesAttributeCallback();

    static void
    CallbackFn(void * context,
               const chip::app::DataModel::DecodableList<chip::app::Clusters::ContentLauncher::ContentLaunchStreamingType> & list);

private:
    jobject javaCallbackRef;
};

class CHIPDescriptorDeviceListAttributeCallback : public chip::Callback::Callback<DescriptorDeviceListListAttributeCallback>
{
public:
    CHIPDescriptorDeviceListAttributeCallback(jobject javaCallback);

    ~CHIPDescriptorDeviceListAttributeCallback();

    static void CallbackFn(
        void * context,
        const chip::app::DataModel::DecodableList<chip::app::Clusters::Descriptor::Structs::DeviceType::DecodableType> & list);

private:
    jobject javaCallbackRef;
};

class CHIPDescriptorServerListAttributeCallback : public chip::Callback::Callback<DescriptorServerListListAttributeCallback>
{
public:
    CHIPDescriptorServerListAttributeCallback(jobject javaCallback);

    ~CHIPDescriptorServerListAttributeCallback();

    static void CallbackFn(void * context, const chip::app::DataModel::DecodableList<chip::ClusterId> & list);

private:
    jobject javaCallbackRef;
};

class CHIPDescriptorClientListAttributeCallback : public chip::Callback::Callback<DescriptorClientListListAttributeCallback>
{
public:
    CHIPDescriptorClientListAttributeCallback(jobject javaCallback);

    ~CHIPDescriptorClientListAttributeCallback();

    static void CallbackFn(void * context, const chip::app::DataModel::DecodableList<chip::ClusterId> & list);

private:
    jobject javaCallbackRef;
};

class CHIPDescriptorPartsListAttributeCallback : public chip::Callback::Callback<DescriptorPartsListListAttributeCallback>
{
public:
    CHIPDescriptorPartsListAttributeCallback(jobject javaCallback);

    ~CHIPDescriptorPartsListAttributeCallback();

    static void CallbackFn(void * context, const chip::app::DataModel::DecodableList<chip::EndpointId> & list);

private:
    jobject javaCallbackRef;
};

class CHIPFixedLabelLabelListAttributeCallback : public chip::Callback::Callback<FixedLabelLabelListListAttributeCallback>
{
public:
    CHIPFixedLabelLabelListAttributeCallback(jobject javaCallback);

    ~CHIPFixedLabelLabelListAttributeCallback();

    static void CallbackFn(
        void * context,
        const chip::app::DataModel::DecodableList<chip::app::Clusters::FixedLabel::Structs::LabelStruct::DecodableType> & list);

private:
    jobject javaCallbackRef;
};

class CHIPGeneralCommissioningBasicCommissioningInfoListAttributeCallback
    : public chip::Callback::Callback<GeneralCommissioningBasicCommissioningInfoListListAttributeCallback>
{
public:
    CHIPGeneralCommissioningBasicCommissioningInfoListAttributeCallback(jobject javaCallback);

    ~CHIPGeneralCommissioningBasicCommissioningInfoListAttributeCallback();

    static void
    CallbackFn(void * context,
               const chip::app::DataModel::DecodableList<
                   chip::app::Clusters::GeneralCommissioning::Structs::BasicCommissioningInfoType::DecodableType> & list);

private:
    jobject javaCallbackRef;
};

class CHIPGeneralDiagnosticsNetworkInterfacesAttributeCallback
    : public chip::Callback::Callback<GeneralDiagnosticsNetworkInterfacesListAttributeCallback>
{
public:
    CHIPGeneralDiagnosticsNetworkInterfacesAttributeCallback(jobject javaCallback);

    ~CHIPGeneralDiagnosticsNetworkInterfacesAttributeCallback();

    static void CallbackFn(void * context,
                           const chip::app::DataModel::DecodableList<
                               chip::app::Clusters::GeneralDiagnostics::Structs::NetworkInterfaceType::DecodableType> & list);

private:
    jobject javaCallbackRef;
};

class CHIPGroupKeyManagementGroupsAttributeCallback : public chip::Callback::Callback<GroupKeyManagementGroupsListAttributeCallback>
{
public:
    CHIPGroupKeyManagementGroupsAttributeCallback(jobject javaCallback);

    ~CHIPGroupKeyManagementGroupsAttributeCallback();

    static void CallbackFn(
        void * context,
        const chip::app::DataModel::DecodableList<chip::app::Clusters::GroupKeyManagement::Structs::GroupState::DecodableType> &
            list);

private:
    jobject javaCallbackRef;
};

class CHIPGroupKeyManagementGroupKeysAttributeCallback
    : public chip::Callback::Callback<GroupKeyManagementGroupKeysListAttributeCallback>
{
public:
    CHIPGroupKeyManagementGroupKeysAttributeCallback(jobject javaCallback);

    ~CHIPGroupKeyManagementGroupKeysAttributeCallback();

    static void CallbackFn(
        void * context,
        const chip::app::DataModel::DecodableList<chip::app::Clusters::GroupKeyManagement::Structs::GroupKey::DecodableType> &
            list);

private:
    jobject javaCallbackRef;
};

class CHIPMediaInputMediaInputListAttributeCallback : public chip::Callback::Callback<MediaInputMediaInputListListAttributeCallback>
{
public:
    CHIPMediaInputMediaInputListAttributeCallback(jobject javaCallback);

    ~CHIPMediaInputMediaInputListAttributeCallback();

    static void CallbackFn(
        void * context,
        const chip::app::DataModel::DecodableList<chip::app::Clusters::MediaInput::Structs::MediaInputInfo::DecodableType> & list);

private:
    jobject javaCallbackRef;
};

class CHIPModeSelectSupportedModesAttributeCallback : public chip::Callback::Callback<ModeSelectSupportedModesListAttributeCallback>
{
public:
    CHIPModeSelectSupportedModesAttributeCallback(jobject javaCallback);

    ~CHIPModeSelectSupportedModesAttributeCallback();

    static void CallbackFn(
        void * context,
        const chip::app::DataModel::DecodableList<chip::app::Clusters::ModeSelect::Structs::ModeOptionStruct::DecodableType> &
            list);

private:
    jobject javaCallbackRef;
};

class CHIPOperationalCredentialsFabricsListAttributeCallback
    : public chip::Callback::Callback<OperationalCredentialsFabricsListListAttributeCallback>
{
public:
    CHIPOperationalCredentialsFabricsListAttributeCallback(jobject javaCallback);

    ~CHIPOperationalCredentialsFabricsListAttributeCallback();

    static void CallbackFn(void * context,
                           const chip::app::DataModel::DecodableList<
                               chip::app::Clusters::OperationalCredentials::Structs::FabricDescriptor::DecodableType> & list);

private:
    jobject javaCallbackRef;
};

class CHIPOperationalCredentialsTrustedRootCertificatesAttributeCallback
    : public chip::Callback::Callback<OperationalCredentialsTrustedRootCertificatesListAttributeCallback>
{
public:
    CHIPOperationalCredentialsTrustedRootCertificatesAttributeCallback(jobject javaCallback);

    ~CHIPOperationalCredentialsTrustedRootCertificatesAttributeCallback();

    static void CallbackFn(void * context, const chip::app::DataModel::DecodableList<chip::ByteSpan> & list);

private:
    jobject javaCallbackRef;
};

class CHIPPowerSourceActiveBatteryFaultsAttributeCallback
    : public chip::Callback::Callback<PowerSourceActiveBatteryFaultsListAttributeCallback>
{
public:
    CHIPPowerSourceActiveBatteryFaultsAttributeCallback(jobject javaCallback);

    ~CHIPPowerSourceActiveBatteryFaultsAttributeCallback();

    static void CallbackFn(void * context, const chip::app::DataModel::DecodableList<uint8_t> & list);

private:
    jobject javaCallbackRef;
};

class CHIPSoftwareDiagnosticsThreadMetricsAttributeCallback
    : public chip::Callback::Callback<SoftwareDiagnosticsThreadMetricsListAttributeCallback>
{
public:
    CHIPSoftwareDiagnosticsThreadMetricsAttributeCallback(jobject javaCallback);

    ~CHIPSoftwareDiagnosticsThreadMetricsAttributeCallback();

    static void CallbackFn(
        void * context,
        const chip::app::DataModel::DecodableList<chip::app::Clusters::SoftwareDiagnostics::Structs::ThreadMetrics::DecodableType> &
            list);

private:
    jobject javaCallbackRef;
};

class CHIPTvChannelTvChannelListAttributeCallback : public chip::Callback::Callback<TvChannelTvChannelListListAttributeCallback>
{
public:
    CHIPTvChannelTvChannelListAttributeCallback(jobject javaCallback);

    ~CHIPTvChannelTvChannelListAttributeCallback();

    static void CallbackFn(
        void * context,
        const chip::app::DataModel::DecodableList<chip::app::Clusters::TvChannel::Structs::TvChannelInfo::DecodableType> & list);

private:
    jobject javaCallbackRef;
};

class CHIPTargetNavigatorTargetNavigatorListAttributeCallback
    : public chip::Callback::Callback<TargetNavigatorTargetNavigatorListListAttributeCallback>
{
public:
    CHIPTargetNavigatorTargetNavigatorListAttributeCallback(jobject javaCallback);

    ~CHIPTargetNavigatorTargetNavigatorListAttributeCallback();

    static void CallbackFn(void * context,
                           const chip::app::DataModel::DecodableList<
                               chip::app::Clusters::TargetNavigator::Structs::NavigateTargetTargetInfo::DecodableType> & list);

private:
    jobject javaCallbackRef;
};

class CHIPTestClusterListInt8uAttributeCallback : public chip::Callback::Callback<TestClusterListInt8uListAttributeCallback>
{
public:
    CHIPTestClusterListInt8uAttributeCallback(jobject javaCallback);

    ~CHIPTestClusterListInt8uAttributeCallback();

    static void CallbackFn(void * context, const chip::app::DataModel::DecodableList<uint8_t> & list);

private:
    jobject javaCallbackRef;
};

class CHIPTestClusterListOctetStringAttributeCallback
    : public chip::Callback::Callback<TestClusterListOctetStringListAttributeCallback>
{
public:
    CHIPTestClusterListOctetStringAttributeCallback(jobject javaCallback);

    ~CHIPTestClusterListOctetStringAttributeCallback();

    static void CallbackFn(void * context, const chip::app::DataModel::DecodableList<chip::ByteSpan> & list);

private:
    jobject javaCallbackRef;
};

class CHIPTestClusterListStructOctetStringAttributeCallback
    : public chip::Callback::Callback<TestClusterListStructOctetStringListAttributeCallback>
{
public:
    CHIPTestClusterListStructOctetStringAttributeCallback(jobject javaCallback);

    ~CHIPTestClusterListStructOctetStringAttributeCallback();

    static void CallbackFn(
        void * context,
        const chip::app::DataModel::DecodableList<chip::app::Clusters::TestCluster::Structs::TestListStructOctet::DecodableType> &
            list);

private:
    jobject javaCallbackRef;
};

class CHIPTestClusterListNullablesAndOptionalsStructAttributeCallback
    : public chip::Callback::Callback<TestClusterListNullablesAndOptionalsStructListAttributeCallback>
{
public:
    CHIPTestClusterListNullablesAndOptionalsStructAttributeCallback(jobject javaCallback);

    ~CHIPTestClusterListNullablesAndOptionalsStructAttributeCallback();

    static void CallbackFn(void * context,
                           const chip::app::DataModel::DecodableList<
                               chip::app::Clusters::TestCluster::Structs::NullablesAndOptionalsStruct::DecodableType> & list);

private:
    jobject javaCallbackRef;
};

class CHIPThreadNetworkDiagnosticsNeighborTableListAttributeCallback
    : public chip::Callback::Callback<ThreadNetworkDiagnosticsNeighborTableListListAttributeCallback>
{
public:
    CHIPThreadNetworkDiagnosticsNeighborTableListAttributeCallback(jobject javaCallback);

    ~CHIPThreadNetworkDiagnosticsNeighborTableListAttributeCallback();

    static void CallbackFn(void * context,
                           const chip::app::DataModel::DecodableList<
                               chip::app::Clusters::ThreadNetworkDiagnostics::Structs::NeighborTable::DecodableType> & list);

private:
    jobject javaCallbackRef;
};

class CHIPThreadNetworkDiagnosticsRouteTableListAttributeCallback
    : public chip::Callback::Callback<ThreadNetworkDiagnosticsRouteTableListListAttributeCallback>
{
public:
    CHIPThreadNetworkDiagnosticsRouteTableListAttributeCallback(jobject javaCallback);

    ~CHIPThreadNetworkDiagnosticsRouteTableListAttributeCallback();

    static void CallbackFn(void * context,
                           const chip::app::DataModel::DecodableList<
                               chip::app::Clusters::ThreadNetworkDiagnostics::Structs::RouteTable::DecodableType> & list);

private:
    jobject javaCallbackRef;
};

class CHIPThreadNetworkDiagnosticsSecurityPolicyAttributeCallback
    : public chip::Callback::Callback<ThreadNetworkDiagnosticsSecurityPolicyListAttributeCallback>
{
public:
    CHIPThreadNetworkDiagnosticsSecurityPolicyAttributeCallback(jobject javaCallback);

    ~CHIPThreadNetworkDiagnosticsSecurityPolicyAttributeCallback();

    static void CallbackFn(void * context,
                           const chip::app::DataModel::DecodableList<
                               chip::app::Clusters::ThreadNetworkDiagnostics::Structs::SecurityPolicy::DecodableType> & list);

private:
    jobject javaCallbackRef;
};

class CHIPThreadNetworkDiagnosticsOperationalDatasetComponentsAttributeCallback
    : public chip::Callback::Callback<ThreadNetworkDiagnosticsOperationalDatasetComponentsListAttributeCallback>
{
public:
    CHIPThreadNetworkDiagnosticsOperationalDatasetComponentsAttributeCallback(jobject javaCallback);

    ~CHIPThreadNetworkDiagnosticsOperationalDatasetComponentsAttributeCallback();

    static void
    CallbackFn(void * context,
               const chip::app::DataModel::DecodableList<
                   chip::app::Clusters::ThreadNetworkDiagnostics::Structs::OperationalDatasetComponents::DecodableType> & list);

private:
    jobject javaCallbackRef;
};

class CHIPThreadNetworkDiagnosticsActiveNetworkFaultsListAttributeCallback
    : public chip::Callback::Callback<ThreadNetworkDiagnosticsActiveNetworkFaultsListListAttributeCallback>
{
public:
    CHIPThreadNetworkDiagnosticsActiveNetworkFaultsListAttributeCallback(jobject javaCallback);

    ~CHIPThreadNetworkDiagnosticsActiveNetworkFaultsListAttributeCallback();

    static void
    CallbackFn(void * context,
               const chip::app::DataModel::DecodableList<chip::app::Clusters::ThreadNetworkDiagnostics::NetworkFault> & list);

private:
    jobject javaCallbackRef;
};
