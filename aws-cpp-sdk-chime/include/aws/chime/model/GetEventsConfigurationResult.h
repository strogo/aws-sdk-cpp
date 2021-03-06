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
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/model/EventsConfiguration.h>
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
namespace Chime
{
namespace Model
{
  class AWS_CHIME_API GetEventsConfigurationResult
  {
  public:
    GetEventsConfigurationResult();
    GetEventsConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetEventsConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The events configuration details.</p>
     */
    inline const EventsConfiguration& GetEventsConfiguration() const{ return m_eventsConfiguration; }

    /**
     * <p>The events configuration details.</p>
     */
    inline void SetEventsConfiguration(const EventsConfiguration& value) { m_eventsConfiguration = value; }

    /**
     * <p>The events configuration details.</p>
     */
    inline void SetEventsConfiguration(EventsConfiguration&& value) { m_eventsConfiguration = std::move(value); }

    /**
     * <p>The events configuration details.</p>
     */
    inline GetEventsConfigurationResult& WithEventsConfiguration(const EventsConfiguration& value) { SetEventsConfiguration(value); return *this;}

    /**
     * <p>The events configuration details.</p>
     */
    inline GetEventsConfigurationResult& WithEventsConfiguration(EventsConfiguration&& value) { SetEventsConfiguration(std::move(value)); return *this;}

  private:

    EventsConfiguration m_eventsConfiguration;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
