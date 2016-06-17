/*
 * ConsecutiveEventInfo.cc
 *
 *  Created on: Apr 23, 2013
 *      Author: arthur
 */

#include "event/impl/ConsecutiveEventInfo.h"

ConsecutiveEventInfo::ConsecutiveEventInfo
    ( const EventId eventId
    , const void* const msg
    , WORD16 size)
    : BaseEventInfo(eventId)
    , msg(msg)
    , size(msg == 0 ? 0 : size)
{
}

const void* ConsecutiveEventInfo::getMsg() const
{
   return msg;
}

//const void* ConsecutiveEventInfo::getMsgBuffer() const
//{
//   return msg;
//}

size_t ConsecutiveEventInfo::getMsgSize() const
{
   return size;
}

