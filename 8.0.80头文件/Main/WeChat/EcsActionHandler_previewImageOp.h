@interface EcsActionHandler_previewImageOp : EcsActionHandler_Base
- (id)name;
- (long long)version;
- (long long)supportEnvs;
- (void)handleAction:(id)arg1;
- (void)handleOp:(id)arg1 data:(id)arg2;
@end
