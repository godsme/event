/*
 * ConsecutiveEventInfo.h
 *
 * Created on: Apr 23, 2013, 2013
 *     author: Darwin Yuan
 *
 * Copyright 2013 ThoughtWorks, All Rights Reserved.
 *
 */ 

#ifndef CONSECUTIVEEVENTINFO_H_
#define CONSECUTIVEEVENTINFO_H_

#include "event/impl/BaseEventInfo.h"

struct ConsecutiveEventInfo : BaseEventInfo
{
   template <typename T>
   ConsecutiveEventInfo(const EventId eventId, const T& msg)
      : BaseEventInfo(eventId), msg((void*)&msg), size(sizeof(msg))
   {}

   ConsecutiveEventInfo(const EventId eventId, const void* const msg, WORD16 size);

   OVERRIDE(const void* getMsg() const);
//   OVERRIDE(const void* getMsgBuffer() const);
   OVERRIDE(size_t getMsgSize() const);

private:
   const void* const  msg;
   const size_t       size;
};

#endif /* CONSECUTIVEEVENTINFO_H_ */
