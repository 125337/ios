@interface SessionForwardRecordDB : NSObject
{
    WCTDatabase * _database; // +0x8
    WCTTable * _forwardRecordTable; // +0x10
    WCTTable * _forwardRecordItemTable; // +0x18
}
- (id)init;
- (void)dealloc;
- (void)reloadDataBase;
- (void)didRecoverDatabase;
- (void)deleteSession:(id)arg1;
- (void)deleteExpiredSessionForwardRecord;
- (void)insertSession:(id)arg1 scene:(unsigned long long)arg2;
- (void)updateSessionScene:(id)arg1 scene:(unsigned long long)arg2;
- (void)setHidden:(BOOL)arg1 forUsername:(id)arg2;
- (id)recentForwardRecords;
- (id)database;
- (void)setDatabase:(id)arg1;
- (id)forwardRecordTable;
- (void)setForwardRecordTable:(id)arg1;
- (id)forwardRecordItemTable;
- (void)setForwardRecordItemTable:(id)arg1;
- (void).cxx_destruct;
@end
