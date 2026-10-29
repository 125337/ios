@interface FaceRecogPayLiteHandler : NSObject
{
    BOOL _hasNotifiedCompletion; // +0x8
    id /* block */ _completion; // +0x10
    FaceRecogPayLiteHandlerConfig * _config; // +0x18
    MMUIViewController * _presentingViewController; // +0x20
    id <FaceRecogPayLiteHandlerHost> _host; // +0x28
}
+ (void)preloadLiteAppContainer;
+ (id)dispatchWithScene:(unsigned int)arg1 packageName:(id)arg2 packageSign:(id)arg3 faceVerifyTitle:(id)arg4 faceOtherVerifyTitle:(id)arg5 faceOtherVerifyTitleFront:(id)arg6 needFrontPage:(BOOL)arg7 inViewController:(id)arg8 host:(id)arg9;
+ (void)resolveUseLiteAppPathWithScene:(unsigned int)arg1 packageName:(id)arg2 packageSign:(id)arg3 completion:(id /* block */)arg4;
- (id)initWithConfig:(id)arg1;
- (void)dealloc;
- (void)startInViewController:(id)arg1;
- (void)syncConfigToSharedInfo;
- (void)registerHuiyanResultObserver;
- (void)openLiteApp;
- (void)notifyOpenLiteAppFailedWithReason:(id)arg1;
- (void)onHuiyanFaceCheckResult:(id)arg1;
- (int)resultCode;
- (id)resultToken;
- (id)bioId;
- (id)serialId;
- (BOOL)endWithClickOtherVerifyBtn;
- (BOOL)endWithClickFrontOtherVerifyBtn;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)presentingViewController;
- (void)setPresentingViewController:(id)arg1;
- (BOOL)hasNotifiedCompletion;
- (void)setHasNotifiedCompletion:(BOOL)arg1;
- (id)host;
- (void)setHost:(id)arg1;
- (void).cxx_destruct;
@end
