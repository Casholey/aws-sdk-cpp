﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/iotfleetwise/model/VehicleAssociationBehavior.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotfleetwise/model/Tag.h>
#include <aws/iotfleetwise/model/StateTemplateAssociation.h>
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
namespace IoTFleetWise
{
namespace Model
{

  /**
   * <p>Information about the vehicle to create.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/CreateVehicleRequestItem">AWS
   * API Reference</a></p>
   */
  class CreateVehicleRequestItem
  {
  public:
    AWS_IOTFLEETWISE_API CreateVehicleRequestItem();
    AWS_IOTFLEETWISE_API CreateVehicleRequestItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API CreateVehicleRequestItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique ID of the vehicle to create.</p>
     */
    inline const Aws::String& GetVehicleName() const{ return m_vehicleName; }
    inline bool VehicleNameHasBeenSet() const { return m_vehicleNameHasBeenSet; }
    inline void SetVehicleName(const Aws::String& value) { m_vehicleNameHasBeenSet = true; m_vehicleName = value; }
    inline void SetVehicleName(Aws::String&& value) { m_vehicleNameHasBeenSet = true; m_vehicleName = std::move(value); }
    inline void SetVehicleName(const char* value) { m_vehicleNameHasBeenSet = true; m_vehicleName.assign(value); }
    inline CreateVehicleRequestItem& WithVehicleName(const Aws::String& value) { SetVehicleName(value); return *this;}
    inline CreateVehicleRequestItem& WithVehicleName(Aws::String&& value) { SetVehicleName(std::move(value)); return *this;}
    inline CreateVehicleRequestItem& WithVehicleName(const char* value) { SetVehicleName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the vehicle model (model manifest) to create the vehicle from.</p>
     */
    inline const Aws::String& GetModelManifestArn() const{ return m_modelManifestArn; }
    inline bool ModelManifestArnHasBeenSet() const { return m_modelManifestArnHasBeenSet; }
    inline void SetModelManifestArn(const Aws::String& value) { m_modelManifestArnHasBeenSet = true; m_modelManifestArn = value; }
    inline void SetModelManifestArn(Aws::String&& value) { m_modelManifestArnHasBeenSet = true; m_modelManifestArn = std::move(value); }
    inline void SetModelManifestArn(const char* value) { m_modelManifestArnHasBeenSet = true; m_modelManifestArn.assign(value); }
    inline CreateVehicleRequestItem& WithModelManifestArn(const Aws::String& value) { SetModelManifestArn(value); return *this;}
    inline CreateVehicleRequestItem& WithModelManifestArn(Aws::String&& value) { SetModelManifestArn(std::move(value)); return *this;}
    inline CreateVehicleRequestItem& WithModelManifestArn(const char* value) { SetModelManifestArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of a decoder manifest associated with the
     * vehicle to create. </p>
     */
    inline const Aws::String& GetDecoderManifestArn() const{ return m_decoderManifestArn; }
    inline bool DecoderManifestArnHasBeenSet() const { return m_decoderManifestArnHasBeenSet; }
    inline void SetDecoderManifestArn(const Aws::String& value) { m_decoderManifestArnHasBeenSet = true; m_decoderManifestArn = value; }
    inline void SetDecoderManifestArn(Aws::String&& value) { m_decoderManifestArnHasBeenSet = true; m_decoderManifestArn = std::move(value); }
    inline void SetDecoderManifestArn(const char* value) { m_decoderManifestArnHasBeenSet = true; m_decoderManifestArn.assign(value); }
    inline CreateVehicleRequestItem& WithDecoderManifestArn(const Aws::String& value) { SetDecoderManifestArn(value); return *this;}
    inline CreateVehicleRequestItem& WithDecoderManifestArn(Aws::String&& value) { SetDecoderManifestArn(std::move(value)); return *this;}
    inline CreateVehicleRequestItem& WithDecoderManifestArn(const char* value) { SetDecoderManifestArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Static information about a vehicle in a key-value pair. For example:
     * <code>"engine Type"</code> : <code>"v6"</code> </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }
    inline CreateVehicleRequestItem& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}
    inline CreateVehicleRequestItem& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}
    inline CreateVehicleRequestItem& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }
    inline CreateVehicleRequestItem& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }
    inline CreateVehicleRequestItem& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }
    inline CreateVehicleRequestItem& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateVehicleRequestItem& AddAttributes(const char* key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }
    inline CreateVehicleRequestItem& AddAttributes(Aws::String&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }
    inline CreateVehicleRequestItem& AddAttributes(const char* key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An option to create a new Amazon Web Services IoT thing when creating a
     * vehicle, or to validate an existing thing as a vehicle.</p>
     */
    inline const VehicleAssociationBehavior& GetAssociationBehavior() const{ return m_associationBehavior; }
    inline bool AssociationBehaviorHasBeenSet() const { return m_associationBehaviorHasBeenSet; }
    inline void SetAssociationBehavior(const VehicleAssociationBehavior& value) { m_associationBehaviorHasBeenSet = true; m_associationBehavior = value; }
    inline void SetAssociationBehavior(VehicleAssociationBehavior&& value) { m_associationBehaviorHasBeenSet = true; m_associationBehavior = std::move(value); }
    inline CreateVehicleRequestItem& WithAssociationBehavior(const VehicleAssociationBehavior& value) { SetAssociationBehavior(value); return *this;}
    inline CreateVehicleRequestItem& WithAssociationBehavior(VehicleAssociationBehavior&& value) { SetAssociationBehavior(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata which can be used to manage the vehicle.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateVehicleRequestItem& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateVehicleRequestItem& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateVehicleRequestItem& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateVehicleRequestItem& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Associate state templates to track the state of the vehicle. State templates
     * determine which signal updates the vehicle sends to the cloud.</p>
     */
    inline const Aws::Vector<StateTemplateAssociation>& GetStateTemplates() const{ return m_stateTemplates; }
    inline bool StateTemplatesHasBeenSet() const { return m_stateTemplatesHasBeenSet; }
    inline void SetStateTemplates(const Aws::Vector<StateTemplateAssociation>& value) { m_stateTemplatesHasBeenSet = true; m_stateTemplates = value; }
    inline void SetStateTemplates(Aws::Vector<StateTemplateAssociation>&& value) { m_stateTemplatesHasBeenSet = true; m_stateTemplates = std::move(value); }
    inline CreateVehicleRequestItem& WithStateTemplates(const Aws::Vector<StateTemplateAssociation>& value) { SetStateTemplates(value); return *this;}
    inline CreateVehicleRequestItem& WithStateTemplates(Aws::Vector<StateTemplateAssociation>&& value) { SetStateTemplates(std::move(value)); return *this;}
    inline CreateVehicleRequestItem& AddStateTemplates(const StateTemplateAssociation& value) { m_stateTemplatesHasBeenSet = true; m_stateTemplates.push_back(value); return *this; }
    inline CreateVehicleRequestItem& AddStateTemplates(StateTemplateAssociation&& value) { m_stateTemplatesHasBeenSet = true; m_stateTemplates.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_vehicleName;
    bool m_vehicleNameHasBeenSet = false;

    Aws::String m_modelManifestArn;
    bool m_modelManifestArnHasBeenSet = false;

    Aws::String m_decoderManifestArn;
    bool m_decoderManifestArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet = false;

    VehicleAssociationBehavior m_associationBehavior;
    bool m_associationBehaviorHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<StateTemplateAssociation> m_stateTemplates;
    bool m_stateTemplatesHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
