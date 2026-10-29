@interface EcsJsApiHandler_openEcs : EcsBaseAsyncJsApiHandler
- (id)name;
- (long long)version;
- (long long)supportEnvs;
- (void)handle:(id)arg1 params:(id)arg2 callback:(id)arg3;
- (void)setupGmsgID:(id)arg1 callerContextViewController:(id)arg2 withData:(id)arg3;
- (id)optDictionaryFrom:(id)arg1 key:(id)arg2;
- (void)handleEcsWxaNavBackToNativeAction:(int)arg1 info:(id)arg2 callback:(id)arg3;
- (void)handleEcsReceiveGiftPageExitAction:(int)arg1 info:(id)arg2 context:(id)arg3 callback:(id)arg4;
- (void)handleEcsMpActivityPageExitAction:(int)arg1 info:(id)arg2 context:(id)arg3 callback:(id)arg4;
- (void)handleEcsOpenEventTypePreviewGiftCoverPageExitAction:(int)arg1 info:(id)arg2 callback:(id)arg3;
- (void)handleEcsOpenEventTypePreviewGiftEnclosureCardPageExitAction:(int)arg1 info:(id)arg2 callback:(id)arg3;
@end
