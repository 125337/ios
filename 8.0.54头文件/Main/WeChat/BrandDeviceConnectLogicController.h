@interface BrandDeviceConnectLogicController : MMObject <IWCDeviceBrandMgrExt, IWCDeviceAccountMgrExt>
{
    CContact * m_contact; // +0x8
    int m_brandDeviceConnectedCount; // +0x10
    NSMutableArray * m_devices; // +0x18
    NSMutableSet * m_hasTryOnceDeviceSet; // +0x20
    BOOL m_is15SScanEnd; // +0x28
    BOOL m_hasLongConnetDevice; // +0x29
    BOOL m_hasWifiDevice; // +0x2a
    BOOL m_hasEADevice; // +0x2b
    BOOL m_hasBLEDevice; // +0x2c
    id <BrandDeviceConnectLogicControllerDelegate> m_delegate; // +0x30
}
- (void)dealloc;
- (id)initWithContact:(id)arg1;
- (void)willEnterForeground;
- (id)getDeviceForDid:(long long)arg1;
- (void)updateBrandDevciesType;
- (void)internalStartScan:(BOOL)arg1;
- (void)genConnProtoAndDoScan;
- (void)updateSubTitle;
- (void)wifiStateUpdate;
- (void)startScan;
- (void)restartScan;
- (void)stopScan;
- (void)scanTimeout;
- (void)showErrTips:(int)arg1;
- (void)onWCDeviceWifiStatusUpdate:(id)arg1 Status:(unsigned int)arg2;
- (void)onWCDeviceFound:(long long)arg1 canHandled:(BOOL *)arg2;
- (void)onWCDeviceLost:(long long)arg1;
- (void)onWCDeviceChannelStateChanged:(long long)arg1 :(int)arg2 :(int)arg3;
- (void)onWCDeviceAuthEnd:(int)arg1 DID:(long long)arg2 isHandled:(BOOL *)arg3;
- (void)onWCDeviceInitEnd:(int)arg1 DID:(long long)arg2 isHandled:(BOOL *)arg3;
- (void)onWCDeviceBlueToothStateChanged:(int)arg1;
- (void)onWCDeviceSessionTimeout:(long long)arg1;
- (void)onBlueProfileConnectStateChanged:(long long)arg1 State:(int)arg2 ErrorCode:(int)arg3;
- (void)onBlueProfilePedometerInfoUpdated:(long long)arg1 Info:(id)arg2;
- (void)onWCDeviceAccountUnbind:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end

