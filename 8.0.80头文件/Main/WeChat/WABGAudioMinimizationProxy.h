@interface WABGAudioMinimizationProxy : NSObject <IWABGAudioMinimizationService>
+ (BOOL)isBGAudioEnabled;
+ (void)updateBGAudioInfo:(id)arg1 forHost:(id)arg2;
+ (id)bgAudioInfo:(id)arg1;
+ (void)clearBGAudioInfoForHost:(id)arg1;
+ (BOOL)updateState:(long long)arg1 forHost:(id)arg2;
+ (BOOL)show:(id)arg1;
+ (BOOL)dismiss:(id)arg1;
+ (void)stopBGAudio;
+ (BOOL)hasVoipBGAudio;
+ (void)bgAudioInterrupted:(BOOL)arg1;
+ (void)prepareForMinimizationCoverStyle:(id)arg1;
@end
