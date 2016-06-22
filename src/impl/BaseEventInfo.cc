/*
 * BaseEventInfo.cc
 *
 *  Created on: Apr 23, 2013
 *      Author: arthur
 */

#include <event/impl/BaseEventInfo.h>

EV_NS_BEGIN

///////////////////////////////////////////////////////////////////
BaseEventInfo::BaseEventInfo(const EventId eventId)
   : eventId(eventId)
{
}

///////////////////////////////////////////////////////////////////
EventId BaseEventInfo::getEventId() const
{
   return eventId;
}

///////////////////////////////////////////////////////////////////
cub::Status BaseEventInfo::updateEventId(const EventId id) const
{
   eventId = id;
   return CUB_SUCCESS;
}

EV_NS_END
