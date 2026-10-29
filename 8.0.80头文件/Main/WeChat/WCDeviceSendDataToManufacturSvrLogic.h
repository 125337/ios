@interface WCDeviceSendDataToManufacturSvrLogic : MMObject <PBMessageObserverDelegate>
{
    NSMutableArray * m_tasks; // +0x8
    int m_appState; // +0x10
    id <WCDeviceSendDataToManufacturSvrLogicDelegate> _delegate; // +0x18
    long long _m_sessionId; // +0x20
}
- (id)init;
- (void)dealloc;
- (void)willEnterForeground;
- (void)willSuspend;
- (void)handleDeviceSendDataToManufacturerSvrReq:(long long)arg1 :(unsigned short)arg2 :(unsigned short)arg3 :(_MmBp__SendDataRequest * *)arg4 SessionBuffer:(id)arg5;
- (void)clearTimeoutTask;
- (void)handleSendMessageResponse:(unsigned long long)arg1 Device:(id)arg2 Error:(id)arg3;
- (void)handleSvrResp:(id)arg1;
- (void)handleWCDeviceCmdEnd:(long long)arg1 ErrType:(int)arg2 ErrCode:(int)arg3 ErrMsg:(const char *)arg4;
- (void)handleWCDeviceChannelStateChanged:(long long)arg1 OldState:(int)arg2 NewState:(int)arg3;
- (void)handleDeviceLost:(unsigned long long)arg1;
- (void)__sendRespToDevice:(id)arg1 :(int)arg2 :(AutoBuffer *)arg3;
- (void)__clearTaskById:(long long)arg1;
- (id)__findTaskByTaskId:(long long)arg1;
- (id)__findTaskBySessionId:(long long)arg1;
- (void)handleSendWCDeviceMessageResponse:(id)arg1;
- (void)sendWCDeviceMessageRequest:(id)arg1;
- (void)sendWCDeviceMessageRequest:(id)arg1 Retry:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)m_sessionId;
- (void)setM_sessionId:(long long)arg1;
- (void).cxx_destruct;
@end
