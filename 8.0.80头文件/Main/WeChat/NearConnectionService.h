@interface NearConnectionService : MMUserService <MMServiceProtocol>
{
    NSString * _lastBizName; // +0x8
}
- (id)init;
- (void)dealloc;
- (void)onServiceInit;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)onServiceMemoryWarning;
- (void)onServiceClearData;
- (void)onServiceTerminate;
- (id)initializeWithBizName:(id)arg1 userInfo:(id)arg2 sessionInfo:(id)arg3;
- (id)initializeWithBizName:(id)arg1 userInfo:(id)arg2 deviceInfo:(id)arg3 sessionInfo:(id)arg4;
- (void)uninitialize:(id)arg1;
- (BOOL)sendData:(id)arg1;
- (id)receiveData;
- (void)close;
- (int)getErrno;
- (id)getErrnoString;
- (void)updateQrId:(id)arg1;
- (unsigned long long)getTransferAvgSpeed;
- (unsigned long long)getMaxTransferSpeed;
- (void)CommonRef;
- (id)lastBizName;
- (void)setLastBizName:(id)arg1;
- (void).cxx_destruct;
@end
