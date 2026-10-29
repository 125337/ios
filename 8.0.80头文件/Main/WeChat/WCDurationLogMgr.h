@interface WCDurationLogMgr : MMUserService <MMServiceProtocol>
{
    BOOL _isUserLogoutInThisSession; // +0x8
    WCDurationLogItem * _currentLogItem; // +0x10
    WCDurationLogDB * _dataBase; // +0x18
    MemoryMappedKV * _mmap; // +0x20
}
- (void)onServiceInit;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)onServiceClearData;
- (void)onServiceTerminate;
- (void)report;
- (void)insertLogItemToMMap:(id)arg1;
- (void)tryUploadAllItemInMMap;
- (void)uploadAllItemsInDB;
- (id)getFirstLogItemDesc;
- (id)getLogItemDescAtIndex:(long long)arg1;
- (id)dataBase;
- (id)currentLogItem;
- (id)mmap;
- (void)setCurrentLogItem:(id)arg1;
- (void)setDataBase:(id)arg1;
- (BOOL)isUserLogoutInThisSession;
- (void)setIsUserLogoutInThisSession:(BOOL)arg1;
- (void)setMmap:(id)arg1;
- (void).cxx_destruct;
@end
