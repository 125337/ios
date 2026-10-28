@interface MMActiveStorageService : MMUserService <IMsgExt, MMServiceProtocol>
{
    BOOL _isScanning; // +0x8
    NSMutableArray * _arrSessionInfo; // +0x10
    NSMutableArray * _arrBrandSessionInfo; // +0x18
    NSObject<OS_dispatch_queue> * _serviceQueue; // +0x20
    MMActiveMessageInfoPersist * _persistInfo; // +0x28
    MMActiveStorageReportStatus * _lastReportStatus; // +0x30
    MMTimer * _reportTimer; // +0x38
}
+ (unsigned int)parseMesLocalIdFromPath:(id)arg1;
+ (BOOL)checkActiveWithLocalID:(unsigned int)arg1 infoType:(unsigned long long)arg2 fileName:(id)arg3 with:(id)arg4;
- (void)onServiceInit;
- (void)reportPhase;
- (BOOL)isShouldReport;
- (BOOL)getOpenToReport;
- (unsigned int)getActiveMsgInterval;
- (BOOL)shouldReportClickTimeGothrough;
- (void)startToReport;
- (void)checkSession:(id)arg1 reportStatus:(id)arg2;
- (void)onUserClickImage:(id)arg1 byChangePage:(BOOL)arg2;
- (void)onUserClickVideo:(id)arg1 inFullScreenView:(BOOL)arg2;
- (void)onUserClickFile:(id)arg1;
- (void)onUserClickAudio:(id)arg1;
- (id)arrSessionInfo;
- (void)setArrSessionInfo:(id)arg1;
- (id)arrBrandSessionInfo;
- (void)setArrBrandSessionInfo:(id)arg1;
- (id)serviceQueue;
- (void)setServiceQueue:(id)arg1;
- (id)persistInfo;
- (void)setPersistInfo:(id)arg1;
- (id)lastReportStatus;
- (void)setLastReportStatus:(id)arg1;
- (BOOL)isScanning;
- (void)setIsScanning:(BOOL)arg1;
- (id)reportTimer;
- (void)setReportTimer:(id)arg1;
- (void).cxx_destruct;
@end
