@interface WAOpenSDKTransferAuthAdapter : NSObject <WAAuthorizeDelegate>
{
    id <WAOpenSDKTransferAuthAdapterDelegate> _delegate; // +0x8
    id _userInfo; // +0x10
    WAUserAuthorizeLogic * _logic; // +0x18
    WATransferParamsModel * _model; // +0x20
    WxaExternalInfo * _externalInfo; // +0x28
}
- (void)start;
- (void)doAuth;
- (void)doConfirmRequest:(BOOL)arg1 scope:(id)arg2;
- (id)initWithModel:(id)arg1;
- (void)onAuthorizeConfirmAccept:(id)arg1 resultInfo:(id)arg2;
- (void)onAuthorizeConfirmDeny:(id)arg1 resultInfo:(id)arg2;
- (void)onAuthorizeConfirmEnd:(BOOL)arg1;
- (void)onAuthorizeNeedConfirm:(id)arg1 cgiResponse:(id)arg2;
- (void)onRequestAuthorizeOK;
- (void)onRequestAuthorizeFail:(id)arg1;
- (id)getCurrentViewController;
- (id)logic;
- (id)externalInfo;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (void)setLogic:(id)arg1;
- (id)model;
- (void)setModel:(id)arg1;
- (void)setExternalInfo:(id)arg1;
- (void).cxx_destruct;
@end

