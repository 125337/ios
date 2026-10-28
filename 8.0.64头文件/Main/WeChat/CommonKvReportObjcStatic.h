@interface CommonKvReportObjcStatic : NSObject
+ (void)kvReport:(unsigned int)arg1 value:(id)arg2;
+ (void)idKvReport:(unsigned int)arg1 key:(unsigned int)arg2 value:(unsigned int)arg3;
+ (void)reportCustomEvent:(id)arg1 routeRule:(unsigned long long)arg2 isRtReport:(BOOL)arg3 keyArr:(id)arg4 valueArr:(id)arg5;
+ (void)reportCustomCgiEvent:(id)arg1 bizId:(unsigned long long)arg2 isBatchReport:(BOOL)arg3 keyArr:(id)arg4 valueArr:(id)arg5;
@end
