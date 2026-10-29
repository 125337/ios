@interface ForwardMsgSpamDb : NSObject
{
    WCTDatabase * _db; // +0x8
    WCTTable * _table; // +0x10
}
- (BOOL)initDb;
- (void)closeDb;
- (id)getDbPath;
- (BOOL)createTable;
- (id)queryByMsgId:(id)arg1;
- (BOOL)saveToDb:(id)arg1;
- (id)db;
- (void)setDb:(id)arg1;
- (id)table;
- (void)setTable:(id)arg1;
- (void).cxx_destruct;
@end

