﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace S3Control
{
namespace Model
{
  class DeleteMultiRegionAccessPointResult
  {
  public:
    AWS_S3CONTROL_API DeleteMultiRegionAccessPointResult();
    AWS_S3CONTROL_API DeleteMultiRegionAccessPointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3CONTROL_API DeleteMultiRegionAccessPointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The request token associated with the request. You can use this token with <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DescribeMultiRegionAccessPointOperation.html">DescribeMultiRegionAccessPointOperation</a>
     * to determine the status of asynchronous requests.</p>
     */
    inline const Aws::String& GetRequestTokenARN() const{ return m_requestTokenARN; }
    inline void SetRequestTokenARN(const Aws::String& value) { m_requestTokenARN = value; }
    inline void SetRequestTokenARN(Aws::String&& value) { m_requestTokenARN = std::move(value); }
    inline void SetRequestTokenARN(const char* value) { m_requestTokenARN.assign(value); }
    inline DeleteMultiRegionAccessPointResult& WithRequestTokenARN(const Aws::String& value) { SetRequestTokenARN(value); return *this;}
    inline DeleteMultiRegionAccessPointResult& WithRequestTokenARN(Aws::String&& value) { SetRequestTokenARN(std::move(value)); return *this;}
    inline DeleteMultiRegionAccessPointResult& WithRequestTokenARN(const char* value) { SetRequestTokenARN(value); return *this;}
    ///@}

    ///@{
    /**
     * AWS Request Id value
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeleteMultiRegionAccessPointResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeleteMultiRegionAccessPointResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeleteMultiRegionAccessPointResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * x-amz-id-2 header value, also known as Host Id
     */
    inline const Aws::String& GetHostId() const{ return m_hostId; }
    inline void SetHostId(const Aws::String& value) { m_hostId = value; }
    inline void SetHostId(Aws::String&& value) { m_hostId = std::move(value); }
    inline void SetHostId(const char* value) { m_hostId.assign(value); }
    inline DeleteMultiRegionAccessPointResult& WithHostId(const Aws::String& value) { SetHostId(value); return *this;}
    inline DeleteMultiRegionAccessPointResult& WithHostId(Aws::String&& value) { SetHostId(std::move(value)); return *this;}
    inline DeleteMultiRegionAccessPointResult& WithHostId(const char* value) { SetHostId(value); return *this;}
    ///@}
  private:

    Aws::String m_requestTokenARN;

    Aws::String m_requestId;

    Aws::String m_hostId;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
