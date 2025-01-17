﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace EventBridge
{
namespace Model
{

  /**
   * <p>Additional parameter included in the body. You can include up to 100
   * additional body parameters per request. An event payload cannot exceed 64
   * KB.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/ConnectionBodyParameter">AWS
   * API Reference</a></p>
   */
  class ConnectionBodyParameter
  {
  public:
    AWS_EVENTBRIDGE_API ConnectionBodyParameter();
    AWS_EVENTBRIDGE_API ConnectionBodyParameter(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API ConnectionBodyParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The key for the parameter.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }
    inline ConnectionBodyParameter& WithKey(const Aws::String& value) { SetKey(value); return *this;}
    inline ConnectionBodyParameter& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}
    inline ConnectionBodyParameter& WithKey(const char* value) { SetKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value associated with the key.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline ConnectionBodyParameter& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline ConnectionBodyParameter& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline ConnectionBodyParameter& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the value is secret.</p>
     */
    inline bool GetIsValueSecret() const{ return m_isValueSecret; }
    inline bool IsValueSecretHasBeenSet() const { return m_isValueSecretHasBeenSet; }
    inline void SetIsValueSecret(bool value) { m_isValueSecretHasBeenSet = true; m_isValueSecret = value; }
    inline ConnectionBodyParameter& WithIsValueSecret(bool value) { SetIsValueSecret(value); return *this;}
    ///@}
  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    bool m_isValueSecret;
    bool m_isValueSecretHasBeenSet = false;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
