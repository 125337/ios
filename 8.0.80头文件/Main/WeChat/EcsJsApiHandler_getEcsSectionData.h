@interface EcsJsApiHandler_getEcsSectionData : EcsBaseAsyncJsApiHandler
+ (id)buildReqInfo:(id)arg1 tagPrefix:(id)arg2;
+ (id)parseResp:(id)arg1 reqTime:(unsigned long long)arg2 tagPrefix:(id)arg3;
- (id)name;
- (long long)version;
- (long long)supportEnvs;
- (void)handle:(id)arg1 params:(id)arg2 callback:(id)arg3;
@end
