@interface CBTHalfScreenSearchLongPressReporter : NSObject
+ (BOOL)isHeadlessExperimentValue:(long long)arg1;
+ (int)enterSceneForExperimentValue:(long long)arg1;
+ (void)reportStartWithExperimentValue:(long long)arg1;
+ (void)reportCancelWithExperimentValue:(long long)arg1 voipSessionID:(id)arg2;
+ (void)reportSuccessForAppUiState:(int)arg1 srcInfoParams:(id)arg2;
@end
