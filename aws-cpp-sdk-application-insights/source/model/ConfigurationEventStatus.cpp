﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/application-insights/model/ConfigurationEventStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ApplicationInsights
  {
    namespace Model
    {
      namespace ConfigurationEventStatusMapper
      {

        static const int INFO_HASH = HashingUtils::HashString("INFO");
        static const int WARN_HASH = HashingUtils::HashString("WARN");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");


        ConfigurationEventStatus GetConfigurationEventStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INFO_HASH)
          {
            return ConfigurationEventStatus::INFO;
          }
          else if (hashCode == WARN_HASH)
          {
            return ConfigurationEventStatus::WARN;
          }
          else if (hashCode == ERROR__HASH)
          {
            return ConfigurationEventStatus::ERROR_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConfigurationEventStatus>(hashCode);
          }

          return ConfigurationEventStatus::NOT_SET;
        }

        Aws::String GetNameForConfigurationEventStatus(ConfigurationEventStatus enumValue)
        {
          switch(enumValue)
          {
          case ConfigurationEventStatus::INFO:
            return "INFO";
          case ConfigurationEventStatus::WARN:
            return "WARN";
          case ConfigurationEventStatus::ERROR_:
            return "ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConfigurationEventStatusMapper
    } // namespace Model
  } // namespace ApplicationInsights
} // namespace Aws