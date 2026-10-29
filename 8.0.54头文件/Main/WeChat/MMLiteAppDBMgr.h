@interface MMLiteAppDBMgr : MMUserService <MMServiceProtocol>
{
    WCTDatabase * _db; // +0x8
    WCTTable * _tableLiteAppInfo; // +0x10
    WCTTable * _tableLiteAppAuthInfo; // +0x18
    WCTTable * _tableLiteAppBaseLibInfo; // +0x20
    WCTTable * _tableIlinkCheckResourceInfo; // +0x28
    WCTTable * _tableLiteAppConfigInfo; // +0x30
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (id)getLiteAppInfoItemByAppId:(id)arg1 forOpen:(BOOL)arg2;
- (id)getLiteAppInfoItemByAppId:(id)arg1 forOpen:(BOOL)arg2 reporter:(id)arg3;
- (BOOL)deleteLiteAppInfoItemByAppId:(id)arg1;
- (BOOL)insertLiteAppInfoDBItme:(id)arg1;
- (id)getLiteAppList;
- (BOOL)insertLiteAppAuthInfoDBItem:(id)arg1;
- (id)getLiteAppAuthInfoItemByUrl:(id)arg1;
- (BOOL)insertLiteAppBaseLibInfo:(id)arg1;
- (id)getLiteAppBaseLibList;
- (id)getLatestLiteAppBaseLibInfo;
- (id)getLiteAppBundleBaseLibInfo;
- (id)getLiteAppBaseLibInfo:(id)arg1;
- (BOOL)deleteLiteAppBaseLibInfo:(id)arg1;
- (id)getIlinkCheckResourceInfo:(id)arg1 resourceName:(id)arg2 resourceVersion:(unsigned long long)arg3;
- (BOOL)deleteIlinkCheckResourceInfo:(id)arg1 resourceName:(id)arg2 resourceVersion:(unsigned long long)arg3;
- (BOOL)insertIlinkCheckResourceInfo:(id)arg1;
- (id)getIlinkCheckResourceInfoList:(id)arg1;
- (id)getIlinkCheckResourceInfoList;
- (BOOL)insertLiteAppConfigInfo:(id)arg1;
- (id)getLiteAppConfigInfo:(id)arg1;
- (id)getLiteAppGlobalConfigInfo;
- (id)getLiteAppConfigInfoList;
- (BOOL)deleteLiteAppConfigInfo:(id)arg1;
- (void)openDB;
- (void)closeDB;
- (void)setupTable;
- (id)setupTableWithName:(id)arg1 tableClass:(Class)arg2;
- (id)dbPath;
- (void)willRecoverDatabase;
- (id)db;
- (void)setDb:(id)arg1;
- (id)tableLiteAppInfo;
- (void)setTableLiteAppInfo:(id)arg1;
- (id)tableLiteAppAuthInfo;
- (void)setTableLiteAppAuthInfo:(id)arg1;
- (id)tableLiteAppBaseLibInfo;
- (void)setTableLiteAppBaseLibInfo:(id)arg1;
- (id)tableIlinkCheckResourceInfo;
- (void)setTableIlinkCheckResourceInfo:(id)arg1;
- (id)tableLiteAppConfigInfo;
- (void)setTableLiteAppConfigInfo:(id)arg1;
- (void).cxx_destruct;
@end

