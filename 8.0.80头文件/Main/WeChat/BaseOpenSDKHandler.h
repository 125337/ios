@interface BaseOpenSDKHandler : MMObject <MMTipsViewControllerDelegate, BlockViewControllerDelegate, IPreEnterWechatLogicExt>
{
    OpenApiParameter * _parameter; // +0x8
    BlockViewController * _blockView; // +0x10
    NSDictionary * _linkMap; // +0x18
    MMTipsViewController * _tipsViewController; // +0x20
}
- (void)dealloc;
- (void)startHandler:(id)arg1;
- (void)cancelHandler;
- (void)startPermissionValidation;
- (void)realHandleReqAfterermissionValidation;
- (id)getExtTaransLinkParams;
- (void)sendRespAndReturnTo3rdApp:(id)arg1 errCode:(int)arg2;
- (void)didNeedRefreshToken:(id)arg1;
- (void)cancelAllHandleAndReturn3rdApp;
- (BOOL)checkAppOpenId;
- (void)showDiffAccountAlertView;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (void)onPreEnterWechatDone;
- (void)onBlockViewControllerReturn;
- (id)parameter;
- (void)setParameter:(id)arg1;
- (id)blockView;
- (void)setBlockView:(id)arg1;
- (id)linkMap;
- (void)setLinkMap:(id)arg1;
- (id)tipsViewController;
- (void)setTipsViewController:(id)arg1;
- (void).cxx_destruct;
@end
