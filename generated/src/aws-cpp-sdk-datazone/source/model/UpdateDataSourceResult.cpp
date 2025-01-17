﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/UpdateDataSourceResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateDataSourceResult::UpdateDataSourceResult() : 
    m_enableSetting(EnableSetting::NOT_SET),
    m_lastRunStatus(DataSourceRunStatus::NOT_SET),
    m_publishOnImport(false),
    m_retainPermissionsOnRevokeFailure(false),
    m_status(DataSourceStatus::NOT_SET)
{
}

UpdateDataSourceResult::UpdateDataSourceResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : UpdateDataSourceResult()
{
  *this = result;
}

UpdateDataSourceResult& UpdateDataSourceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("assetFormsOutput"))
  {
    Aws::Utils::Array<JsonView> assetFormsOutputJsonList = jsonValue.GetArray("assetFormsOutput");
    for(unsigned assetFormsOutputIndex = 0; assetFormsOutputIndex < assetFormsOutputJsonList.GetLength(); ++assetFormsOutputIndex)
    {
      m_assetFormsOutput.push_back(assetFormsOutputJsonList[assetFormsOutputIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("configuration"))
  {
    m_configuration = jsonValue.GetObject("configuration");

  }

  if(jsonValue.ValueExists("connectionId"))
  {
    m_connectionId = jsonValue.GetString("connectionId");

  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("domainId"))
  {
    m_domainId = jsonValue.GetString("domainId");

  }

  if(jsonValue.ValueExists("enableSetting"))
  {
    m_enableSetting = EnableSettingMapper::GetEnableSettingForName(jsonValue.GetString("enableSetting"));

  }

  if(jsonValue.ValueExists("environmentId"))
  {
    m_environmentId = jsonValue.GetString("environmentId");

  }

  if(jsonValue.ValueExists("errorMessage"))
  {
    m_errorMessage = jsonValue.GetObject("errorMessage");

  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

  }

  if(jsonValue.ValueExists("lastRunAt"))
  {
    m_lastRunAt = jsonValue.GetString("lastRunAt");

  }

  if(jsonValue.ValueExists("lastRunErrorMessage"))
  {
    m_lastRunErrorMessage = jsonValue.GetObject("lastRunErrorMessage");

  }

  if(jsonValue.ValueExists("lastRunStatus"))
  {
    m_lastRunStatus = DataSourceRunStatusMapper::GetDataSourceRunStatusForName(jsonValue.GetString("lastRunStatus"));

  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("projectId"))
  {
    m_projectId = jsonValue.GetString("projectId");

  }

  if(jsonValue.ValueExists("publishOnImport"))
  {
    m_publishOnImport = jsonValue.GetBool("publishOnImport");

  }

  if(jsonValue.ValueExists("recommendation"))
  {
    m_recommendation = jsonValue.GetObject("recommendation");

  }

  if(jsonValue.ValueExists("retainPermissionsOnRevokeFailure"))
  {
    m_retainPermissionsOnRevokeFailure = jsonValue.GetBool("retainPermissionsOnRevokeFailure");

  }

  if(jsonValue.ValueExists("schedule"))
  {
    m_schedule = jsonValue.GetObject("schedule");

  }

  if(jsonValue.ValueExists("selfGrantStatus"))
  {
    m_selfGrantStatus = jsonValue.GetObject("selfGrantStatus");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = DataSourceStatusMapper::GetDataSourceStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = jsonValue.GetString("type");

  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetString("updatedAt");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
