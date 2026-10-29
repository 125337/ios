@interface BlueEAAdapter : BlueAdapterBase <EAAccessoryDelegate, NSStreamDelegate>
{
    EAAccessoryManager * m_eaAdapter; // +0x28
    NSRunLoop * m_runLoop; // +0x30
}
- (id)initWithDelegate:(id)arg1 withQueue:(id)arg2;
- (void)dealloc;
- (BOOL)scan;
- (BOOL)scanAll;
- (void)stopScan;
- (void)removeDevice:(id)arg1;
- (id)getDeviceProtocols:(long long)arg1;
- (id)getDeviceName:(long long)arg1;
- (long long)createSession:(long long)arg1;
- (int)connectSession:(long long)arg1;
- (void)closeSession:(long long)arg1;
- (int)readSession:(long long)arg1 :(char *)arg2 :(int)arg3;
- (void)writeSession:(long long)arg1 :(const char *)arg2 :(int)arg3;
- (void)deviceConnected:(id)arg1;
- (void)deviceDisconnected:(id)arg1;
- (BOOL)isWeChatDevice:(id)arg1;
- (void)accessoryDidDisconnect:(id)arg1;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void).cxx_destruct;
@end

