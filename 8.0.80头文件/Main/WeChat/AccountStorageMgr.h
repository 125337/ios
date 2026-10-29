@interface AccountStorageMgr : MMUserService <MMServiceProtocol>
{
    NSRecursiveLock * m_oLock; // +0x8
    SyncBufferInfo * m_oSyncBufferInfo; // +0x10
    NSString * m_nsDocPath; // +0x18
    BOOL m_testMemoryInvalid; // +0x20
    BOOL m_testPhysicalInvalid; // +0x21
    BOOL m_testSettingInvalid; // +0x22
    CSetting * m_oSetting; // +0x28
    CSettingExt * m_oSettingExt; // +0x30
    CUpdateInfo * m_oUpdateInfo; // +0x38
}
- (id)m_oSetting;
- (void)setM_oSettingExt:(id)arg1;
- (id)m_oSettingExt;
- (void)setM_oUpdateInfo:(id)arg1;
- (id)m_oUpdateInfo;
- (id)init;
- (void)closeResource;
- (void)dealloc;
- (void)ResetMemorySyncBuffer;
- (BOOL)ValidForPhysicalSyncBuffer;
- (BOOL)ValidForMemorySyncBuffer;
- (BOOL)ValidForSettingInfo;
- (void)LoadSetting;
- (void)DirectSaveSetting;
- (void)MainThreadSaveSetting;
- (void)LoadSettingExt;
- (void)SaveSettingExt;
- (void)LoadUpdateInfo;
- (void)SaveUpdateInfo;
- (id)GetUpdateInfo;
- (BOOL)MergeAndSaveSyncBuffer:(id)arg1;
- (BOOL)SaveSyncBuffer:(id)arg1;
- (id)GetSyncBuffer;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)clearSyncBuffer;
- (id)syncBufferMMKV;
- (id)loadSvrSyncBufferKey;
- (BOOL)saveSvrSyncBufferKey:(id)arg1;
- (BOOL)internalWriteSyncBuffer:(id)arg1;
- (id)internalReadSyncBuffer;
- (void)internalRemoveSyncBuffer;
- (void).cxx_destruct;
@end
