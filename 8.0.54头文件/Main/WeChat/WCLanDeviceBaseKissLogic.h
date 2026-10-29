@interface WCLanDeviceBaseKissLogic : NSObject <IWCLanDeviceMgrExt, PBMessageObserverDelegate>
{
    NSMutableSet * m_deviceMd5Set; // +0x8
    NSMutableDictionary * m_lanDeviceDict; // +0x10
    NSMutableDictionary * m_reqEventMap; // +0x18
    WCLanDeviceMgr * m_lanMgr; // +0x20
    id <WCLanDeviceKissLogicDelegate> _delegate; // +0x28
    unsigned long long _deviceScene; // +0x30
    WCLanDeviceData * _deviceData; // +0x38
}
- (id)init;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 deviceData:(id)arg2;
- (void)startScan;
- (void)stopScan;
- (void)disconnect;
- (id)devicesApplySceneAndSupportInternetKissOnly;
- (id)devicesApplyScene;
- (id)lanDeviceWithDeviceMD5:(id)arg1;
- (unsigned int)popEventIdRelatedWithDevice:(id)arg1;
- (BOOL)cancelTaskWithDevice:(id)arg1;
- (BOOL)filterSearchLanDevice:(id)arg1;
- (void)onReceiveWCLanDeviceProfile:(id)arg1;
- (void)forwardData:(id)arg1 toDevice:(id)arg2 isThrouSever:(BOOL)arg3;
- (void)sendRequest:(id)arg1 Retry:(unsigned int)arg2 Device:(id)arg3;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)deviceScene;
- (void)setDeviceScene:(unsigned long long)arg1;
- (id)deviceData;
- (void)setDeviceData:(id)arg1;
- (void).cxx_destruct;
@end

