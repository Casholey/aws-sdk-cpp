﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/GetImageBlockPublicAccessStateResponse.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::EC2::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

GetImageBlockPublicAccessStateResponse::GetImageBlockPublicAccessStateResponse() : 
    m_managedBy(ManagedBy::NOT_SET)
{
}

GetImageBlockPublicAccessStateResponse::GetImageBlockPublicAccessStateResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
  : GetImageBlockPublicAccessStateResponse()
{
  *this = result;
}

GetImageBlockPublicAccessStateResponse& GetImageBlockPublicAccessStateResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "GetImageBlockPublicAccessStateResponse"))
  {
    resultNode = rootNode.FirstChild("GetImageBlockPublicAccessStateResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode imageBlockPublicAccessStateNode = resultNode.FirstChild("imageBlockPublicAccessState");
    if(!imageBlockPublicAccessStateNode.IsNull())
    {
      m_imageBlockPublicAccessState = Aws::Utils::Xml::DecodeEscapedXmlText(imageBlockPublicAccessStateNode.GetText());
    }
    XmlNode managedByNode = resultNode.FirstChild("managedBy");
    if(!managedByNode.IsNull())
    {
      m_managedBy = ManagedByMapper::GetManagedByForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(managedByNode.GetText()).c_str()).c_str());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::GetImageBlockPublicAccessStateResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
