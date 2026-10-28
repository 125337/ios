@interface WCDeviceSearchLogic : NSObject <IWCDeviceBrandMgrExt, IWCLanDeviceMgrExt>
{
    WCDeviceBrandMgr * m_manager; // +0x8
    WCLanDeviceMgr * m_LanManager; // +0x10
    WCDevice * m_fliterDevice; // +0x18
    NSMutableSet * m_macSet; // +0x20
    NSMutableDictionary * m_bleDeviceMap; // +0x28
    id <WCDeviceSearchLogicDelegate> _delegate; // +0x30
    unsigned long long _deviceSearchType; // +0x38
}
- (id)init;
- (id)initWithFliterDevice:(id)arg1;
- (void)dealloc;
- (void)startScan;
- (void)stopScan;
- (BOOL)fliterDevice:(id)arg1;
- (BOOL)isBLEDeviceBoundWithDid:(long long)arg1;
- (void)onReceiveWCLanDeviceDisc:(id)arg1;
- (void)onWifiHardDeviceSearch:(id)arg1 respData:(id)arg2 ExtData:(id)arg3;
- (void)onWCDeviceFound:(long long)arg1 canHandled:(BOOL *)arg2;
- (void)onBLEHardDeviceSearch:(id)arg1 modContact:(id)arg2 respData:(id)arg3 errorCode:(int)arg4;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)deviceSearchType;
- (void)setDeviceSearchType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
