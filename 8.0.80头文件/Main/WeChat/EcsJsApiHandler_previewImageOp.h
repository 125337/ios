@interface EcsJsApiHandler_previewImageOp : EcsBaseAsyncJsApiHandler
- (id)name;
- (long long)version;
- (long long)supportEnvs;
- (void)handle:(id)arg1 params:(id)arg2 callback:(id)arg3;
- (void)handleOp:(id)arg1 data:(id)arg2 context:(id)arg3 callback:(id)arg4;
@end
