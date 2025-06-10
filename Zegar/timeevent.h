#ifndef TIMEEVENT_H
#define TIMEEVENT_H

#include <QDateTime>

class TimeEvent
{
public:
    virtual ~TimeEvent() {}
    virtual void trigger() = 0;
    virtual QDateTime getDateTime() const = 0;
};

#endif // TIMEEVENT_H
