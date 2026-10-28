@interface MMFlutterUpdateDB : MMUserService <MMServiceProtocol>
{
    WCTDatabase * _db; // +0x8
    WCTTable * _tableFlutterUpdateInfo; // +0x10
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (id)getInfoById:(id)arg1;
- (BOOL)updateInfo:(id)arg1;
- (void)openDB;
- (void)closeDB;
- (void)setupTable;
- (id)setupTableWithName:(id)arg1 tableClass:(Class)arg2;
- (id)dbPath;
- (void)willRecoverDatabase;
- (id)db;
- (void)setDb:(id)arg1;
- (id)tableFlutterUpdateInfo;
- (void)setTableFlutterUpdateInfo:(id)arg1;
- (void).cxx_destruct;
@end
