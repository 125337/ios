@interface WCAccountOneClickLoginViewController : WCAccountBaseViewController <PushLoginURLCGIDelegate>
{
    UIImageView * _headImgView; // +0x80
    UILabel * _tipsLabel; // +0x88
    UILabel * _nickNameLabel; // +0x90
    UIButton * _loginBtn; // +0x98
    UIButton * _disconnectBtn; // +0xa0
    UIButton * _cancleLogin; // +0xa8
    MMUIActivityIndicatorView * _logingLoading; // +0xb0
    PushLoginURLCGI * _pushLoginURLCGI; // +0xb8
    BOOL _isDoingAuth; // +0xc0
    id <WCAccountOneClickLoginViewControllerDelegate> _delegate; // +0xc8
    WCButtonListView * _bottomWatchLiveButtonView; // +0xd0
}
- (void)dealloc;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (BOOL)useTableView;
- (id)getPushLoginURLCGI;
- (void)showLoginingView;
- (void)onMore;
- (void)onDisconnectBtnClicked;
- (void)onLoginBtnClicked;
- (void)onPushLoginURLFailedWithError;
- (void)onPushLoginURLSuccess;
- (void)onPushLoginURLCanceled;
- (void)onPushLoginURLConfrimed;
- (id)onPushLoginURLGetCurrentViewController;
- (void)loginByQRCode;
- (void)cancleOneClickLogin;
- (void)setDelegate:(id)arg1;
- (id)bottomWatchLiveButtonView;
- (void)setBottomWatchLiveButtonView:(id)arg1;
- (void).cxx_destruct;
@end
