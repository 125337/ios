@interface LiveURLiveAiAssistantLogicServiceCpp : UnitRCObjcBaseProxyClass <LiveURLiveAiAssistantLogicService>
+ (id)create:(BOOL)arg1 finderUsername:(id)arg2 commentScene:(unsigned int)arg3;
- (void)stop;
- (void)setTransferStrategyMode:(unsigned int)arg1;
- (void)setChannelMode:(unsigned int)arg1;
- (void)handleFirstJoinLive:(unsigned long long)arg1 objectId:(unsigned long long)arg2 joinLiveFlag:(unsigned long long)arg3;
- (void)updateLiveCookies:(id)arg1;
- (void)updateAnchorStatus:(unsigned long long)arg1;
- (void)updateMsgExtFlag:(unsigned long long)arg1;
- (void)updateKWSEnabled:(BOOL)arg1;
- (void)updateVADTimeoutFlag:(BOOL)arg1;
- (void)handleKWSWakeupDetected:(id)arg1 confidence:(float)arg2;
- (void)feedVideoFrame:(long long)arg1 frameData:(id)arg2 frameType:(id)arg3;
- (void)feedAudioFrame:(id)arg1 channels:(unsigned int)arg2 sampleRate:(unsigned int)arg3;
- (void)feedAnchorVoiceVolume:(unsigned int)arg1;
- (void)handleUserClickBanner;
- (void)handleUserClickActionButton;
- (void)handleUserCloseDetail;
- (void)handleUserClickBG;
- (void)handleDetailTimerFire;
- (BOOL)isAiAssistantEnabled;
- (BOOL)isInDialogMode;
- (BOOL)isClientInvokeEnabled;
- (id)getCurrentInfo;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
@end
