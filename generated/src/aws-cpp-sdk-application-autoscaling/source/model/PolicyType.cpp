﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-autoscaling/model/PolicyType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ApplicationAutoScaling
  {
    namespace Model
    {
      namespace PolicyTypeMapper
      {

        static const int StepScaling_HASH = HashingUtils::HashString("StepScaling");
        static const int TargetTrackingScaling_HASH = HashingUtils::HashString("TargetTrackingScaling");
        static const int PredictiveScaling_HASH = HashingUtils::HashString("PredictiveScaling");


        PolicyType GetPolicyTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == StepScaling_HASH)
          {
            return PolicyType::StepScaling;
          }
          else if (hashCode == TargetTrackingScaling_HASH)
          {
            return PolicyType::TargetTrackingScaling;
          }
          else if (hashCode == PredictiveScaling_HASH)
          {
            return PolicyType::PredictiveScaling;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PolicyType>(hashCode);
          }

          return PolicyType::NOT_SET;
        }

        Aws::String GetNameForPolicyType(PolicyType enumValue)
        {
          switch(enumValue)
          {
          case PolicyType::NOT_SET:
            return {};
          case PolicyType::StepScaling:
            return "StepScaling";
          case PolicyType::TargetTrackingScaling:
            return "TargetTrackingScaling";
          case PolicyType::PredictiveScaling:
            return "PredictiveScaling";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PolicyTypeMapper
    } // namespace Model
  } // namespace ApplicationAutoScaling
} // namespace Aws
