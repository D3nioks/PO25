#include "alarmevent.h"
#include <QMessageBox>

AlarmEvent::AlarmEvent(const QDateTime &dateTime, const QString &label)
    : alarmTime(dateTime), label(label) {}

void AlarmEvent::trigger()
{
    QMessageBox::information(nullptr, "Alarm", "Czas na alarm: " + alarmTime.toString("yyyy-MM-dd HH:mm") + "\n" + label);
}

QDateTime AlarmEvent::getDateTime() const
{
    return alarmTime;
}
