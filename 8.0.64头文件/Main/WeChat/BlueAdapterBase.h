@interface BlueAdapterBase : NSObject <BlueProfilePedometer>
{
    id <BlueAdapterDelegate> m_delegate; // +0x8
    BlueDevicePool * m_devices; // +0x10
    NSObject<OS_dispatch_queue> * m_queue; // +0x18
    NSRecursiveLock * m_lock; // +0x20
}
- (id)initWithDelegate:(id)arg1 withQueue:(id)arg2;
- (void)cleanUpAllDevices;
- (BOOL)scan;
- (BOOL)scanAll;
- (void)stopScan;
- (id)getDeviceProtocols:(long long)arg1;
- (id)getDeviceName:(long long)arg1;
- (id)getDeviceMac:(long long)arg1;
- (long long)getDIDbySessionID:(long long)arg1;
- (long long)createSession:(long long)arg1;
- (int)connectSession:(long long)arg1;
- (void)closeSession:(long long)arg1;
- (int)readSession:(long long)arg1 :(char *)arg2 :(int)arg3;
- (void)writeSession:(long long)arg1 :(const char *)arg2 :(int)arg3;
- (void)onBlueToothPowerOff;
- (int)connectProfile:(long long)arg1 ProfileType:(int)arg2;
- (void)closeProfile:(long long)arg1;
- (int)getProfileType:(long long)arg1;
- (int)getProfileConnectState:(long long)arg1;
- (int)readPedometerProfileCurPedometerInfo:(long long)arg1;
- (int)readPedometerProfileTarget:(long long)arg1;
- (int)writePedometerProfileTarget:(long long)arg1 Step:(int)arg2;
- (id)m_devices;
- (void)setM_devices:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_lock;
- (void)setM_lock:(id)arg1;
- (void).cxx_destruct;
@end
