@interface CBTHalfScreenBizTimelineRoute : NSObject
+ (BOOL)isEntryEnabled;
+ (BOOL)isExternalEntryEnabled;
+ (void)showFromVC:(id)arg1 bizTimelineAskMsg:(id)arg2 sessionId:(id)arg3 dismissCallback:(id /* block */)arg4;
+ (id)optionsWithBizTimelineAskMsg:(id)arg1 sessionId:(id)arg2 srcInfoParams:(id)arg3;
+ (void)showFromVC:(id)arg1 options:(id)arg2 dismissCallback:(id /* block */)arg3;
+ (void)destroy:(id)arg1;
@end
