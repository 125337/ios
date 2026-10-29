@interface IPadQRCodeOAuthViewController : MMUIViewController <IPadAuthContainViewDelegate, IPadQRCodeOAuthLogicDelegate>
{
    id <IPadQRCodeOAuthViewControllerDelegate> _delegate; // +0x68
    IPadAuthContainView * _authContainView; // +0x70
    IPadAuthSuccessContainView * _authSuccContainView; // +0x78
    IPadQRCodeOAuthLogic * _authLogic; // +0x80
}
- (void)dealloc;
- (id)initWithReqInfo:(id)arg1;
- (void)initDataWithReqInfo:(id)arg1;
- (void)viewDidLoad;
- (void)initNavigationBar;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)viewDidLayoutSubviews;
- (void)updateWithAuthData:(id)arg1;
- (void)onCancelButtonClicked;
- (void)onRefreshButtonClicked;
- (void)onGetAuthData:(id)arg1;
- (void)onScanQRCode;
- (void)onCancelAuth;
- (void)onQRCodeExpire;
- (void)onConfirmAuth:(id)arg1 confirmRedirectUrl:(id)arg2 confirmWording:(id)arg3 nickName:(id)arg4 appIconUrl:(id)arg5 appNickname:(id)arg6;
- (void)onAuthFailWithErrMsg:(id)arg1 errCode:(int)arg2 errType:(unsigned int)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)authContainView;
- (void)setAuthContainView:(id)arg1;
- (id)authSuccContainView;
- (void)setAuthSuccContainView:(id)arg1;
- (id)authLogic;
- (void)setAuthLogic:(id)arg1;
- (void).cxx_destruct;
@end

