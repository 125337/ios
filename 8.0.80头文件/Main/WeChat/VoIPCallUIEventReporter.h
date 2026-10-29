@interface VoIPCallUIEventReporter : NSObject
+ (id)screenLockParamsForScene:(unsigned long long)arg1;
+ (void)reportProfileClickForContact:(id)arg1 scene:(unsigned long long)arg2;
+ (id)currentContextForScene:(unsigned long long)arg1;
+ (long long)currentMultiTalkCallType;
+ (long long)targetCallStateForContact:(id)arg1 scene:(unsigned long long)arg2;
@end
