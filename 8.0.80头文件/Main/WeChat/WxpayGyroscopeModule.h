@interface WxpayGyroscopeModule : NSObject
+ (void)initialize;
+ (id)moduleName;
+ (BOOL)handlesModule:(id)arg1;
+ (id)moduleInfo;
+ (id)invokeMethod:(id)arg1 arguments:(id)arg2 appUuid:(unsigned int)arg3 emit:(id /* block */)arg4;
+ (void)stopUpdatesForAppUuid:(unsigned int)arg1;
+ (BOOL)stopUpdatesReportingForAppUuid:(unsigned int)arg1;
+ (BOOL)startUpdatesForAppUuid:(unsigned int)arg1 arguments:(id)arg2;
+ (long long)updateIntervalMillisecondsForRequested:(long long)arg1;
@end
