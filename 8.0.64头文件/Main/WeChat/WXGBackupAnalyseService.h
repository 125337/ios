@interface WXGBackupAnalyseService : MMUserService <MMServiceProtocol>
{
    BOOL _hasPause; // +0x8
    WCTDatabase * _infoDB; // +0x10
    BackupAnalyseInfo * _finishInfo; // +0x18
    WXGBackupRecoverAnalyseInfo * _recoverInfo; // +0x20
    WXGImportAnalyseInfo * _importInfo; // +0x28
}
+ (id)briefForAnalyseInfo:(id)arg1;
- (id)init;
- (void)insertAnalyseInfo:(id)arg1 type:(unsigned long long)arg2;
- (void)insertRecoverInfo:(id)arg1 type:(unsigned long long)arg2;
- (void)insertImportInfo:(id)arg1 type:(unsigned long long)arg2;
- (void)insertBackupMgrInfo:(id)arg1 type:(unsigned long long)arg2;
- (id)getLastFiveInfoString;
- (void)setHasPauseWhenTransfer;
- (void)reportDataReconciliation;
- (id)infoDB;
- (void)setInfoDB:(id)arg1;
- (id)finishInfo;
- (void)setFinishInfo:(id)arg1;
- (id)recoverInfo;
- (void)setRecoverInfo:(id)arg1;
- (id)importInfo;
- (void)setImportInfo:(id)arg1;
- (BOOL)hasPause;
- (void)setHasPause:(BOOL)arg1;
- (void).cxx_destruct;
@end
