@interface AffBizDynamicCardMrgEventImpl : NSObject <AffBizDynamicCardMrgEventBase>
{
    AffBizDynamicCardMrgEventCallback * m_callBack; // +0x8
}
- (void)setCallback:(id)arg1;
- (void)callOnAdServerInfoAsync:(int)arg1 adInfo:(id)arg2;
- (void)callOnRecFeedsAdServerInfoAsync:(int)arg1 adInfo:(id)arg2;
- (void)callOnDynamicCardInfoAsync:(int)arg1 dynamicCardType:(int)arg2 msgId:(unsigned long long)arg3 frameSetName:(id)arg4 frameSetData:(id)arg5;
- (void)callOnOftenReadAdCardsAsync:(int)arg1 batch:(id)arg2;
- (void)callOnOftenReadFlowStateChangeAsync:(int)arg1 state:(int)arg2 bizIndex:(int)arg3 bizUserName:(id)arg4 sessionId:(id)arg5;
- (void).cxx_destruct;
@end
