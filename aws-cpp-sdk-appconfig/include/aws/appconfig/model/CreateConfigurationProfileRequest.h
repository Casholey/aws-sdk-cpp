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
#include <aws/appconfig/AppConfig_EXPORTS.h>
#include <aws/appconfig/AppConfigRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/appconfig/model/Validator.h>
#include <utility>

namespace Aws
{
namespace AppConfig
{
namespace Model
{

  /**
   */
  class AWS_APPCONFIG_API CreateConfigurationProfileRequest : public AppConfigRequest
  {
  public:
    CreateConfigurationProfileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateConfigurationProfile"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The application ID.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The application ID.</p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p>The application ID.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The application ID.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p>The application ID.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p>The application ID.</p>
     */
    inline CreateConfigurationProfileRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The application ID.</p>
     */
    inline CreateConfigurationProfileRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The application ID.</p>
     */
    inline CreateConfigurationProfileRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>A name for the configuration profile.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A name for the configuration profile.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A name for the configuration profile.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A name for the configuration profile.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A name for the configuration profile.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A name for the configuration profile.</p>
     */
    inline CreateConfigurationProfileRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A name for the configuration profile.</p>
     */
    inline CreateConfigurationProfileRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A name for the configuration profile.</p>
     */
    inline CreateConfigurationProfileRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A description of the configuration profile.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the configuration profile.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the configuration profile.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the configuration profile.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the configuration profile.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the configuration profile.</p>
     */
    inline CreateConfigurationProfileRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the configuration profile.</p>
     */
    inline CreateConfigurationProfileRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the configuration profile.</p>
     */
    inline CreateConfigurationProfileRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A URI to locate the configuration. You can specify either a Systems Manager
     * (SSM) document or an SSM Parameter Store parameter. For an SSM document, specify
     * either the document name in the format <code>ssm-document://&lt;Document
     * name&gt;</code> or the Amazon Resource Name (ARN). For a parameter, specify
     * either the parameter name in the format <code>ssm-parameter://&lt;Parameter
     * name&gt;</code> or the ARN.</p>
     */
    inline const Aws::String& GetLocationUri() const{ return m_locationUri; }

    /**
     * <p>A URI to locate the configuration. You can specify either a Systems Manager
     * (SSM) document or an SSM Parameter Store parameter. For an SSM document, specify
     * either the document name in the format <code>ssm-document://&lt;Document
     * name&gt;</code> or the Amazon Resource Name (ARN). For a parameter, specify
     * either the parameter name in the format <code>ssm-parameter://&lt;Parameter
     * name&gt;</code> or the ARN.</p>
     */
    inline bool LocationUriHasBeenSet() const { return m_locationUriHasBeenSet; }

    /**
     * <p>A URI to locate the configuration. You can specify either a Systems Manager
     * (SSM) document or an SSM Parameter Store parameter. For an SSM document, specify
     * either the document name in the format <code>ssm-document://&lt;Document
     * name&gt;</code> or the Amazon Resource Name (ARN). For a parameter, specify
     * either the parameter name in the format <code>ssm-parameter://&lt;Parameter
     * name&gt;</code> or the ARN.</p>
     */
    inline void SetLocationUri(const Aws::String& value) { m_locationUriHasBeenSet = true; m_locationUri = value; }

    /**
     * <p>A URI to locate the configuration. You can specify either a Systems Manager
     * (SSM) document or an SSM Parameter Store parameter. For an SSM document, specify
     * either the document name in the format <code>ssm-document://&lt;Document
     * name&gt;</code> or the Amazon Resource Name (ARN). For a parameter, specify
     * either the parameter name in the format <code>ssm-parameter://&lt;Parameter
     * name&gt;</code> or the ARN.</p>
     */
    inline void SetLocationUri(Aws::String&& value) { m_locationUriHasBeenSet = true; m_locationUri = std::move(value); }

    /**
     * <p>A URI to locate the configuration. You can specify either a Systems Manager
     * (SSM) document or an SSM Parameter Store parameter. For an SSM document, specify
     * either the document name in the format <code>ssm-document://&lt;Document
     * name&gt;</code> or the Amazon Resource Name (ARN). For a parameter, specify
     * either the parameter name in the format <code>ssm-parameter://&lt;Parameter
     * name&gt;</code> or the ARN.</p>
     */
    inline void SetLocationUri(const char* value) { m_locationUriHasBeenSet = true; m_locationUri.assign(value); }

