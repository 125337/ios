@interface WebviewJSEventHandler_handleHaokanAction : WebviewJSEventHandlerBase
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (BOOL)checkDataShouldBeDispatchWithAction:(id)arg1;
- (BOOL)actionIsLegal:(id)arg1;
- (void)onHandleIsHaoKanSwitchOn:(id)arg1;
- (void)onHandleTurnOnHaoKanSwitch;
- (void)onHandleUpdateRecommendStatus:(id)arg1;
- (void)onShareToGoodLook:(id)arg1;
- (void)openHaoKanSettingsPage:(id)arg1;
- (void)onCheckSyncHanKanPermission:(id)arg1;
- (void)onCheckSyncCommentPermission:(id)arg1;
- (void)cacheHaokanShareSource:(id)arg1;
- (void)onHandleCommonShareRecommendCommentAction:(id)arg1 event:(id)arg2;
- (void)onHandleCommonShareRecommendCloseCommentAction:(id)arg1;
- (void)openRecommendPage:(id)arg1;
- (void)onHandleJumpToWowAction:(id)arg1;
- (void)asyncHandle_callbackEvent:(id)arg1 result:(id)arg2;
@end
