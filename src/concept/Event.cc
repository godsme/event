/*
 * Event.cc
 *
 *  Created on: Apr 23, 2013
 *      Author: arthur
 */

#include <event/concept/Event.h>
#include <event/concept/EventInfo.h>
#include <event/concept/InvalidMsgSize.h>

#include <cub/base/Assertions.h>
#include <cub/gof/Singleton.h>

EV_NS_BEGIN

///////////////////////////////////////////////////////////////
namespace
{
   DEF_SINGLETON(NilEventInfo)  EXTENDS(EventInfo)
   {
      OVERRIDE(EventId getEventId() const)
      {
         return INVALID_EVENT_ID;
      }

      OVERRIDE(const void* getMsg() const)
      {
         return 0;
      }

      OVERRIDE(size_t getMsgSize() const)
      {
         return INVALID_MSG_SIZE;
      }

      OVERRIDE(cub::Status updateEventId(const EventId) const)
      {
         return CUB_FATAL_BUG;
      }
   };
}

///////////////////////////////////////////////////////////////
Event::Event()
  : info(&NilEventInfo::getInstance())
  , consumed(false)
{
}

///////////////////////////////////////////////////////////////
Event::Event(const EventInfo& info)
  : info(&info)
  , consumed(false)
{
}

///////////////////////////////////////////////////////////////
EventId Event::getEventId() const
{
   return info->getEventId();
}

///////////////////////////////////////////////////////////////
const void* Event::getMsg() const
{
   return info->getMsg();
}

///////////////////////////////////////////////////////////////
size_t Event::getMsgSize() const
{
   return info->getMsgSize();
}

///////////////////////////////////////////////////////////////
void Event::consume() const
{
   consumed = true;
}

///////////////////////////////////////////////////////////////
bool Event::isConsumed() const
{
   return consumed;
}

///////////////////////////////////////////////////////////////
bool Event::matches(const EventId eventId) const
{
   return eventId == getEventId();
}

///////////////////////////////////////////////////////////////
cub::Status Event::updateEventId(const EventId eventId) const
{
   return info->updateEventId(eventId);
}

///////////////////////////////////////////////////////////////
void Event::assignEventInfoTo(Event& another) const
{
   another.info = info;
}

EV_NS_END