    /**
     * <p>A URI to locate the configuration. You can specify either a Systems Manager
     * (SSM) document or an SSM Parameter Store parameter. For an SSM document, specify
     * either the document name in the format <code>ssm-document://&lt;Document
     * name&gt;</code> or the Amazon Resource Name (ARN). For a parameter, specify
     * either the parameter name in the format <code>ssm-parameter://&lt;Parameter
     * name&gt;</code> or the ARN.</p>
     */
    inline CreateConfigurationProfileRequest& WithLocationUri(const Aws::String& value) { SetLocationUri(value); return *this;}

    /**
     * <p>A URI to locate the configuration. You can specify either a Systems Manager
     * (SSM) document or an SSM Parameter Store parameter. For an SSM document, specify
     * either the document name in the format <code>ssm-document://&lt;Document
     * name&gt;</code> or the Amazon Resource Name (ARN). For a parameter, specify
     * either the parameter name in the format <code>ssm-parameter://&lt;Parameter
     * name&gt;</code> or the ARN.</p>
     */
    inline CreateConfigurationProfileRequest& WithLocationUri(Aws::String&& value) { SetLocationUri(std::move(value)); return *this;}

    /**
     * <p>A URI to locate the configuration. You can specify either a Systems Manager
     * (SSM) document or an SSM Parameter Store parameter. For an SSM document, specify
     * either the document name in the format <code>ssm-document://&lt;Document
     * name&gt;</code> or the Amazon Resource Name (ARN). For a parameter, specify
     * either the parameter name in the format <code>ssm-parameter://&lt;Parameter
     * name&gt;</code> or the ARN.</p>
     */
    inline CreateConfigurationProfileRequest& WithLocationUri(const char* value) { SetLocationUri(value); return *this;}


    /**
     * <p>The ARN of an IAM role with permission to access the configuration at the
     * specified LocationUri.</p>
     */
    inline const Aws::String& GetRetrievalRoleArn() const{ return m_retrievalRoleArn; }

    /**
     * <p>The ARN of an IAM role with permission to access the configuration at the
     * specified LocationUri.</p>
     */
    inline bool RetrievalRoleArnHasBeenSet() const { return m_retrievalRoleArnHasBeenSet; }

    /**
     * <p>The ARN of an IAM role with permission to access the configuration at the
     * specified LocationUri.</p>
     */
    inline void SetRetrievalRoleArn(const Aws::String& value) { m_retrievalRoleArnHasBeenSet = true; m_retrievalRoleArn = value; }

    /**
     * <p>The ARN of an IAM role with permission to access the configuration at the
     * specified LocationUri.</p>
     */
    inline void SetRetrievalRoleArn(Aws::String&& value) { m_retrievalRoleArnHasBeenSet = true; m_retrievalRoleArn = std::move(value); }

    /**
     * <p>The ARN of an IAM role with permission to access the configuration at the
     * specified LocationUri.</p>
     */
    inline void SetRetrievalRoleArn(const char* value) { m_retrievalRoleArnHasBeenSet = true; m_retrievalRoleArn.assign(value); }

    /**
     * <p>The ARN of an IAM role with permission to access the configuration at the
     * specified LocationUri.</p>
     */
    inline CreateConfigurationProfileRequest& WithRetrievalRoleArn(const Aws::String& value) { SetRetrievalRoleArn(value); return *this;}

