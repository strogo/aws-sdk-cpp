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
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{
  enum class TargetStatus
  {
    NOT_SET,
    Pending,
    InProgress,
    Succeeded,
    Failed,
    Skipped,
    Unknown,
    Ready
  };

namespace TargetStatusMapper
{
AWS_CODEDEPLOY_API TargetStatus GetTargetStatusForName(const Aws::String& name);

AWS_CODEDEPLOY_API Aws::String GetNameForTargetStatus(TargetStatus value);
} // namespace TargetStatusMapper
} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
