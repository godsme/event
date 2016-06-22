/*
 * Event.h
 *
 * Created on: Apr 21, 2013, 2013
 *     author: Darwin Yuan
 *
 * Copyright 2013 ThoughtWorks, All Rights Reserved.
 *
 */ 

#ifndef EVENT_H_
#define EVENT_H_

#include <event/concept/EventId.h>
#include <cub/base/Status.h>

#include <cstddef>

EV_NS_BEGIN

struct EventInfo;

struct Event
{
   Event();
   Event(const EventInfo& info);

   EventId getEventId() const;
   const void* getMsg() const;
   size_t getMsgSize() const;

   bool matches(const EventId eventId) const;

   cub::Status updateEventId(const EventId) const;
   void assignEventInfoTo(Event&) const;

   void consume() const;
   bool isConsumed() const;

private:
   const EventInfo* info;
   mutable bool consumed;
};

EV_NS_END

#endif /* EVENT_H_ */
