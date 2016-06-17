/*
 * ScatteredEventInfo.h
 *
 * Created on: Apr 23, 2013, 2013
 *     author: Darwin Yuan
 *
 * Copyright 2013 ThoughtWorks, All Rights Reserved.
 *
 */ 

#ifndef SCATTEREDEVENTINFO_H_
#define SCATTEREDEVENTINFO_H_

#include "event/impl/BaseEventInfo.h"

struct ScatteredEventInfo : BaseEventInfo
{
   ScatteredEventInfo(const EventId eventId, const void* const msg);

   OVERRIDE(const void* getMsg() const);
   OVERRIDE(const void* getMsgBuffer() const);
   OVERRIDE(WORD16 getMsgSize() const);

private:
   const void* const  msg;
};

#endif /* SCATTEREDEVENTINFO_H_ */
