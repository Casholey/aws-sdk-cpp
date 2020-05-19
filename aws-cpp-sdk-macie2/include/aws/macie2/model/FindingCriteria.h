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
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/macie2/model/CriterionAdditionalProperties.h>
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
namespace Macie2
{
namespace Model
{

  /**
   * <p>Specifies, as a map, one or more property-based conditions that filter the
   * results of a query for findings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/FindingCriteria">AWS
   * API Reference</a></p>
   */
  class AWS_MACIE2_API FindingCriteria
  {
  public:
    FindingCriteria();
    FindingCriteria(Aws::Utils::Json::JsonView jsonValue);
    FindingCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A condition that specifies the property, operator, and value to use to filter
     * the results.</p>
     */
    inline const Aws::Map<Aws::String, CriterionAdditionalProperties>& GetCriterion() const{ return m_criterion; }

    /**
     * <p>A condition that specifies the property, operator, and value to use to filter
     * the results.</p>
     */
    inline bool CriterionHasBeenSet() const { return m_criterionHasBeenSet; }

    /**
     * <p>A condition that specifies the property, operator, and value to use to filter
     * the results.</p>
     */
    inline void SetCriterion(const Aws::Map<Aws::String, CriterionAdditionalProperties>& value) { m_criterionHasBeenSet = true; m_criterion = value; }

    /**
     * <p>A condition that specifies the property, operator, and value to use to filter
     * the results.</p>
     */
    inline void SetCriterion(Aws::Map<Aws::String, CriterionAdditionalProperties>&& value) { m_criterionHasBeenSet = true; m_criterion = std::move(value); }

    /**
     * <p>A condition that specifies the property, operator, and value to use to filter
     * the results.</p>
     */
    inline FindingCriteria& WithCriterion(const Aws::Map<Aws::String, CriterionAdditionalProperties>& value) { SetCriterion(value); return *this;}

    /**
     * <p>A condition that specifies the property, operator, and value to use to filter
     * the results.</p>
     */
    inline FindingCriteria& WithCriterion(Aws::Map<Aws::String, CriterionAdditionalProperties>&& value) { SetCriterion(std::move(value)); return *this;}

    /**
     * <p>A condition that specifies the property, operator, and value to use to filter
     * the results.</p>
     */
    inline FindingCriteria& AddCriterion(const Aws::String& key, const CriterionAdditionalProperties& value) { m_criterionHasBeenSet = true; m_criterion.emplace(key, value); return *this; }

    /**
     * <p>A condition that specifies the property, operator, and value to use to filter
     * the results.</p>
     */
    inline FindingCriteria& AddCriterion(Aws::String&& key, const CriterionAdditionalProperties& value) { m_criterionHasBeenSet = true; m_criterion.emplace(std::move(key), value); return *this; }

    /**
     * <p>A condition that specifies the property, operator, and value to use to filter
     * the results.</p>
     */
    inline FindingCriteria& AddCriterion(const Aws::String& key, CriterionAdditionalProperties&& value) { m_criterionHasBeenSet = true; m_criterion.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A condition that specifies the property, operator, and value to use to filter
     * the results.</p>
     */
    inline FindingCriteria& AddCriterion(Aws::String&& key, CriterionAdditionalProperties&& value) { m_criterionHasBeenSet = true; m_criterion.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A condition that specifies the property, operator, and value to use to filter
     * the results.</p>
     */
    inline FindingCriteria& AddCriterion(const char* key, CriterionAdditionalProperties&& value) { m_criterionHasBeenSet = true; m_criterion.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A condition that specifies the property, operator, and value to use to filter
     * the results.</p>
     */
    inline FindingCriteria& AddCriterion(const char* key, const CriterionAdditionalProperties& value) { m_criterionHasBeenSet = true; m_criterion.emplace(key, value); return *this; }

  private:

    Aws::Map<Aws::String, CriterionAdditionalProperties> m_criterion;
    bool m_criterionHasBeenSet;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws