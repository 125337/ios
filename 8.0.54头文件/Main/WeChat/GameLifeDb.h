@interface GameLifeDb : NSObject
{
    WCTDatabase * _dataBase; // +0x8
    WCTTable * _gameLifeContactTable; // +0x10
    WCTTable * _gameLifeSessionInfoTable; // +0x18
}
- (id)init;
- (void)dealloc;
- (void)setupDbBase;
- (void)testClearDB;
- (id)getDbPath;
- (BOOL)createGameLifeContactTable;
- (BOOL)createGameLifeSessionInfoTable;
- (id)createTableWithTableName:(id)arg1 objectClass:(Class)arg2;
- (id)getContactTable;
- (id)getSessionInfoTable;
- (id)dataBase;
- (void)setDataBase:(id)arg1;
- (id)gameLifeContactTable;
- (void)setGameLifeContactTable:(id)arg1;
- (id)gameLifeSessionInfoTable;
- (void)setGameLifeSessionInfoTable:(id)arg1;
- (void).cxx_destruct;
@end

