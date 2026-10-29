@interface EcsActionHandler_openEcs : EcsActionHandler_Base
- (id)name;
- (long long)version;
- (long long)supportEnvs;
- (void)handleAction:(id)arg1;
- (void)handleOpenEcs:(id)arg1;
- (void)setupGmsgID:(id)arg1 withData:(id)arg2;
- (id)optDictionaryFrom:(id)arg1 key:(id)arg2;
- (void)handleEcsWxaNavBackToNativeAction:(int)arg1 info:(id)arg2;
- (void)handleEcsReceiveGiftPageExitAction:(int)arg1 info:(id)arg2;
- (void)handleEcsMpActivityPageExitAction:(int)arg1 info:(id)arg2;
- (void)handleEcsOpenEventTypePreviewGiftCoverPageExitAction:(int)arg1 info:(id)arg2;
- (void)handleEcsOpenEventTypePreviewGiftEnclosureCardPageExitAction:(int)arg1 info:(id)arg2;
@end
