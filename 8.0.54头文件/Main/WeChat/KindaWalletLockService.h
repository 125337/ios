@interface KindaWalletLockService : NSObject <PBMessageObserverDelegate, MMKWalletLockService>
{
    MMVoidITransmitKvDataCallback * _registerCallback; // +0x8
    MMVoidITransmitKvDataCallback * _opCallback; // +0x10
}
- (BOOL)isDeviceSupportUseTouchLock;
- (BOOL)isiOSDeviceUsingFaceID;
- (BOOL)isDeviceEnrolledBioData;
- (void)setWalletlockClose;
- (void)setTouchLockOpen:(id)arg1;
- (void)setTouchLockClose:(id)arg1;
- (BOOL)isTouchLockOpenLocal;
- (void)setPatternLockOpen:(id)arg1;
- (BOOL)isPatternLockOpenLocal;
- (void)checkIfPatternLockVerifyLocalImpl:(id)arg1;
- (void)showTouchLockAuthViewImpl:(id)arg1;
- (void)releaseTouchLockService;
- (void)prepareAndroidTouchLockAuthImpl:(id)arg1 isOffline:(BOOL)arg2 callback:(id)arg3;
- (BOOL)isPatternLockBlock;
- (long long)getPatternLockBlockTimeInterval;
- (void)setPatternLockBlock;
- (int)getPatternLockVerifyErrorCount;
- (void)setPatternLockVerifyErrorCount:(int)arg1;
- (void)callPatternLockRegisterImpl:(id)arg1 token:(id)arg2 callback:(id)arg3;
- (void)callPatternLockOpImpl:(int)arg1 nowHash:(id)arg2 newHash:(id)arg3 callback:(id)arg4;
- (BOOL)isAndroidDeviceUsingFaceID;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onGetRegisterNewPatternLockResponse:(id)arg1 eventID:(unsigned int)arg2;
- (void)onGetOpPatternLockResponse:(id)arg1 eventID:(unsigned int)arg2;
- (id)registerCallback;
- (void)setRegisterCallback:(id)arg1;
- (id)opCallback;
- (void)setOpCallback:(id)arg1;
- (void).cxx_destruct;
@end

