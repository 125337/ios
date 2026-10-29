@interface WCDBTableHolder : NSObject
{
    WCTDatabase * _database; // +0x8
    WCTTable * _table; // +0x10
}
- (id)initWithPath:(id)arg1 tableName:(id)arg2 tableClass:(Class)arg3;
- (BOOL)createWithError:(id *)arg1;
- (int)dbTag;
- (id)name;
- (id)database;
- (id)table;
- (void).cxx_destruct;
@end

