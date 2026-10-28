@interface WCLanDeviceJsonKissLogic : WCLanDeviceBaseKissLogic <IWCLanDeviceMgrExt, PBMessageObserverDelegate>
{
    NSMutableDictionary * m_sendTaskMap; // +0x8
}
- (id)initWithDelegate:(id)arg1 deviceData:(id)arg2;
- (void)dealloc;
- (void)forwardData:(id)arg1 toDevice:(id)arg2 isThrouSever:(BOOL)arg3;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleDeviceMsgTransferAppMsg:(id)arg1;
- (void)kissDeviceWithJsonStr:(id)arg1 deviceType:(id)arg2 deviceId:(id)arg3;
- (void)onSendDataToWCLanDevice:(long long)arg1 ErrCode:(int)arg2;
- (BOOL)cancelTaskWithDevice:(id)arg1;
- (void).cxx_destruct;
@end
