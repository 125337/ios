@interface WABluetoothMonitorOpenWeAppJob : NSObject
{
    NSString * _appId; // +0x8
    WABluetoothMonitoredDevice * _monitoredDevice; // +0x10
    id /* block */ _terminateHandler; // +0x18
    id /* block */ _openSuccessHandler; // +0x20
    id /* block */ _openFailHandler; // +0x28
}
- (id)description;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)monitoredDevice;
- (void)setMonitoredDevice:(id)arg1;
- (id /* block */)terminateHandler;
- (void)setTerminateHandler:(id /* block */)arg1;
- (id /* block */)openSuccessHandler;
- (void)setOpenSuccessHandler:(id /* block */)arg1;
- (id /* block */)openFailHandler;
- (void)setOpenFailHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end
