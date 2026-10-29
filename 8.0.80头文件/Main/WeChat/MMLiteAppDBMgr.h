@interface MMLiteAppDBMgr : MMUserService <MMServiceProtocol>
{
    WCTDatabase * _db; // +0x8
    WCTTable * _tableLiteAppInfo; // +0x10
    WCTTable * _tableLiteAppAuthInfo; // +0x18
    WCTTable * _tableLiteAppBaseLibInfo; // +0x20
    WCTTable * _tableIlinkCheckResourceInfo; // +0x28
    WCTTable * _tableLiteAppConfigInfo; // +0x30
    WCTTable * _tableLiteAppSamplingConfigInfo; // +0x38
    WCTTable * _tableLiteAppTriggerActions; // +0x40
}
- (id)wxa_getLiteAppInfoItemByAppId:(id)arg1;
- (BOOL)wxa_deleteLiteAppInfoItemByAppId:(id)arg1;
- (BOOL)wxa_insertLiteAppInfoDBItem:(id)arg1;
- (id)wxa_getLiteAppList;
- (BOOL)wxa_insertLiteAppAuthInfoDBItem:(id)arg1;
- (id)wxa_getLiteAppAuthInfoItemByUrl:(id)arg1;
- (BOOL)wxa_insertLiteAppBaseLibInfo:(id)arg1;
- (id)wxa_getLiteAppBaseLibList;
- (id)wxa_getLatestLiteAppBaseLibInfo;
- (id)wxa_getLiteAppBaseLibInfoByType:(id)arg1;
- (id)wxa_getLiteAppBaseLibInfo:(id)arg1;
- (BOOL)wxa_deleteLiteAppBaseLibInfo:(id)arg1;
- (BOOL)wxa_insertLiteAppConfigInfo:(id)arg1;
- (id)wxa_getLiteAppConfigInfo:(id)arg1;
- (id)wxa_getLiteAppGlobalConfigInfo;
- (id)wxa_getLiteAppConfigInfoList;
- (BOOL)wxa_deleteLiteAppConfigInfo:(id)arg1;
- (id)wxa_getLiteAppEngineConfigInfo;
- (BOOL)wxa_insertLiteAppSamplingConfigInfo:(id)arg1;
- (id)wxa_getLiteAppSamplingConfigInfo:(id)arg1;
- (id)wxa_getLiteAppGlobalSamplingConfigInfo;
- (id)wxa_getLiteAppSamplingConfigInfoList;
- (BOOL)wxa_insertLiteAppTriggerActions:(id)arg1 appId:(id)arg2 triggerActionsJson:(id)arg3;
- (id)wxa_getLiteAppTriggerActionsByEventName:(id)arg1;
- (BOOL)wxa_deleteLiteAppTriggerActionsByAppId:(id)arg1;
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
- (BOOL)insertLiteAppConfigInfo:(id)arg1;
- (id)getLiteAppConfigInfo:(id)arg1;
- (id)getLiteAppGlobalConfigInfo;
- (id)getLiteAppConfigInfoList;
- (BOOL)deleteLiteAppConfigInfo:(id)arg1;
- (id)getLiteAppEngineConfigInfo;
- (BOOL)insertLiteAppSamplingConfigInfo:(id)arg1;
- (id)getLiteAppSamplingConfigInfo:(id)arg1;
- (id)getLiteAppGlobalSamplingConfigInfo;
- (id)getLiteAppSamplingConfigInfoList;
- (BOOL)insertLiteAppTriggerActions:(id)arg1 appId:(id)arg2 triggerActionsJson:(id)arg3;
- (id)getLiteAppTriggerActionsByEventName:(id)arg1;
- (BOOL)deleteLiteAppTriggerActionsByAppId:(id)arg1;
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
- (id)tableLiteAppSamplingConfigInfo;
- (void)setTableLiteAppSamplingConfigInfo:(id)arg1;
- (id)tableLiteAppTriggerActions;
- (void)setTableLiteAppTriggerActions:(id)arg1;
- (void).cxx_destruct;
@end
