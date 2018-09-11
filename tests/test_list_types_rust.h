/* generated by rust_qt_binding_generator */
#ifndef TEST_LIST_TYPES_RUST_H
#define TEST_LIST_TYPES_RUST_H

#include <QObject>
#include <QAbstractItemModel>

class List;

class List : public QAbstractItemModel
{
    Q_OBJECT
public:
    class Private;
private:
    Private * m_d;
    bool m_ownsPrivate;
    explicit List(bool owned, QObject *parent);
public:
    explicit List(QObject *parent = nullptr);
    ~List();

    int columnCount(const QModelIndex &parent = QModelIndex()) const override;
    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;
    QModelIndex index(int row, int column, const QModelIndex &parent = QModelIndex()) const override;
    QModelIndex parent(const QModelIndex &index) const override;
    bool hasChildren(const QModelIndex &parent = QModelIndex()) const override;
    int rowCount(const QModelIndex &parent = QModelIndex()) const override;
    bool canFetchMore(const QModelIndex &parent) const override;
    void fetchMore(const QModelIndex &parent) override;
    Qt::ItemFlags flags(const QModelIndex &index) const override;
    void sort(int column, Qt::SortOrder order = Qt::AscendingOrder) override;
    int role(const char* name) const;
    QHash<int, QByteArray> roleNames() const override;
    QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const override;
    bool setHeaderData(int section, Qt::Orientation orientation, const QVariant &value, int role = Qt::EditRole) override;
    Q_INVOKABLE bool insertRows(int row, int count, const QModelIndex &parent = QModelIndex()) override;
    Q_INVOKABLE bool removeRows(int row, int count, const QModelIndex &parent = QModelIndex()) override;
    bool setData(const QModelIndex &index, const QVariant &value, int role = Qt::EditRole) override;
    Q_INVOKABLE bool boolean(int row) const;
    Q_INVOKABLE bool setBoolean(int row, bool value);
    Q_INVOKABLE QByteArray bytearray(int row) const;
    Q_INVOKABLE bool setBytearray(int row, const QByteArray& value);
    Q_INVOKABLE float f32(int row) const;
    Q_INVOKABLE bool setF32(int row, float value);
    Q_INVOKABLE double f64(int row) const;
    Q_INVOKABLE bool setF64(int row, double value);
    Q_INVOKABLE qint16 i16(int row) const;
    Q_INVOKABLE bool setI16(int row, qint16 value);
    Q_INVOKABLE qint32 i32(int row) const;
    Q_INVOKABLE bool setI32(int row, qint32 value);
    Q_INVOKABLE qint64 i64(int row) const;
    Q_INVOKABLE bool setI64(int row, qint64 value);
    Q_INVOKABLE qint8 i8(int row) const;
    Q_INVOKABLE bool setI8(int row, qint8 value);
    Q_INVOKABLE QVariant optionalBoolean(int row) const;
    Q_INVOKABLE bool setOptionalBoolean(int row, const QVariant& value);
    Q_INVOKABLE QByteArray optionalBytearray(int row) const;
    Q_INVOKABLE bool setOptionalBytearray(int row, const QByteArray& value);
    Q_INVOKABLE QString optionalString(int row) const;
    Q_INVOKABLE bool setOptionalString(int row, const QString& value);
    Q_INVOKABLE QString string(int row) const;
    Q_INVOKABLE bool setString(int row, const QString& value);
    Q_INVOKABLE quint16 u16(int row) const;
    Q_INVOKABLE bool setU16(int row, quint16 value);
    Q_INVOKABLE quint32 u32(int row) const;
    Q_INVOKABLE bool setU32(int row, quint32 value);
    Q_INVOKABLE quint64 u64(int row) const;
    Q_INVOKABLE bool setU64(int row, quint64 value);
    Q_INVOKABLE quint8 u8(int row) const;
    Q_INVOKABLE bool setU8(int row, quint8 value);

signals:
    // new data is ready to be made available to the model with fetchMore()
    void newDataReady(const QModelIndex &parent) const;
private:
    QHash<QPair<int,Qt::ItemDataRole>, QVariant> m_headerData;
    void initHeaderData();
    void updatePersistentIndexes();
signals:
};
#endif // TEST_LIST_TYPES_RUST_H
