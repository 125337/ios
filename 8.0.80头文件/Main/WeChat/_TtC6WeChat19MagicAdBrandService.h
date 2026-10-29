@interface _TtC6WeChat19MagicAdBrandService : _TtC6WeChat21MagicBrandBaseService
{
     brandTimelineOpened; // +0x39
}
- (BOOL)isBrandTimelineOpen;
- (BOOL)shouldPreLayoutWhenExpose;
- (long long)getDynamicCardType;
- (BOOL)isBizOpen;
- (void)createBrandServiceBizWithScene:(long long)arg1;
- (void)pause;
- (void)resume;
- (void)notifyStateChangeWithEventName:(id)arg1;
- (void)notifyFrameSetInfoWithMsgId:(double)arg1 frameSetName:(id)arg2 frameSetData:(id)arg3;
- (void)notifyAdServerInfoEventWithFeedsType:(long long)arg1 adInfo:(id)arg2;
- (void)notifyOftenReadFrameSetInfoWithFrameSetName:(id)arg1 frameSetData:(id)arg2 sessionId:(id)arg3 cardId:(id)arg4;
- (void)notifyOftenReadEnterEventWithSessionId:(id)arg1;
- (void)notifyOftenReadExitEventWithSessionId:(id)arg1;
- (void)notifyOftenReadAccountChangedEventWithSessionId:(id)arg1 bizIndex:(long long)arg2;
- (void)notifyResortStatusWithTaskId:(long long)arg1 scene:(long long)arg2 event:(id)arg3 bizTLResortEventInfo:(id)arg4;
- (void)testJsWithTestJs:(id)arg1;
- (void)destroyBrandServiceBizWithScene:(long long)arg1;
- (id)init;
- (void).cxx_destruct;
@end
