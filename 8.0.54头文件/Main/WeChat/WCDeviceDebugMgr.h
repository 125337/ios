@interface WCDeviceDebugMgr : MMUserService <MMServiceProtocol>
{
    NSMutableArray * m_logs; // +0x8
    NSMutableArray * m_contacts; // +0x10
    WCDevicedebugSettingData * m_settingData; // +0x18
    NSRecursiveLock * m_lock; // +0x20
    NSMutableDictionary * m_userIndex; // +0x28
}
- (id)init;
- (void)onServiceInit;
- (void)onServiceMemoryWarning;
- (id)getAllLogUser;
- (BOOL)hasCanLogUser;
- (BOOL)isUserOpenLog:(id)arg1;
- (void)addDebugLog:(id)arg1 forDid:(long long)arg2;
- (void)addErrorLog:(id)arg1 forDid:(long long)arg2;
- (void)addDebugLog:(id)arg1 forDevice:(id)arg2;
- (void)addErrorLog:(id)arg1 forDevice:(id)arg2;
- (void)addTips:(id)arg1;
- (void)addInfo:(id)arg1;
- (id)getLogsFrom:(int)arg1 Limit:(int)arg2;
- (void)setLastIndex:(long long)arg1 forUser:(id)arg2;
- (long long)getLastIndexForUser:(id)arg1;
- (void)cleanAllLogs;
- (BOOL)checkPremissionIsOk:(id)arg1;
- (void)addLog:(id)arg1 isError:(BOOL)arg2 forDid:(long long)arg3;
- (void)addLog:(id)arg1 isError:(BOOL)arg2 forDevice:(id)arg3;
- (void)addObjecttoLogs:(id)arg1;
- (id)getSettingPath;
- (void)reloadContacts;
- (void).cxx_destruct;
@end

