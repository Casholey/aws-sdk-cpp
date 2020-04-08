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

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/accessanalyzer/model/ReasonCode.h>
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
namespace AccessAnalyzer
{
namespace Model
{

  /**
   * <p>Provides more details about the current status of the analyzer. For example,
   * if the creation for the analyzer fails, a <code>Failed</code> status is
   * displayed. For an analyzer with organization as the type, this failure can be
   * due to an issue with creating the service-linked roles required in the member
   * accounts of the AWS organization.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/StatusReason">AWS
   * API Reference</a></p>
   */
  class AWS_ACCESSANALYZER_API StatusReason
  {
  public:
    StatusReason();
    StatusReason(Aws::Utils::Json::JsonView jsonValue);
    StatusReason& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The reason code for the current status of the analyzer.</p>
     */
    inline const ReasonCode& GetCode() const{ return m_code; }

    /**
     * <p>The reason code for the current status of the analyzer.</p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>The reason code for the current status of the analyzer.</p>
     */
    inline void SetCode(const ReasonCode& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>The reason code for the current status of the analyzer.</p>
     */
    inline void SetCode(ReasonCode&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>The reason code for the current status of the analyzer.</p>
     */
    inline StatusReason& WithCode(const ReasonCode& value) { SetCode(value); return *this;}

    /**
     * <p>The reason code for the current status of the analyzer.</p>
     */
    inline StatusReason& WithCode(ReasonCode&& value) { SetCode(std::move(value)); return *this;}

  private:

    ReasonCode m_code;
    bool m_codeHasBeenSet;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws