@interface WxpaySceneCallRegistry : NSObject
+ (unsigned long long)reserveCallId;
+ (void)registerScene:(id)arg1;
+ (BOOL)unregisterSceneReportingIdle:(id)arg1;
+ (id)liveScenes;
+ (id)recipientsForCallId:(unsigned long long)arg1 scene:(id)arg2;
@end
