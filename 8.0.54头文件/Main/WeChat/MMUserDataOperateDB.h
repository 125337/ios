@interface MMUserDataOperateDB : MMUserService <MMServiceProtocol>
{
    WCTDatabase * m_database; // +0x8
    WCTTable * m_userDataOperateItemTable; // +0x10
}
- (void)onServiceInit;
- (BOOL)reloadDataBase;
- (void)createTables;
- (BOOL)createUserDataOperateItemTable;
- (void)closeDB;
- (void)insertUserDataOperateItemList:(id)arg1;
- (BOOL)insertUserDataOperateItem:(id)arg1 withHandle:(id)arg2;
- (id)getEarliestUserDataOperate;
- (id)getBatchUploadUserDataListWithBeginTime:(unsigned long long)arg1 andEndTime:(unsigned long long)arg2 arrCombineReportForUserDataType:(id)arg3;
- (BOOL)removeUserDataOperateWithBeginTime:(unsigned long long)arg1 andEndTime:(unsigned long long)arg2;
- (id)databasePath;
- (void)didRecoverDatabase;
- (void)willRecoverDatabase;
- (id)m_database;
- (void)setM_database:(id)arg1;
- (id)m_userDataOperateItemTable;
- (void)setM_userDataOperateItemTable:(id)arg1;
- (void).cxx_destruct;
@end

