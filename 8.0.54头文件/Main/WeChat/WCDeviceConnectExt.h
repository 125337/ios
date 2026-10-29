@interface WCDeviceConnectExt : MMObject
{
    WCDevice * _device; // +0x8
    int _connectState; // +0x10
    BOOL _tryConnect; // +0x14
}
- (int)connectState;
- (void)setConnectState:(int)arg1;
- (id)device;
- (void)setDevice:(id)arg1;
- (BOOL)tryConnect;
- (void)setTryConnect:(BOOL)arg1;
- (void).cxx_destruct;
@end

