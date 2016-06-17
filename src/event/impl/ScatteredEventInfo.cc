/*
 * ScatteredEventInfo.cc
 *
 *  Created on: Apr 23, 2013
 *      Author: arthur
 */

#include "event/impl/ScatteredEventInfo.h"
#include "event/concept/InvalidMsgSize.h"

ScatteredEventInfo::ScatteredEventInfo(const EventId eventId,
         const void* const msg)
   : BaseEventInfo(eventId)
   , msg(msg)
{
}

const void* ScatteredEventInfo::getMsg() const
{
   return msg;
}

const void* ScatteredEventInfo::getMsgBuffer() const
{
   return 0;
}

WORD16 ScatteredEventInfo::getMsgSize() const
{
   return INVALID_MSG_SIZE;
}

