@interface BlueManager : MMRootService <MMServiceProtocol, CBCentralManagerDelegate, BlueAdapterDelegate>
{
    CBCentralManager * _bleManager; // +0x8
    BOOL _stateUpdateFlag; // +0x10
    NSObject<OS_dispatch_queue> * m_blueQueue; // +0x18
    BlueAdapterBase *[2] adapter; // +0x20
    NSObject<BlueAdapterDelegate> * _delegate; // +0x30
}
+ (long long)getDIDbyMACString:(id)arg1 AndConnProto:(id)arg2;
- (void)cleanUpAllDevices;
- (void)onServiceInit;
- (void)dealloc;
- (int)getState;
- (void)centralManagerDidUpdateState:(id)arg1;
- (BOOL)enable;
- (BOOL)scan;
- (BOOL)scanForWDevice;
- (BOOL)scanAll;
- (BOOL)scanEa;
- (BOOL)scanBle:(BOOL)arg1;
- (void)stopScan;
- (id)getDeviceProtocols:(long long)arg1;
- (long long)getDIDbySessionID:(long long)arg1;
- (int)getDeviceType:(long long)arg1;
- (id)getDeviceName:(long long)arg1;
- (id)getDeviceMac:(long long)arg1;
- (long long)createSession:(long long)arg1;
- (int)connectSession:(long long)arg1;
- (void)closeSession:(long long)arg1;
- (int)readSession:(long long)arg1 :(char *)arg2 :(int)arg3;
- (void)writeSession:(long long)arg1 :(const char *)arg2 :(int)arg3;
- (int)connectProfile:(long long)arg1 ProfileType:(int)arg2;
- (void)closeProfile:(long long)arg1;
- (int)getProfileType:(long long)arg1;
- (int)getProfileConnectState:(long long)arg1;
- (int)readPedometerProfileCurPedometerInfo:(long long)arg1;
- (int)readPedometerProfileTarget:(long long)arg1;
- (int)writePedometerProfileTarget:(long long)arg1 Step:(int)arg2;
- (void)onDeviceFound:(long long)arg1;
- (void)onDeviceFound:(long long)arg1 WithExtData:(id)arg2;
- (void)onDeviceLost:(long long)arg1;
- (void)onSessionConnected:(long long)arg1;
- (void)onSessionConnectError:(long long)arg1 errorCode:(int)arg2;
- (void)onSessionWrote:(long long)arg1;
- (void)onSessionError:(long long)arg1 errorCode:(int)arg2;
- (void)onSessionDataAvailable:(long long)arg1;
- (void)onSessionClosed:(long long)arg1;
- (void)onBlueProfileConnectStateChanged:(long long)arg1 State:(int)arg2 ErrorCode:(int)arg3;
- (void)onBlueProfilePedometerInfoUpdated:(long long)arg1 Info:(id)arg2;
- (void)onBlueProfilePedometerTargetUpdated:(long long)arg1 Step:(int)arg2;
- (void)onBlueProfilePedometerTargetWrote:(long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)bleManager;
- (void)setBleManager:(id)arg1;
- (BOOL)stateUpdateFlag;
- (void)setStateUpdateFlag:(BOOL)arg1;
- (void).cxx_destruct;
@end
