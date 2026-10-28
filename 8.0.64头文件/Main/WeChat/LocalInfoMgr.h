@interface LocalInfoMgr : MMRootService <MMServiceProtocol>
{
    NSRecursiveLock * m_lock; // +0x8
    CLocalInfo * m_localInfo; // +0x10
    BOOL _disableSave; // +0x18
}
- (void)onServiceInit;
- (BOOL)returnAsRawService;
- (void)setDisableSave:(BOOL)arg1;
- (id)localInfo;
- (void)loadLocalInfo;
- (BOOL)saveLocalInfo;
- (void)clearAllLocalInfo;
- (void)clearLocalInfo;
- (void)setMmtlsCtrlFlag:(unsigned int)arg1 force:(BOOL)arg2;
- (BOOL)disableSave;
- (void).cxx_destruct;
@end
