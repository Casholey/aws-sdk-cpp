﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-sms-voice-v2/model/RegistrationStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace PinpointSMSVoiceV2
{
namespace Model
{

  /**
   * <p>Provides information about the requested registration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/RegistrationInformation">AWS
   * API Reference</a></p>
   */
  class RegistrationInformation
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API RegistrationInformation();
    AWS_PINPOINTSMSVOICEV2_API RegistrationInformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API RegistrationInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the registration.</p>
     */
    inline const Aws::String& GetRegistrationArn() const{ return m_registrationArn; }
    inline bool RegistrationArnHasBeenSet() const { return m_registrationArnHasBeenSet; }
    inline void SetRegistrationArn(const Aws::String& value) { m_registrationArnHasBeenSet = true; m_registrationArn = value; }
    inline void SetRegistrationArn(Aws::String&& value) { m_registrationArnHasBeenSet = true; m_registrationArn = std::move(value); }
    inline void SetRegistrationArn(const char* value) { m_registrationArnHasBeenSet = true; m_registrationArn.assign(value); }
    inline RegistrationInformation& WithRegistrationArn(const Aws::String& value) { SetRegistrationArn(value); return *this;}
    inline RegistrationInformation& WithRegistrationArn(Aws::String&& value) { SetRegistrationArn(std::move(value)); return *this;}
    inline RegistrationInformation& WithRegistrationArn(const char* value) { SetRegistrationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the registration.</p>
     */
    inline const Aws::String& GetRegistrationId() const{ return m_registrationId; }
    inline bool RegistrationIdHasBeenSet() const { return m_registrationIdHasBeenSet; }
    inline void SetRegistrationId(const Aws::String& value) { m_registrationIdHasBeenSet = true; m_registrationId = value; }
    inline void SetRegistrationId(Aws::String&& value) { m_registrationIdHasBeenSet = true; m_registrationId = std::move(value); }
    inline void SetRegistrationId(const char* value) { m_registrationIdHasBeenSet = true; m_registrationId.assign(value); }
    inline RegistrationInformation& WithRegistrationId(const Aws::String& value) { SetRegistrationId(value); return *this;}
    inline RegistrationInformation& WithRegistrationId(Aws::String&& value) { SetRegistrationId(std::move(value)); return *this;}
    inline RegistrationInformation& WithRegistrationId(const char* value) { SetRegistrationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of registration form. The list of <b>RegistrationTypes</b> can be
     * found using the <a>DescribeRegistrationTypeDefinitions</a> action.</p>
     */
    inline const Aws::String& GetRegistrationType() const{ return m_registrationType; }
    inline bool RegistrationTypeHasBeenSet() const { return m_registrationTypeHasBeenSet; }
    inline void SetRegistrationType(const Aws::String& value) { m_registrationTypeHasBeenSet = true; m_registrationType = value; }
    inline void SetRegistrationType(Aws::String&& value) { m_registrationTypeHasBeenSet = true; m_registrationType = std::move(value); }
    inline void SetRegistrationType(const char* value) { m_registrationTypeHasBeenSet = true; m_registrationType.assign(value); }
    inline RegistrationInformation& WithRegistrationType(const Aws::String& value) { SetRegistrationType(value); return *this;}
    inline RegistrationInformation& WithRegistrationType(Aws::String&& value) { SetRegistrationType(std::move(value)); return *this;}
    inline RegistrationInformation& WithRegistrationType(const char* value) { SetRegistrationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the registration.</p> <ul> <li> <p> <code>CLOSED</code>: The
     * phone number or sender ID has been deleted and you must also delete the
     * registration for the number.</p> </li> <li> <p> <code>CREATED</code>: Your
     * registration is created but not submitted.</p> </li> <li> <p>
     * <code>COMPLETE</code>: Your registration has been approved and your origination
     * identity has been created.</p> </li> <li> <p> <code>DELETED</code>: The
     * registration has been deleted.</p> </li> <li> <p> <code>PROVISIONING</code>:
     * Your registration has been approved and your origination identity is being
     * created.</p> </li> <li> <p> <code>REQUIRES_AUTHENTICATION</code>: You need to
     * complete email authentication.</p> </li> <li> <p> <code>REQUIRES_UPDATES</code>:
     * You must fix your registration and resubmit it.</p> </li> <li> <p>
     * <code>REVIEWING</code>: Your registration has been accepted and is being
     * reviewed.</p> </li> <li> <p> <code>SUBMITTED</code>: Your registration has been
     * submitted and is awaiting review.</p> </li> </ul>
     */
    inline const RegistrationStatus& GetRegistrationStatus() const{ return m_registrationStatus; }
    inline bool RegistrationStatusHasBeenSet() const { return m_registrationStatusHasBeenSet; }
    inline void SetRegistrationStatus(const RegistrationStatus& value) { m_registrationStatusHasBeenSet = true; m_registrationStatus = value; }
    inline void SetRegistrationStatus(RegistrationStatus&& value) { m_registrationStatusHasBeenSet = true; m_registrationStatus = std::move(value); }
    inline RegistrationInformation& WithRegistrationStatus(const RegistrationStatus& value) { SetRegistrationStatus(value); return *this;}
    inline RegistrationInformation& WithRegistrationStatus(RegistrationStatus&& value) { SetRegistrationStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current version number of the registration.</p>
     */
    inline long long GetCurrentVersionNumber() const{ return m_currentVersionNumber; }
    inline bool CurrentVersionNumberHasBeenSet() const { return m_currentVersionNumberHasBeenSet; }
    inline void SetCurrentVersionNumber(long long value) { m_currentVersionNumberHasBeenSet = true; m_currentVersionNumber = value; }
    inline RegistrationInformation& WithCurrentVersionNumber(long long value) { SetCurrentVersionNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the registration that was approved.</p>
     */
    inline long long GetApprovedVersionNumber() const{ return m_approvedVersionNumber; }
    inline bool ApprovedVersionNumberHasBeenSet() const { return m_approvedVersionNumberHasBeenSet; }
    inline void SetApprovedVersionNumber(long long value) { m_approvedVersionNumberHasBeenSet = true; m_approvedVersionNumber = value; }
    inline RegistrationInformation& WithApprovedVersionNumber(long long value) { SetApprovedVersionNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latest version number of the registration that was denied.</p>
     */
    inline long long GetLatestDeniedVersionNumber() const{ return m_latestDeniedVersionNumber; }
    inline bool LatestDeniedVersionNumberHasBeenSet() const { return m_latestDeniedVersionNumberHasBeenSet; }
    inline void SetLatestDeniedVersionNumber(long long value) { m_latestDeniedVersionNumberHasBeenSet = true; m_latestDeniedVersionNumber = value; }
    inline RegistrationInformation& WithLatestDeniedVersionNumber(long long value) { SetLatestDeniedVersionNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata about a given registration which is specific to that registration
     * type.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAdditionalAttributes() const{ return m_additionalAttributes; }
    inline bool AdditionalAttributesHasBeenSet() const { return m_additionalAttributesHasBeenSet; }
    inline void SetAdditionalAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_additionalAttributesHasBeenSet = true; m_additionalAttributes = value; }
    inline void SetAdditionalAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_additionalAttributesHasBeenSet = true; m_additionalAttributes = std::move(value); }
    inline RegistrationInformation& WithAdditionalAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAdditionalAttributes(value); return *this;}
    inline RegistrationInformation& WithAdditionalAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAdditionalAttributes(std::move(value)); return *this;}
    inline RegistrationInformation& AddAdditionalAttributes(const Aws::String& key, const Aws::String& value) { m_additionalAttributesHasBeenSet = true; m_additionalAttributes.emplace(key, value); return *this; }
    inline RegistrationInformation& AddAdditionalAttributes(Aws::String&& key, const Aws::String& value) { m_additionalAttributesHasBeenSet = true; m_additionalAttributes.emplace(std::move(key), value); return *this; }
    inline RegistrationInformation& AddAdditionalAttributes(const Aws::String& key, Aws::String&& value) { m_additionalAttributesHasBeenSet = true; m_additionalAttributes.emplace(key, std::move(value)); return *this; }
    inline RegistrationInformation& AddAdditionalAttributes(Aws::String&& key, Aws::String&& value) { m_additionalAttributesHasBeenSet = true; m_additionalAttributes.emplace(std::move(key), std::move(value)); return *this; }
    inline RegistrationInformation& AddAdditionalAttributes(const char* key, Aws::String&& value) { m_additionalAttributesHasBeenSet = true; m_additionalAttributes.emplace(key, std::move(value)); return *this; }
    inline RegistrationInformation& AddAdditionalAttributes(Aws::String&& key, const char* value) { m_additionalAttributesHasBeenSet = true; m_additionalAttributes.emplace(std::move(key), value); return *this; }
    inline RegistrationInformation& AddAdditionalAttributes(const char* key, const char* value) { m_additionalAttributesHasBeenSet = true; m_additionalAttributes.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time when the registration was created, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = value; }
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::move(value); }
    inline RegistrationInformation& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}
    inline RegistrationInformation& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_registrationArn;
    bool m_registrationArnHasBeenSet = false;

    Aws::String m_registrationId;
    bool m_registrationIdHasBeenSet = false;

    Aws::String m_registrationType;
    bool m_registrationTypeHasBeenSet = false;

    RegistrationStatus m_registrationStatus;
    bool m_registrationStatusHasBeenSet = false;

    long long m_currentVersionNumber;
    bool m_currentVersionNumberHasBeenSet = false;

    long long m_approvedVersionNumber;
    bool m_approvedVersionNumberHasBeenSet = false;

    long long m_latestDeniedVersionNumber;
    bool m_latestDeniedVersionNumberHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_additionalAttributes;
    bool m_additionalAttributesHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp;
    bool m_createdTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
