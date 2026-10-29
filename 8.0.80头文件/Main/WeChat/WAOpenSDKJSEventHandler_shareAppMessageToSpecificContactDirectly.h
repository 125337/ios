@interface WAOpenSDKJSEventHandler_shareAppMessageToSpecificContactDirectly : WAOpenSDKJSEventHandler_shareAppMessage
{
    NSDictionary * _dic; // +0x8
    NSMutableArray * _batchConvertedUsernames; // +0x10
    NSMutableArray * _batchFailedOpenIds; // +0x18
    unsigned long long _batchTotalCount; // +0x20
    unsigned long long _batchFinishedCount; // +0x28
    BOOL _forNativeWeApp; // +0x30
}
- (void)handleJSEvent:(id)arg1;
- (void)doShareLogicWith:(id)arg1 forNativeWeApp:(BOOL)arg2;
- (void)transferOpenId:(id)arg1 appId:(id)arg2;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2;
- (void)handleShareTransID:(id)arg1;
- (void)shareWithParams:(id)arg1 username:(id)arg2;
- (void)batchTransferOpenIds:(id)arg1 appId:(id)arg2;
- (void)onBatchCgiResponse:(id)arg1 openId:(id)arg2;
- (void)onBatchTransferAllFinished;
- (void)onWAShareAppMessageForwardLogicControllerComponent_MessageSend:(id)arg1;
- (void)onWAShareAppMessageForwardLogicControllerComponent_ConfirmCanceled:(id)arg1;
- (BOOL)forNativeWeApp;
- (void)setForNativeWeApp:(BOOL)arg1;
- (void).cxx_destruct;
@end
