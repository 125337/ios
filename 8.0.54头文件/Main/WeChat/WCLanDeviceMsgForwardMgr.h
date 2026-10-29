@interface WCLanDeviceMsgForwardMgr : MMUserService <WCLanDeviceKissLogicDelegate, MMServiceProtocol>
{
    WCLanDeviceData * m_forwardData; // +0x8
    NSMutableArray * m_currentDeviceList; // +0x10
    NSMutableSet * m_deviceLanFlagCache; // +0x18
    NSMutableSet * m_deviceMD5Set; // +0x20
    NSMutableSet * m_deviceConnectFlagCache; // +0x28
    WCLanDeviceBaseKissLogic * m_kissLogic; // +0x30
    BOOL m_hasOperated; // +0x38
    long long m_opScene; // +0x40
}
- (id)init;
- (void)initializeWithMessageWrap:(id)arg1 OpScene:(long long)arg2;
- (void)initializeWithTimeLineItem:(id)arg1 mediaItem:(id)arg2 OpScene:(long long)arg3;
- (BOOL)hasAvailableDeviceInScene:(unsigned long long)arg1;
- (BOOL)hasAvailableDeviceInMessageWrap:(id)arg1;
- (BOOL)hasAvailableDeviceInTimeLineItem:(id)arg1;
- (BOOL)hasAvailableDeviceWithData:(id)arg1;
- (id)availableDevicesInCache;
- (BOOL)startScan;
- (BOOL)forwardToLanDevice:(id)arg1;
- (BOOL)cancelForwarMessageToLanDevice:(id)arg1;
- (BOOL)hasConnectTask;
- (void)stopScan;
- (void)stopAllLogic;
- (void)clearSelf;
- (void)boundDevicesFinalFeedBack;
- (void)onDeviceFound:(id)arg1;
- (void)onKissDeviceWithDevice:(id)arg1 errCode:(int)arg2;
- (void)onKissDeviceProgressUpdate:(double)arg1 device:(id)arg2;
- (BOOL)isActive;
- (void).cxx_destruct;
@end

