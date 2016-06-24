/*
 * ScatteredEventInfo.cc
 *
 *  Created on: Apr 23, 2013
 *      Author: arthur
 */

#include <event/impl/ScatteredEventInfo.h>
#include <event/concept/InvalidMsgSize.h>

EV_NS_BEGIN

///////////////////////////////////////////////////////////////
ScatteredEventInfo::ScatteredEventInfo(const EventId eventId,
         const void* const msg)
   : BaseEventInfo(eventId)
   , msg(msg)
{
}

///////////////////////////////////////////////////////////////
const void* ScatteredEventInfo::getMsg() const
{
   return msg;
}

///////////////////////////////////////////////////////////////
size_t ScatteredEventInfo::getMsgSize() const
{
   return INVALID_MSG_SIZE;
}

EV_NS_END

