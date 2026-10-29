@interface WCAccountOneClickLoginViewController : WCAccountBaseViewController <PushLoginURLCGIDelegate>
{
    UIImageView * _headImgView; // +0x78
    UILabel * _tipsLabel; // +0x80
    UILabel * _nickNameLabel; // +0x88
    UIButton * _loginBtn; // +0x90
    UIButton * _disconnectBtn; // +0x98
    UIButton * _cancleLogin; // +0xa0
    MMUIActivityIndicatorView * _logingLoading; // +0xa8
    PushLoginURLCGI * _pushLoginURLCGI; // +0xb0
    BOOL _isDoingAuth; // +0xb8
    id <WCAccountOneClickLoginViewControllerDelegate> _delegate; // +0xc0
    WCButtonListView * _bottomWatchLiveButtonView; // +0xc8
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

