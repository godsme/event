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

#include <base/dci/Role.h>
#include "event/concept/EventId.h"
#include <base/Status.h>
#include <cstddef>

DEFINE_ROLE(EventInfo)
{
   ABSTRACT(EventId getEventId() const);
   ABSTRACT(const void* getMsg() const);
   ABSTRACT(size_t getMsgSize() const);
   ABSTRACT(Status updateEventId(const EventId) const);
};

#endif /* EVENTINFO_H_ */
