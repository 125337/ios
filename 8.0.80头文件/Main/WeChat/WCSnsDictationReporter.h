@interface WCSnsDictationReporter : NSObject
+ (void)reportClickWithSource:(unsigned long long)arg1 feedItem:(id)arg2 publishSessionId:(id)arg3;
+ (void)reportExposeWithSource:(unsigned long long)arg1 feedItem:(id)arg2 publishSessionId:(id)arg3;
+ (void)reportMenuExposeWithSource:(unsigned long long)arg1 feedItem:(id)arg2 publishSessionId:(id)arg3;
+ (void)reportMenuClickWithSource:(unsigned long long)arg1 feedItem:(id)arg2 publishSessionId:(id)arg3;
+ (void)reportEvent:(id)arg1 eventId:(id)arg2 source:(unsigned long long)arg3 feedItem:(id)arg4 publishSessionId:(id)arg5;
@end
