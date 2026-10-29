@interface WCDeviceAuthLogic : MMObject <PBMessageObserverDelegate>
{
    NSMutableArray * m_deviceInfos; // +0x8
    int m_appState; // +0x10
    id <WCDeviceAuthLogicDelegate> _delegate; // +0x18
}
- (id)init;
- (void)dealloc;
- (void)willEnterForeground;
- (void)willSuspend;
- (void)sendAuthReqToSvr:(id)arg1 AuthBuffer:(id)arg2;
- (id)getSessionBuffer:(long long)arg1;
- (BOOL)setNeedAuth:(long long)arg1;
- (BOOL)isDeviceAuthed:(long long)arg1;
- (void)handleDeivceLost:(long long)arg1;
- (id)__toNSString:(void *)arg1 :(int)arg2;
- (id)genAuthRespTask:(int)arg1 DeviceID:(long long)arg2 Seq:(unsigned short)arg3 AESSessionKey:(id)arg4;
- (void)handleDeviceAuthReq:(long long)arg1 :(unsigned short)arg2 :(unsigned short)arg3 :(_MmBp__AuthRequest * *)arg4;
- (void)handleWCDeviceChannelStateChanged:(long long)arg1 OldState:(int)arg2 NewState:(int)arg3;
- (void)__callbackEnd:(int)arg1 DID:(unsigned long long)arg2 RespTask:(id)arg3 SessionKey:(id)arg4;
- (void)__clearDeviceInfoByDeviceId:(long long)arg1;
- (id)__findDeviceInfoByDid:(long long)arg1;
- (id)__findDeviceInfoByDeviceID:(id)arg1;
- (void)handleWCDeviceAuthResopnse:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
