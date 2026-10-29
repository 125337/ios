@interface QDBResultSet : NSObject
{
    QDBDatabase * _parentDB; // +0x8
    QDBStatement * _statement; // +0x10
    NSString * _query; // +0x18
    NSMutableDictionary * _columnNameToIndexMap; // +0x20
}
+ (id)resultSetWithStatement:(id)arg1 usingParentDatabase:(id)arg2;
- (void)dealloc;
- (void)close;
- (void)setParentDB:(id)arg1;
- (int)columnCount;
- (BOOL)next;
- (BOOL)nextWithError:(id *)arg1;
- (id)columnNameToIndexMap;
- (int)columnIndexForName:(id)arg1;
- (int)intForColumn:(id)arg1;
- (int)intForColumnIndex:(int)arg1;
- (id)stringForColumn:(id)arg1;
- (id)stringForColumnIndex:(int)arg1;
- (id)dataForColumn:(id)arg1;
- (id)dataForColumnIndex:(int)arg1;
- (id)query;
- (void)setQuery:(id)arg1;
- (id)statement;
- (void)setStatement:(id)arg1;
- (void).cxx_destruct;
@end

