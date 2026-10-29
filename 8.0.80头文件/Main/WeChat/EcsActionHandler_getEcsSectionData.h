@interface EcsActionHandler_getEcsSectionData : EcsActionHandler_Base
- (id)name;
- (long long)version;
- (long long)supportEnvs;
- (id)buildReqInfo:(id)arg1 tagPrefix:(id)arg2;
- (id)parseResp:(id)arg1 reqTime:(unsigned long long)arg2 tagPrefix:(id)arg3;
- (void)handleAction:(id)arg1;
@end
