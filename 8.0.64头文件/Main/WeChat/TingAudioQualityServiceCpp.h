@interface TingAudioQualityServiceCpp : UnitRCObjcBaseProxyClass <TingAudioQualityService>
+ (id)sharedInstance;
- (int)getCurPlayingAudioQuality:(id)arg1;
- (id)getCurPlayingSupportAudioQualityList:(id)arg1;
- (void)setManualPreferredAudioQuality:(int)arg1;
- (void)setEnableSqQualityBySetting:(BOOL)arg1;
- (void)clear;
@end
