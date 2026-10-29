@interface MBADFullLinkReporter : NSObject
+ (void)report:(long long)arg1 bizName:(id)arg2 frameSetName:(id)arg3 extMap:(id)arg4;
+ (void)report:(long long)arg1 bizName:(id)arg2 bizScene:(id)arg3 frameSetName:(id)arg4 extMap:(id)arg5;
+ (void)reportConversion:(long long)arg1 bizName:(id)arg2 bizScene:(id)arg3 traceId:(id)arg4 frameSetName:(id)arg5 implType:(id)arg6 extMap:(id)arg7;
+ (void)reportConversion:(long long)arg1 context:(id)arg2 apiName:(id)arg3 errMsg:(id)arg4;
+ (void)reportFromFe:(id)arg1 bizName:(id)arg2 bizScene:(id)arg3 traceId:(id)arg4 frameSetName:(id)arg5 implType:(id)arg6 reportSource:(id)arg7 extraJson:(id)arg8;
+ (id)getBizSceneByName:(id)arg1;
+ (id)extractTraceIdFromFrameSetName:(id)arg1;
+ (id)actionToString:(long long)arg1;
+ (void)buildAndReport:(id)arg1 bizName:(id)arg2 bizScene:(id)arg3 traceId:(id)arg4 frameSetName:(id)arg5 implType:(id)arg6 reportSource:(id)arg7 extraJson:(id)arg8 extMap:(id)arg9;
@end
