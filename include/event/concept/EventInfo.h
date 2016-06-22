/*
 * EventInfo.h
 *
 * Created on: Apr 23, 2013, 2013
 *     author: Darwin Yuan
 *
 * Copyright 2013 ThoughtWorks, All Rights Reserved.
 *
 */ 

#ifndef EVENTINFO_H_
#define EVENTINFO_H_

#include <event/concept/EventId.h>

#include <cub/dci/Role.h>
#include <cub/base/Status.h>

#include <cstddef>

EV_NS_BEGIN

DEFINE_ROLE(EventInfo)
{
   ABSTRACT(EventId getEventId() const);
   ABSTRACT(const void* getMsg() const);
   ABSTRACT(size_t getMsgSize() const);
   ABSTRACT(cub::Status updateEventId(const EventId) const);
};

EV_NS_END

#endif /* EVENTINFO_H_ */
