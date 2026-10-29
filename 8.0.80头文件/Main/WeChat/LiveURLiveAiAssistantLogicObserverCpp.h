@interface LiveURLiveAiAssistantLogicObserverCpp : UnitRCObjcBaseProxyClass <LiveURLiveAiAssistantLogicObserver>
- (void)onAiAssistantNotificationListUpdated:(id)arg1;
- (void)onAiAssistantEnabledChanged:(BOOL)arg1;
- (void)onUpdateGlowVolume:(float)arg1;
- (void)onRequestUIAction:(id)arg1 displayAction:(int)arg2 isManualTrigger:(BOOL)arg3;
- (void)onToolCallsReceived:(id)arg1 msgId:(id)arg2 sessionId:(id)arg3 requestId:(unsigned long long)arg4;
- (void)onFeatureGuide:(id)arg1;
- (void)onJumpInfo:(id)arg1;
- (void)onInitKWSEngine:(id)arg1;
- (void)onAsrResultUpdate:(id)arg1 resultText:(id)arg2 endFlag:(unsigned int)arg3 vadIsEnd:(BOOL)arg4;
- (void)onAsrEndStateNotify:(int)arg1 errorMsg:(id)arg2;
- (void)onReportWithdrawn:(id)arg1 timestamp:(unsigned long long)arg2;
- (void)onReportInfoReceive:(id)arg1 timestamp:(unsigned long long)arg2;
@end
