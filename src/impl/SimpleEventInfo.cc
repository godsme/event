/*
 * SimpleEventInfo.cc
 *
 *  Created on: Apr 23, 2013
 *      Author: arthur
 */

#include <event/impl/SimpleEventInfo.h>

EV_NS_BEGIN

/////////////////////////////////////////////////////////////
SimpleEventInfo::SimpleEventInfo(const EventId eventId)
     : BaseEventInfo(eventId)
{
}

/////////////////////////////////////////////////////////////
const void* SimpleEventInfo::getMsg() const
{
   return 0;
}

/////////////////////////////////////////////////////////////
size_t SimpleEventInfo::getMsgSize() const
{
   return 0;
}

EV_NS_END
