@interface WCBizCommonSchemeUrlMgr : MMUserService <WCBizSchemeBlockViewControllerDelegate, WCBizSchemeUrlBaseHandlerDelegate, MMServiceProtocol>
{
    WCBizSchemeBlockViewController * _blockViewController; // +0x8
    NSDictionary * _handlerDictionary; // +0x10
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)handleWCBizSchemeUrl:(id)arg1;
- (void)startCheckExteranlUrl:(id)arg1;
- (BOOL)canHanldeActionCode:(unsigned int)arg1;
- (id)genneralAntiSpamInfoWithErrMsg:(id)arg1;
- (void)onBizSchemeUrlBlockAction:(unsigned long long)arg1;
- (void)stopHandleUrlAndDismissBlockVC;
- (void)continueHandleUrlWithContext:(id)arg1;
- (void)onBizHandlerLoadingEnd:(id)arg1;
- (BOOL)checkAntiSpamInfoValid:(id)arg1;
- (id)blockViewController;
- (void)setBlockViewController:(id)arg1;
- (id)handlerDictionary;
- (void)setHandlerDictionary:(id)arg1;
- (void).cxx_destruct;
@end

