/*
 * BaseEventInfo.cc
 *
 *  Created on: Apr 23, 2013
 *      Author: arthur
 */

#include "event/impl/BaseEventInfo.h"

BaseEventInfo::BaseEventInfo(const EventId eventId)
   : eventId(eventId)
{
}

EventId BaseEventInfo::getEventId() const
{
   return eventId;
}

Status BaseEventInfo::updateEventId(const EventId id) const
{
   eventId = id;
   return SUCCESS;
}

