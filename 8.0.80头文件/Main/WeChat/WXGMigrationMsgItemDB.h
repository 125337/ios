@interface WXGMigrationMsgItemDB : NSObject
{
    WCTDatabase * _msgItemDB; // +0x8
}
- (id)msgItemDB;
- (void)dealloc;
- (void)closeDB;
- (void)removeDBFile;
- (void)insertDataWithMsgIDObject:(id)arg1;
- (id)getAllMsgListIDFromMsgIDTable;
- (BOOL)deleteMsgListArrayFormMsgIDTable:(id)arg1;
- (void)insertDataWithTagObject:(id)arg1;
- (void)insertDataWithMigrationObject:(id)arg1;
- (long long)getLastEndTimeOfSession:(id)arg1;
- (BOOL)isMigrationTableNotEmpty;
- (id)getAllTagObject;
- (id)getAllSessionName;
- (id)getMsgListIDForSessionName:(id)arg1;
- (BOOL)deleteTagObjectByMsgID:(id)arg1;
- (id)p_getMsgItemTable;
- (id)p_getTagTable;
- (id)p_getMigrationTable;
- (void)setMsgItemDB:(id)arg1;
- (void).cxx_destruct;
@end
