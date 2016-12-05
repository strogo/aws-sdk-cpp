﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes a domain recordset entry.</p>
   */
  class AWS_LIGHTSAIL_API DomainEntry
  {
  public:
    DomainEntry();
    DomainEntry(const Aws::Utils::Json::JsonValue& jsonValue);
    DomainEntry& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The ID of the domain recordset entry.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the domain recordset entry.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the domain recordset entry.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the domain recordset entry.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the domain recordset entry.</p>
     */
    inline DomainEntry& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the domain recordset entry.</p>
     */
    inline DomainEntry& WithId(Aws::String&& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the domain recordset entry.</p>
     */
    inline DomainEntry& WithId(const char* value) { SetId(value); return *this;}

    /**
     * <p>The name of the domain.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the domain.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the domain.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the domain.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the domain.</p>
     */
    inline DomainEntry& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the domain.</p>
     */
    inline DomainEntry& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The name of the domain.</p>
     */
    inline DomainEntry& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The target AWS name server (e.g., <code>ns-111.awsdns-22.com.</code>).</p>
     */
    inline const Aws::String& GetTarget() const{ return m_target; }

    /**
     * <p>The target AWS name server (e.g., <code>ns-111.awsdns-22.com.</code>).</p>
     */
    inline void SetTarget(const Aws::String& value) { m_targetHasBeenSet = true; m_target = value; }

    /**
     * <p>The target AWS name server (e.g., <code>ns-111.awsdns-22.com.</code>).</p>
     */
    inline void SetTarget(Aws::String&& value) { m_targetHasBeenSet = true; m_target = value; }

    /**
     * <p>The target AWS name server (e.g., <code>ns-111.awsdns-22.com.</code>).</p>
     */
    inline void SetTarget(const char* value) { m_targetHasBeenSet = true; m_target.assign(value); }

    /**
     * <p>The target AWS name server (e.g., <code>ns-111.awsdns-22.com.</code>).</p>
     */
    inline DomainEntry& WithTarget(const Aws::String& value) { SetTarget(value); return *this;}

    /**
     * <p>The target AWS name server (e.g., <code>ns-111.awsdns-22.com.</code>).</p>
     */
    inline DomainEntry& WithTarget(Aws::String&& value) { SetTarget(value); return *this;}

    /**
     * <p>The target AWS name server (e.g., <code>ns-111.awsdns-22.com.</code>).</p>
     */
    inline DomainEntry& WithTarget(const char* value) { SetTarget(value); return *this;}

    /**
     * <p>The type of domain entry (e.g., <code>SOA</code> or <code>NS</code>).</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of domain entry (e.g., <code>SOA</code> or <code>NS</code>).</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of domain entry (e.g., <code>SOA</code> or <code>NS</code>).</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of domain entry (e.g., <code>SOA</code> or <code>NS</code>).</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The type of domain entry (e.g., <code>SOA</code> or <code>NS</code>).</p>
     */
    inline DomainEntry& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of domain entry (e.g., <code>SOA</code> or <code>NS</code>).</p>
     */
    inline DomainEntry& WithType(Aws::String&& value) { SetType(value); return *this;}

    /**
     * <p>The type of domain entry (e.g., <code>SOA</code> or <code>NS</code>).</p>
     */
    inline DomainEntry& WithType(const char* value) { SetType(value); return *this;}

    /**
     * <p>The options for the domain entry.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetOptions() const{ return m_options; }

    /**
     * <p>The options for the domain entry.</p>
     */
    inline void SetOptions(const Aws::Map<Aws::String, Aws::String>& value) { m_optionsHasBeenSet = true; m_options = value; }

    /**
     * <p>The options for the domain entry.</p>
     */
    inline void SetOptions(Aws::Map<Aws::String, Aws::String>&& value) { m_optionsHasBeenSet = true; m_options = value; }

    /**
     * <p>The options for the domain entry.</p>
     */
    inline DomainEntry& WithOptions(const Aws::Map<Aws::String, Aws::String>& value) { SetOptions(value); return *this;}

    /**
     * <p>The options for the domain entry.</p>
     */
    inline DomainEntry& WithOptions(Aws::Map<Aws::String, Aws::String>&& value) { SetOptions(value); return *this;}

    /**
     * <p>The options for the domain entry.</p>
     */
    inline DomainEntry& AddOptions(const Aws::String& key, const Aws::String& value) { m_optionsHasBeenSet = true; m_options[key] = value; return *this; }

    /**
     * <p>The options for the domain entry.</p>
     */
    inline DomainEntry& AddOptions(Aws::String&& key, const Aws::String& value) { m_optionsHasBeenSet = true; m_options[key] = value; return *this; }

    /**
     * <p>The options for the domain entry.</p>
     */
    inline DomainEntry& AddOptions(const Aws::String& key, Aws::String&& value) { m_optionsHasBeenSet = true; m_options[key] = value; return *this; }

    /**
     * <p>The options for the domain entry.</p>
     */
    inline DomainEntry& AddOptions(Aws::String&& key, Aws::String&& value) { m_optionsHasBeenSet = true; m_options[key] = value; return *this; }

    /**
     * <p>The options for the domain entry.</p>
     */
    inline DomainEntry& AddOptions(const char* key, Aws::String&& value) { m_optionsHasBeenSet = true; m_options[key] = value; return *this; }

    /**
     * <p>The options for the domain entry.</p>
     */
    inline DomainEntry& AddOptions(Aws::String&& key, const char* value) { m_optionsHasBeenSet = true; m_options[key] = value; return *this; }

    /**
     * <p>The options for the domain entry.</p>
     */
    inline DomainEntry& AddOptions(const char* key, const char* value) { m_optionsHasBeenSet = true; m_options[key] = value; return *this; }

  private:
    Aws::String m_id;
    bool m_idHasBeenSet;
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::String m_target;
    bool m_targetHasBeenSet;
    Aws::String m_type;
    bool m_typeHasBeenSet;
    Aws::Map<Aws::String, Aws::String> m_options;
    bool m_optionsHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws