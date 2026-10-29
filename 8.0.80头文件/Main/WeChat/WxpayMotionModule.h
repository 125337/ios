@interface WxpayMotionModule : NSObject
+ (void)initialize;
+ (id)moduleName;
+ (BOOL)handlesModule:(id)arg1;
+ (id)moduleInfo;
+ (id)invokeMethod:(id)arg1 arguments:(id)arg2 appUuid:(unsigned int)arg3 emit:(id /* block */)arg4;
+ (void)stopUpdatesForAppUuid:(unsigned int)arg1;
+ (void)startUpdatesForAppUuid:(unsigned int)arg1 arguments:(id)arg2 emit:(id /* block */)arg3;
+ (long long)millisecondsForRequestedInterval:(long long)arg1;
@end
