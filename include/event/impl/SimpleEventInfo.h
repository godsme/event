/*
 * SimpleEventInfo.h
 *
 * Created on: Apr 23, 2013, 2013
 *     author: Darwin Yuan
 *
 * Copyright 2013 ThoughtWorks, All Rights Reserved.
 *
 */ 

#ifndef SIMPLEEVENTINFO_H_
#define SIMPLEEVENTINFO_H_

#include "event/impl/BaseEventInfo.h"

struct SimpleEventInfo : BaseEventInfo
{
   explicit SimpleEventInfo(const EventId eventId);

   OVERRIDE(const void* getMsg() const);
//   OVERRIDE(const void* getMsgBuffer() const);
   OVERRIDE(size_t getMsgSize() const);
};

#endif /* SIMPLEEVENTINFO_H_ */
