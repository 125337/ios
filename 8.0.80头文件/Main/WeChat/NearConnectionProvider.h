@interface NearConnectionProvider : NSObject <NearConnectionProviderBase>
{
    NearConnectionProviderCallback * _zidlCallback; // +0x8
    BonjourDeviceDiscoveryManager * _bonjourManager; // +0x10
}
- (id)init;
- (void)setCallback:(id)arg1;
- (void)activateAWDLAsync:(unsigned long long)arg1;
- (void)deactivateAWDLAsync:(unsigned long long)arg1;
- (void)registerReceiver;
- (void)unregisterReceiver;
- (void)createGroupAsync:(unsigned long long)arg1;
- (void)connectToGroupAsync:(unsigned long long)arg1 networkName:(id)arg2 passphrase:(id)arg3;
- (void)removeGroup;
- (void)disconnectFromGroup:(id)arg1;
- (int)checkLocalNetworkPermission;
- (int)isWiFiEnable;
- (void)kvStat:(id)arg1;
- (id)commonFunc:(id)arg1 paramsPb:(id)arg2;
- (void)commonFuncAsyncAsync:(unsigned long long)arg1 funcName:(id)arg2 paramsPb:(id)arg3;
- (id)zidlCallback;
- (void)setZidlCallback:(id)arg1;
- (id)bonjourManager;
- (void)setBonjourManager:(id)arg1;
- (void).cxx_destruct;
@end
