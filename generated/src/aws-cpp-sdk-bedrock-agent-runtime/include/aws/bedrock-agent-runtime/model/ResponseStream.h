﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/AccessDeniedException.h>
#include <aws/bedrock-agent-runtime/model/BadGatewayException.h>
#include <aws/bedrock-agent-runtime/model/PayloadPart.h>
#include <aws/bedrock-agent-runtime/model/ConflictException.h>
#include <aws/bedrock-agent-runtime/model/DependencyFailedException.h>
#include <aws/bedrock-agent-runtime/model/FilePart.h>
#include <aws/bedrock-agent-runtime/model/InternalServerException.h>
#include <aws/bedrock-agent-runtime/model/ModelNotReadyException.h>
#include <aws/bedrock-agent-runtime/model/ResourceNotFoundException.h>
#include <aws/bedrock-agent-runtime/model/ReturnControlPayload.h>
#include <aws/bedrock-agent-runtime/model/ServiceQuotaExceededException.h>
#include <aws/bedrock-agent-runtime/model/ThrottlingException.h>
#include <aws/bedrock-agent-runtime/model/TracePart.h>
#include <aws/bedrock-agent-runtime/model/ValidationException.h>
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
namespace BedrockAgentRuntime
{
namespace Model
{

  /**
   * <p>The response from invoking the agent and associated citations and trace
   * information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/ResponseStream">AWS
   * API Reference</a></p>
   */
  class ResponseStream
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API ResponseStream();
    AWS_BEDROCKAGENTRUNTIME_API ResponseStream(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API ResponseStream& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The request is denied because of missing access permissions. Check your
     * permissions and retry your request.</p>
     */
    inline const AccessDeniedException& GetAccessDeniedException() const{ return m_accessDeniedException; }
    inline bool AccessDeniedExceptionHasBeenSet() const { return m_accessDeniedExceptionHasBeenSet; }
    inline void SetAccessDeniedException(const AccessDeniedException& value) { m_accessDeniedExceptionHasBeenSet = true; m_accessDeniedException = value; }
    inline void SetAccessDeniedException(AccessDeniedException&& value) { m_accessDeniedExceptionHasBeenSet = true; m_accessDeniedException = std::move(value); }
    inline ResponseStream& WithAccessDeniedException(const AccessDeniedException& value) { SetAccessDeniedException(value); return *this;}
    inline ResponseStream& WithAccessDeniedException(AccessDeniedException&& value) { SetAccessDeniedException(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>There was an issue with a dependency due to a server issue. Retry your
     * request.</p>
     */
    inline const BadGatewayException& GetBadGatewayException() const{ return m_badGatewayException; }
    inline bool BadGatewayExceptionHasBeenSet() const { return m_badGatewayExceptionHasBeenSet; }
    inline void SetBadGatewayException(const BadGatewayException& value) { m_badGatewayExceptionHasBeenSet = true; m_badGatewayException = value; }
    inline void SetBadGatewayException(BadGatewayException&& value) { m_badGatewayExceptionHasBeenSet = true; m_badGatewayException = std::move(value); }
    inline ResponseStream& WithBadGatewayException(const BadGatewayException& value) { SetBadGatewayException(value); return *this;}
    inline ResponseStream& WithBadGatewayException(BadGatewayException&& value) { SetBadGatewayException(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains a part of an agent response and citations for it.</p>
     */
    inline const PayloadPart& GetChunk() const{ return m_chunk; }
    inline bool ChunkHasBeenSet() const { return m_chunkHasBeenSet; }
    inline void SetChunk(const PayloadPart& value) { m_chunkHasBeenSet = true; m_chunk = value; }
    inline void SetChunk(PayloadPart&& value) { m_chunkHasBeenSet = true; m_chunk = std::move(value); }
    inline ResponseStream& WithChunk(const PayloadPart& value) { SetChunk(value); return *this;}
    inline ResponseStream& WithChunk(PayloadPart&& value) { SetChunk(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>There was a conflict performing an operation. Resolve the conflict and retry
     * your request.</p>
     */
    inline const ConflictException& GetConflictException() const{ return m_conflictException; }
    inline bool ConflictExceptionHasBeenSet() const { return m_conflictExceptionHasBeenSet; }
    inline void SetConflictException(const ConflictException& value) { m_conflictExceptionHasBeenSet = true; m_conflictException = value; }
    inline void SetConflictException(ConflictException&& value) { m_conflictExceptionHasBeenSet = true; m_conflictException = std::move(value); }
    inline ResponseStream& WithConflictException(const ConflictException& value) { SetConflictException(value); return *this;}
    inline ResponseStream& WithConflictException(ConflictException&& value) { SetConflictException(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>There was an issue with a dependency. Check the resource configurations and
     * retry the request.</p>
     */
    inline const DependencyFailedException& GetDependencyFailedException() const{ return m_dependencyFailedException; }
    inline bool DependencyFailedExceptionHasBeenSet() const { return m_dependencyFailedExceptionHasBeenSet; }
    inline void SetDependencyFailedException(const DependencyFailedException& value) { m_dependencyFailedExceptionHasBeenSet = true; m_dependencyFailedException = value; }
    inline void SetDependencyFailedException(DependencyFailedException&& value) { m_dependencyFailedExceptionHasBeenSet = true; m_dependencyFailedException = std::move(value); }
    inline ResponseStream& WithDependencyFailedException(const DependencyFailedException& value) { SetDependencyFailedException(value); return *this;}
    inline ResponseStream& WithDependencyFailedException(DependencyFailedException&& value) { SetDependencyFailedException(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains intermediate response for code interpreter if any files have been
     * generated.</p>
     */
    inline const FilePart& GetFiles() const{ return m_files; }
    inline bool FilesHasBeenSet() const { return m_filesHasBeenSet; }
    inline void SetFiles(const FilePart& value) { m_filesHasBeenSet = true; m_files = value; }
    inline void SetFiles(FilePart&& value) { m_filesHasBeenSet = true; m_files = std::move(value); }
    inline ResponseStream& WithFiles(const FilePart& value) { SetFiles(value); return *this;}
    inline ResponseStream& WithFiles(FilePart&& value) { SetFiles(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An internal server error occurred. Retry your request.</p>
     */
    inline const InternalServerException& GetInternalServerException() const{ return m_internalServerException; }
    inline bool InternalServerExceptionHasBeenSet() const { return m_internalServerExceptionHasBeenSet; }
    inline void SetInternalServerException(const InternalServerException& value) { m_internalServerExceptionHasBeenSet = true; m_internalServerException = value; }
    inline void SetInternalServerException(InternalServerException&& value) { m_internalServerExceptionHasBeenSet = true; m_internalServerException = std::move(value); }
    inline ResponseStream& WithInternalServerException(const InternalServerException& value) { SetInternalServerException(value); return *this;}
    inline ResponseStream& WithInternalServerException(InternalServerException&& value) { SetInternalServerException(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The model specified in the request is not ready to serve Inference requests.
     * The AWS SDK will automatically retry the operation up to 5 times. For
     * information about configuring automatic retries, see <a
     * href="https://docs.aws.amazon.com/sdkref/latest/guide/feature-retry-behavior.html">Retry
     * behavior</a> in the <i>AWS SDKs and Tools</i> reference guide. </p>
     */
    inline const ModelNotReadyException& GetModelNotReadyException() const{ return m_modelNotReadyException; }
    inline bool ModelNotReadyExceptionHasBeenSet() const { return m_modelNotReadyExceptionHasBeenSet; }
    inline void SetModelNotReadyException(const ModelNotReadyException& value) { m_modelNotReadyExceptionHasBeenSet = true; m_modelNotReadyException = value; }
    inline void SetModelNotReadyException(ModelNotReadyException&& value) { m_modelNotReadyExceptionHasBeenSet = true; m_modelNotReadyException = std::move(value); }
    inline ResponseStream& WithModelNotReadyException(const ModelNotReadyException& value) { SetModelNotReadyException(value); return *this;}
    inline ResponseStream& WithModelNotReadyException(ModelNotReadyException&& value) { SetModelNotReadyException(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specified resource Amazon Resource Name (ARN) was not found. Check the
     * Amazon Resource Name (ARN) and try your request again.</p>
     */
    inline const ResourceNotFoundException& GetResourceNotFoundException() const{ return m_resourceNotFoundException; }
    inline bool ResourceNotFoundExceptionHasBeenSet() const { return m_resourceNotFoundExceptionHasBeenSet; }
    inline void SetResourceNotFoundException(const ResourceNotFoundException& value) { m_resourceNotFoundExceptionHasBeenSet = true; m_resourceNotFoundException = value; }
    inline void SetResourceNotFoundException(ResourceNotFoundException&& value) { m_resourceNotFoundExceptionHasBeenSet = true; m_resourceNotFoundException = std::move(value); }
    inline ResponseStream& WithResourceNotFoundException(const ResourceNotFoundException& value) { SetResourceNotFoundException(value); return *this;}
    inline ResponseStream& WithResourceNotFoundException(ResourceNotFoundException&& value) { SetResourceNotFoundException(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the parameters and information that the agent elicited from the
     * customer to carry out an action. This information is returned to the system and
     * can be used in your own setup for fulfilling the action.</p>
     */
    inline const ReturnControlPayload& GetReturnControl() const{ return m_returnControl; }
    inline bool ReturnControlHasBeenSet() const { return m_returnControlHasBeenSet; }
    inline void SetReturnControl(const ReturnControlPayload& value) { m_returnControlHasBeenSet = true; m_returnControl = value; }
    inline void SetReturnControl(ReturnControlPayload&& value) { m_returnControlHasBeenSet = true; m_returnControl = std::move(value); }
    inline ResponseStream& WithReturnControl(const ReturnControlPayload& value) { SetReturnControl(value); return *this;}
    inline ResponseStream& WithReturnControl(ReturnControlPayload&& value) { SetReturnControl(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of requests exceeds the service quota. Resubmit your request
     * later.</p>
     */
    inline const ServiceQuotaExceededException& GetServiceQuotaExceededException() const{ return m_serviceQuotaExceededException; }
    inline bool ServiceQuotaExceededExceptionHasBeenSet() const { return m_serviceQuotaExceededExceptionHasBeenSet; }
    inline void SetServiceQuotaExceededException(const ServiceQuotaExceededException& value) { m_serviceQuotaExceededExceptionHasBeenSet = true; m_serviceQuotaExceededException = value; }
    inline void SetServiceQuotaExceededException(ServiceQuotaExceededException&& value) { m_serviceQuotaExceededExceptionHasBeenSet = true; m_serviceQuotaExceededException = std::move(value); }
    inline ResponseStream& WithServiceQuotaExceededException(const ServiceQuotaExceededException& value) { SetServiceQuotaExceededException(value); return *this;}
    inline ResponseStream& WithServiceQuotaExceededException(ServiceQuotaExceededException&& value) { SetServiceQuotaExceededException(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of requests exceeds the limit. Resubmit your request later.</p>
     */
    inline const ThrottlingException& GetThrottlingException() const{ return m_throttlingException; }
    inline bool ThrottlingExceptionHasBeenSet() const { return m_throttlingExceptionHasBeenSet; }
    inline void SetThrottlingException(const ThrottlingException& value) { m_throttlingExceptionHasBeenSet = true; m_throttlingException = value; }
    inline void SetThrottlingException(ThrottlingException&& value) { m_throttlingExceptionHasBeenSet = true; m_throttlingException = std::move(value); }
    inline ResponseStream& WithThrottlingException(const ThrottlingException& value) { SetThrottlingException(value); return *this;}
    inline ResponseStream& WithThrottlingException(ThrottlingException&& value) { SetThrottlingException(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the agent and session, alongside the agent's
     * reasoning process and results from calling actions and querying knowledge bases
     * and metadata about the trace. You can use the trace to understand how the agent
     * arrived at the response it provided the customer. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/trace-events.html">Trace
     * events</a>.</p>
     */
    inline const TracePart& GetTrace() const{ return m_trace; }
    inline bool TraceHasBeenSet() const { return m_traceHasBeenSet; }
    inline void SetTrace(const TracePart& value) { m_traceHasBeenSet = true; m_trace = value; }
    inline void SetTrace(TracePart&& value) { m_traceHasBeenSet = true; m_trace = std::move(value); }
    inline ResponseStream& WithTrace(const TracePart& value) { SetTrace(value); return *this;}
    inline ResponseStream& WithTrace(TracePart&& value) { SetTrace(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Input validation failed. Check your request parameters and retry the
     * request.</p>
     */
    inline const ValidationException& GetValidationException() const{ return m_validationException; }
    inline bool ValidationExceptionHasBeenSet() const { return m_validationExceptionHasBeenSet; }
    inline void SetValidationException(const ValidationException& value) { m_validationExceptionHasBeenSet = true; m_validationException = value; }
    inline void SetValidationException(ValidationException&& value) { m_validationExceptionHasBeenSet = true; m_validationException = std::move(value); }
    inline ResponseStream& WithValidationException(const ValidationException& value) { SetValidationException(value); return *this;}
    inline ResponseStream& WithValidationException(ValidationException&& value) { SetValidationException(std::move(value)); return *this;}
    ///@}
  private:

    AccessDeniedException m_accessDeniedException;
    bool m_accessDeniedExceptionHasBeenSet = false;

    BadGatewayException m_badGatewayException;
    bool m_badGatewayExceptionHasBeenSet = false;

    PayloadPart m_chunk;
    bool m_chunkHasBeenSet = false;

    ConflictException m_conflictException;
    bool m_conflictExceptionHasBeenSet = false;

    DependencyFailedException m_dependencyFailedException;
    bool m_dependencyFailedExceptionHasBeenSet = false;

    FilePart m_files;
    bool m_filesHasBeenSet = false;

    InternalServerException m_internalServerException;
    bool m_internalServerExceptionHasBeenSet = false;

    ModelNotReadyException m_modelNotReadyException;
    bool m_modelNotReadyExceptionHasBeenSet = false;

    ResourceNotFoundException m_resourceNotFoundException;
    bool m_resourceNotFoundExceptionHasBeenSet = false;

    ReturnControlPayload m_returnControl;
    bool m_returnControlHasBeenSet = false;

    ServiceQuotaExceededException m_serviceQuotaExceededException;
    bool m_serviceQuotaExceededExceptionHasBeenSet = false;

    ThrottlingException m_throttlingException;
    bool m_throttlingExceptionHasBeenSet = false;

    TracePart m_trace;
    bool m_traceHasBeenSet = false;

    ValidationException m_validationException;
    bool m_validationExceptionHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
