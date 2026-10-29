@interface GameCenterCommonDb : MMUserService <MMServiceProtocol>
{
    WCTDatabase * _dataBase; // +0x8
    NSMutableDictionary * _tableDict; // +0x10
}
- (id)init;
- (void)deleteChatRoomDB;
- (void)dealloc;
- (void)setupDbBase;
- (id)getDbPath;
- (id)getTableOfObjectClass:(Class)arg1;
- (id)getTableOfObjectClass:(Class)arg1 customPrefix:(id)arg2;
- (id)createTableWithTableName:(id)arg1 objectClass:(Class)arg2;
- (BOOL)runTransaction:(id /* block */)arg1;
- (id)dataBase;
- (void)setDataBase:(id)arg1;
- (id)tableDict;
- (void)setTableDict:(id)arg1;
- (void).cxx_destruct;
@end

