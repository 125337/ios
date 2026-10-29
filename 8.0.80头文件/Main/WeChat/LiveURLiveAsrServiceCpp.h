@interface LiveURLiveAsrServiceCpp : UnitRCObjcBaseProxyClass <LiveURLiveAsrService>
+ (id)create;
- (int)configChannel:(unsigned int)arg1;
- (int)setTransferStrategyMode:(unsigned int)arg1;
- (int)setChannelMode:(unsigned int)arg1;
- (BOOL)startRecognition:(unsigned int)arg1 fileEncodeType:(unsigned int)arg2 businessCtx:(id)arg3;
- (int)sendAudioData:(id)arg1 isFinal:(BOOL)arg2;
- (void)cancelRecognition;
- (id)getVoiceId;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
@end
