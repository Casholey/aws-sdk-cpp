﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/model/MultiRegionEndpoint.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SESV2
{
namespace Model
{
  /**
   * <p>The following elements are returned by the service.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListMultiRegionEndpointsResponse">AWS
   * API Reference</a></p>
   */
  class ListMultiRegionEndpointsResult
  {
  public:
    AWS_SESV2_API ListMultiRegionEndpointsResult();
    AWS_SESV2_API ListMultiRegionEndpointsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SESV2_API ListMultiRegionEndpointsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array that contains key multi-region endpoint (global-endpoint)
     * properties.</p>
     */
    inline const Aws::Vector<MultiRegionEndpoint>& GetMultiRegionEndpoints() const{ return m_multiRegionEndpoints; }
    inline void SetMultiRegionEndpoints(const Aws::Vector<MultiRegionEndpoint>& value) { m_multiRegionEndpoints = value; }
    inline void SetMultiRegionEndpoints(Aws::Vector<MultiRegionEndpoint>&& value) { m_multiRegionEndpoints = std::move(value); }
    inline ListMultiRegionEndpointsResult& WithMultiRegionEndpoints(const Aws::Vector<MultiRegionEndpoint>& value) { SetMultiRegionEndpoints(value); return *this;}
    inline ListMultiRegionEndpointsResult& WithMultiRegionEndpoints(Aws::Vector<MultiRegionEndpoint>&& value) { SetMultiRegionEndpoints(std::move(value)); return *this;}
    inline ListMultiRegionEndpointsResult& AddMultiRegionEndpoints(const MultiRegionEndpoint& value) { m_multiRegionEndpoints.push_back(value); return *this; }
    inline ListMultiRegionEndpointsResult& AddMultiRegionEndpoints(MultiRegionEndpoint&& value) { m_multiRegionEndpoints.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token indicating that there are additional multi-region endpoints
     * (global-endpoints) available to be listed. Pass this token to a subsequent
     * <code>ListMultiRegionEndpoints</code> call to retrieve the next page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListMultiRegionEndpointsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListMultiRegionEndpointsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListMultiRegionEndpointsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListMultiRegionEndpointsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListMultiRegionEndpointsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListMultiRegionEndpointsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<MultiRegionEndpoint> m_multiRegionEndpoints;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
