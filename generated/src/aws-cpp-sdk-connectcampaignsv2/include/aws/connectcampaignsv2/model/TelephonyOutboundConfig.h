﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaignsv2/ConnectCampaignsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connectcampaignsv2/model/AnswerMachineDetectionConfig.h>
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
namespace ConnectCampaignsV2
{
namespace Model
{

  /**
   * <p>Default Telephony Outbound config</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/TelephonyOutboundConfig">AWS
   * API Reference</a></p>
   */
  class TelephonyOutboundConfig
  {
  public:
    AWS_CONNECTCAMPAIGNSV2_API TelephonyOutboundConfig();
    AWS_CONNECTCAMPAIGNSV2_API TelephonyOutboundConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API TelephonyOutboundConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetConnectContactFlowId() const{ return m_connectContactFlowId; }
    inline bool ConnectContactFlowIdHasBeenSet() const { return m_connectContactFlowIdHasBeenSet; }
    inline void SetConnectContactFlowId(const Aws::String& value) { m_connectContactFlowIdHasBeenSet = true; m_connectContactFlowId = value; }
    inline void SetConnectContactFlowId(Aws::String&& value) { m_connectContactFlowIdHasBeenSet = true; m_connectContactFlowId = std::move(value); }
    inline void SetConnectContactFlowId(const char* value) { m_connectContactFlowIdHasBeenSet = true; m_connectContactFlowId.assign(value); }
    inline TelephonyOutboundConfig& WithConnectContactFlowId(const Aws::String& value) { SetConnectContactFlowId(value); return *this;}
    inline TelephonyOutboundConfig& WithConnectContactFlowId(Aws::String&& value) { SetConnectContactFlowId(std::move(value)); return *this;}
    inline TelephonyOutboundConfig& WithConnectContactFlowId(const char* value) { SetConnectContactFlowId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetConnectSourcePhoneNumber() const{ return m_connectSourcePhoneNumber; }
    inline bool ConnectSourcePhoneNumberHasBeenSet() const { return m_connectSourcePhoneNumberHasBeenSet; }
    inline void SetConnectSourcePhoneNumber(const Aws::String& value) { m_connectSourcePhoneNumberHasBeenSet = true; m_connectSourcePhoneNumber = value; }
    inline void SetConnectSourcePhoneNumber(Aws::String&& value) { m_connectSourcePhoneNumberHasBeenSet = true; m_connectSourcePhoneNumber = std::move(value); }
    inline void SetConnectSourcePhoneNumber(const char* value) { m_connectSourcePhoneNumberHasBeenSet = true; m_connectSourcePhoneNumber.assign(value); }
    inline TelephonyOutboundConfig& WithConnectSourcePhoneNumber(const Aws::String& value) { SetConnectSourcePhoneNumber(value); return *this;}
    inline TelephonyOutboundConfig& WithConnectSourcePhoneNumber(Aws::String&& value) { SetConnectSourcePhoneNumber(std::move(value)); return *this;}
    inline TelephonyOutboundConfig& WithConnectSourcePhoneNumber(const char* value) { SetConnectSourcePhoneNumber(value); return *this;}
    ///@}

    ///@{
    
    inline const AnswerMachineDetectionConfig& GetAnswerMachineDetectionConfig() const{ return m_answerMachineDetectionConfig; }
    inline bool AnswerMachineDetectionConfigHasBeenSet() const { return m_answerMachineDetectionConfigHasBeenSet; }
    inline void SetAnswerMachineDetectionConfig(const AnswerMachineDetectionConfig& value) { m_answerMachineDetectionConfigHasBeenSet = true; m_answerMachineDetectionConfig = value; }
    inline void SetAnswerMachineDetectionConfig(AnswerMachineDetectionConfig&& value) { m_answerMachineDetectionConfigHasBeenSet = true; m_answerMachineDetectionConfig = std::move(value); }
    inline TelephonyOutboundConfig& WithAnswerMachineDetectionConfig(const AnswerMachineDetectionConfig& value) { SetAnswerMachineDetectionConfig(value); return *this;}
    inline TelephonyOutboundConfig& WithAnswerMachineDetectionConfig(AnswerMachineDetectionConfig&& value) { SetAnswerMachineDetectionConfig(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_connectContactFlowId;
    bool m_connectContactFlowIdHasBeenSet = false;

    Aws::String m_connectSourcePhoneNumber;
    bool m_connectSourcePhoneNumberHasBeenSet = false;

    AnswerMachineDetectionConfig m_answerMachineDetectionConfig;
    bool m_answerMachineDetectionConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
