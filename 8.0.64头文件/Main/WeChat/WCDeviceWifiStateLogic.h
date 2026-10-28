@interface WCDeviceWifiStateLogic : MMObject <PBMessageObserverDelegate>
{
    NSMutableArray * m_devices; // +0x8
    id <WCDeviceWifiStateLogicDelegate> _delegate; // +0x10
}
- (id)init;
- (void)dealloc;
- (void)sendWCDeviceWifiStateSubscribe:(id)arg1 ReqType:(unsigned int)arg2;
- (int)getWCDeviceWifiState:(id)arg1;
- (void)sendWCDeviceWifiStatusSubscribeForDeviceID:(id)arg1 AndDeviceType:(id)arg2 AndReqType:(unsigned int)arg3;
- (void)handleWifiStateUpdateMsg:(id)arg1;
- (void)handleWCDeviceWifiStateSubscribeResopnse:(id)arg1;
- (BOOL)isDeviceSubscribing:(id)arg1;
- (id)getSubscribingWithDeviceType:(id)arg1 andDieviceID:(id)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
