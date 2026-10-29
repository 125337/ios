@interface WCBusinessJumpViewController : MMUIViewController <IContactMgrExt>
{
    NSString * _url; // +0x68
    NSString * _jumpUrl; // +0x70
    MMUIViewController * _parentViewController; // +0x78
    BOOL _sendreqWhenViewDidAppear; // +0x80
    NSString * _errorMsg; // +0x88
    NSDictionary * _dictTranslateInfo; // +0x90
}
- (void)viewDidLoad;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)didReceiveMemoryWarning;
- (id)initWithUrl:(id)arg1 translateInfo:(id)arg2 parentViewController:(id)arg3;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)removeSelfFromNavigationController;
- (void)setLoadingViewTitle:(id)arg1;
- (void)stopLoadingAndShowOK:(id)arg1;
- (void)stopLoadingAndShowError:(id)arg1;
- (void)sendTranslateReq;
- (void)handleTranslateLinkResult:(id)arg1 isAsync:(BOOL)arg2 isSuccess:(BOOL)arg3 error:(id)arg4 andParameter:(id)arg5;
- (BOOL)isTranslateLinkResultNeedCache:(id)arg1 andParameter:(id)arg2;
- (void)showFailErrorMsg:(id)arg1;
- (void)showFailErrorMsg:(id)arg1 handler:(id /* block */)arg2;
- (void)onReturn;
- (void)handleBackAppWithErr:(int)arg1;
- (void)handleBusinessJump:(id)arg1 extParams:(id)arg2 result:(id)arg3;
- (void)handleRefreshTokenJump:(id)arg1;
- (void)handleRedirectUrlResult:(id)arg1;
- (void)PresentModalViewController:(id)arg1 animated:(BOOL)arg2 forceFullScreen:(BOOL)arg3 completion:(id /* block */)arg4;
- (id)errorMsg;
- (void)setErrorMsg:(id)arg1;
- (id)dictTranslateInfo;
- (void)setDictTranslateInfo:(id)arg1;
- (BOOL)sendreqWhenViewDidAppear;
- (void)setSendreqWhenViewDidAppear:(BOOL)arg1;
- (void).cxx_destruct;
@end