    /**
     * <p>The ARN of an IAM role with permission to access the configuration at the
     * specified LocationUri.</p>
     */
    inline CreateConfigurationProfileRequest& WithRetrievalRoleArn(Aws::String&& value) { SetRetrievalRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of an IAM role with permission to access the configuration at the
     * specified LocationUri.</p>
     */
    inline CreateConfigurationProfileRequest& WithRetrievalRoleArn(const char* value) { SetRetrievalRoleArn(value); return *this;}


    /**
     * <p>A list of methods for validating the configuration.</p>
     */
    inline const Aws::Vector<Validator>& GetValidators() const{ return m_validators; }

    /**
     * <p>A list of methods for validating the configuration.</p>
     */
    inline bool ValidatorsHasBeenSet() const { return m_validatorsHasBeenSet; }

    /**
     * <p>A list of methods for validating the configuration.</p>
     */
    inline void SetValidators(const Aws::Vector<Validator>& value) { m_validatorsHasBeenSet = true; m_validators = value; }

    /**
     * <p>A list of methods for validating the configuration.</p>
     */
    inline void SetValidators(Aws::Vector<Validator>&& value) { m_validatorsHasBeenSet = true; m_validators = std::move(value); }

    /**
     * <p>A list of methods for validating the configuration.</p>
     */
    inline CreateConfigurationProfileRequest& WithValidators(const Aws::Vector<Validator>& value) { SetValidators(value); return *this;}

    /**
     * <p>A list of methods for validating the configuration.</p>
     */
    inline CreateConfigurationProfileRequest& WithValidators(Aws::Vector<Validator>&& value) { SetValidators(std::move(value)); return *this;}

    /**
     * <p>A list of methods for validating the configuration.</p>
     */
    inline CreateConfigurationProfileRequest& AddValidators(const Validator& value) { m_validatorsHasBeenSet = true; m_validators.push_back(value); return *this; }

    /**
     * <p>A list of methods for validating the configuration.</p>
     */
    inline CreateConfigurationProfileRequest& AddValidators(Validator&& value) { m_validatorsHasBeenSet = true; m_validators.push_back(std::move(value)); return *this; }


    /**
     * <p>Metadata to assign to the configuration profile. Tags help organize and
     * categorize your AppConfig resources. Each tag consists of a key and an optional
     * value, both of which you define.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Metadata to assign to the configuration profile. Tags help organize and
     * categorize your AppConfig resources. Each tag consists of a key and an optional
     * value, both of which you define.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Metadata to assign to the configuration profile. Tags help organize and
     * categorize your AppConfig resources. Each tag consists of a key and an optional
     * value, both of which you define.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Metadata to assign to the configuration profile. Tags help organize and
     * categorize your AppConfig resources. Each tag consists of a key and an optional
     * value, both of which you define.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Metadata to assign to the configuration profile. Tags help organize and
     * categorize your AppConfig resources. Each tag consists of a key and an optional
     * value, both of which you define.</p>
     */
    inline CreateConfigurationProfileRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Metadata to assign to the configuration profile. Tags help organize and
     * categorize your AppConfig resources. Each tag consists of a key and an optional
     * value, both of which you define.</p>
     */
    inline CreateConfigurationProfileRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Metadata to assign to the configuration profile. Tags help organize and
     * categorize your AppConfig resources. Each tag consists of a key and an optional
     * value, both of which you define.</p>
     */
    inline CreateConfigurationProfileRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Metadata to assign to the configuration profile. Tags help organize and
     * categorize your AppConfig resources. Each tag consists of a key and an optional
     * value, both of which you define.</p>
     */
    inline CreateConfigurationProfileRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Metadata to assign to the configuration profile. Tags help organize and
     * categorize your AppConfig resources. Each tag consists of a key and an optional
     * value, both of which you define.</p>
     */
    inline CreateConfigurationProfileRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Metadata to assign to the configuration profile. Tags help organize and
     * categorize your AppConfig resources. Each tag consists of a key and an optional
     * value, both of which you define.</p>
     */
    inline CreateConfigurationProfileRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Metadata to assign to the configuration profile. Tags help organize and
     * categorize your AppConfig resources. Each tag consists of a key and an optional
     * value, both of which you define.</p>
     */
    inline CreateConfigurationProfileRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Metadata to assign to the configuration profile. Tags help organize and
     * categorize your AppConfig resources. Each tag consists of a key and an optional
     * value, both of which you define.</p>
     */
    inline CreateConfigurationProfileRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Metadata to assign to the configuration profile. Tags help organize and
     * categorize your AppConfig resources. Each tag consists of a key and an optional
     * value, both of which you define.</p>
     */
    inline CreateConfigurationProfileRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_locationUri;
    bool m_locationUriHasBeenSet;

    Aws::String m_retrievalRoleArn;
    bool m_retrievalRoleArnHasBeenSet;

    Aws::Vector<Validator> m_validators;
    bool m_validatorsHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace AppConfig
} // namespace Aws