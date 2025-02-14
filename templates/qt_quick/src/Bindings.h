/* generated by rust_qt_binding_generator */
#ifndef BINDINGS_H
#define BINDINGS_H

#include <QtCore/QObject>
#include <QtCore/QAbstractItemModel>

class Time;

class Time : public QObject
{
    Q_OBJECT
public:
    class Private;
private:
    Private * m_d;
    bool m_ownsPrivate;
    Q_PROPERTY(quint32 hour READ hour NOTIFY hourChanged FINAL)
    Q_PROPERTY(quint32 minute READ minute NOTIFY minuteChanged FINAL)
    Q_PROPERTY(quint32 second READ second NOTIFY secondChanged FINAL)
    explicit Time(bool owned, QObject *parent);
public:
    explicit Time(QObject *parent = nullptr);
    ~Time();
    quint32 hour() const;
    quint32 minute() const;
    quint32 second() const;
Q_SIGNALS:
    void hourChanged();
    void minuteChanged();
    void secondChanged();
};
#endif // BINDINGS_H
