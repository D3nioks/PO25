#ifndef ALARMEVENT_H
#define ALARMEVENT_H

#include "timeevent.h"
#include <QString>

class AlarmEvent : public TimeEvent
{
public:
    AlarmEvent(const QDateTime &dateTime, const QString &label = "");
    void trigger() override;
    QDateTime getDateTime() const override;

private:
    QDateTime alarmTime;
    QString label;
};

#endif // ALARMEVENT_H
