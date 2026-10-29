@interface WXGBackupMigrateMobileLogic : WXGBackupBasicLogic <WXGBackupRecoverHelperDelegate, WXGBackupImportMessageHelperDelegate, WXGBackupBasicLogicProtocol>
{
    BOOL _bStopService; // +0x8
    BOOL _bFirstTag; // +0x9
    BOOL _bProcessFinish; // +0xa
    WXGBackupRecoverHelper * _recoverHelper; // +0x10
    WXGBackupImportMessageHelper * _importHelper; // +0x18
    NSObject<OS_dispatch_group> * _writeGroup; // +0x20
    NSData * _finishData; // +0x28
    NSMutableDictionary * _filterSizeDic; // +0x30
    unsigned long long _backFilterSizes; // +0x38
    unsigned long long _currentSessionCount; // +0x40
    unsigned long long _totalSessionCount; // +0x48
    NSString * _lastSessionName; // +0x50
}
- (id)init;
- (id)recoverHelper;
- (id)importHelper;
- (void)startService;
- (void)stopService;
- (void)confirmLogic;
- (BOOL)sendData:(id)arg1;
- (void)sendMigratePCConfirm;
- (void)sendStartResponseWithStatus:(int)arg1;
- (void)sendRequestSessionResponseWithDataInfoArray:(id)arg1;
- (void)sendDataPushResponse:(id)arg1;
- (void)sendDataTagResponseForDataTag:(id)arg1;
- (void)sendFilterResponse:(id)arg1;
- (void)processStartRequestData:(id)arg1;
- (void)processRequestSessionData:(id)arg1;
- (void)processDataPushData:(id)arg1;
- (void)processBackupDataTagData:(id)arg1;
- (void)processFilterRequestData:(id)arg1;
- (void)processFinishRequestData:(id)arg1;
- (void)onData:(id)arg1 writeToFileFinish:(BOOL)arg2;
- (void)onDataTagProcessEnd:(id)arg1;
- (void)onRequestSessionProcessEndWithResponse:(id)arg1;
- (void)onFilterRequestEnd:(id)arg1 filterSize:(unsigned long long)arg2;
- (BOOL)onPhoneDiskNotEnouge;
- (void)onLastImportFinished;
- (void)onBackupImportMessageFinish;
- (void)onBackupImportMessageError;
- (void)onBackupImportMessagePrepareFinish;
- (void)reportDisconnect:(unsigned long long)arg1;
- (void)setRecoverHelper:(id)arg1;
- (void)setImportHelper:(id)arg1;
- (id)writeGroup;
- (void)setWriteGroup:(id)arg1;
- (id)finishData;
- (void)setFinishData:(id)arg1;
- (id)filterSizeDic;
- (void)setFilterSizeDic:(id)arg1;
- (unsigned long long)backFilterSizes;
- (void)setBackFilterSizes:(unsigned long long)arg1;
- (BOOL)bStopService;
- (void)setBStopService:(BOOL)arg1;
- (unsigned long long)currentSessionCount;
- (void)setCurrentSessionCount:(unsigned long long)arg1;
- (unsigned long long)totalSessionCount;
- (void)setTotalSessionCount:(unsigned long long)arg1;
- (BOOL)bFirstTag;
- (void)setBFirstTag:(BOOL)arg1;
- (id)lastSessionName;
- (void)setLastSessionName:(id)arg1;
- (BOOL)bProcessFinish;
- (void)setBProcessFinish:(BOOL)arg1;
- (void).cxx_destruct;
@end

