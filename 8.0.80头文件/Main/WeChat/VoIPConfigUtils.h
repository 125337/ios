@interface VoIPConfigUtils : NSObject
+ (BOOL)isCallFullScreenSupportIgnore;
+ (id)ignoreCallOneHourTitleForContact:(id)arg1;
+ (id)ignoreCallOneHourToastForContact:(id)arg1;
+ (long long)soundEffectVersion;
+ (BOOL)isSoundEffectExperimentGroup;
+ (id)defaultRingtoneSoundFileName;
+ (BOOL)isPromptToneOptimizedEnabled;
+ (BOOL)isHorizontalSplitEnabled;
+ (BOOL)isTempLayoutForDuo;
@end
