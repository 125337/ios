@interface MSEShareMainViewController : UIViewController <MSEShareMainViewControllerDelegate, MSEShareButtonPannelViewDelegate, MSEContentInvalidTipsViewDelegate, MSEHUDViewDelegate, MSESendStatusTipsViewDelegate, WKNavigationDelegate>
{
    BOOL _jumpToWeChatWhenError; // +0x8
    BOOL _isJumping; // +0x9
    MSEShareMainViewLogicController * _mainLogicController; // +0x10
    long long _contentType; // +0x18
    unsigned long long _targetType; // +0x20
    UIScrollView * _scrollView; // +0x28
    MSELoadingView * _loadingView; // +0x30
    UIView * _contentBkgroundView; // +0x38
    UIView * _mainContainerView; // +0x40
    MSEVideoContentView * _videoContentView; // +0x48
    MSEUrlContentView * _urlContentView; // +0x50
    MSEUrlContentView * _fileContentView; // +0x58
    MSESessionListContentView * _sessionListContentView; // +0x60
    MSETimelineShareContentView * _timelineContainerView; // +0x68
    MSEContentInvalidTipsView * _contentInvalidTipsView; // +0x70
    MSESendStatusTipsView * _contentSendStatusTipsView; // +0x78
    MSEImageCollectionView * _imgConentView; // +0x80
    MSEShareButtonPannelView * _pannelView; // +0x88
    WKWebView * _redirectWebView; // +0x90
    UILabel * _errorTipLabel; // +0x98
}
- (id)init;
- (void)dealloc;
- (void)willEnterForeground;
- (void)didBecomeActive;
- (void)willResignActive;
- (void)willTerminate;
- (void)didEnterBackground;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)initView;
- (void)initData;
- (void)adjustBkgContentViewCenter;
- (id)contentBkgroundView;
- (void)updateImageCollectionView:(double)arg1;
- (void)updateContentView;
- (void)invalidPannelView;
- (id)mainContainerView;
- (id)genMainContainerViewWithVideoContent;
- (id)genMainTitieBarTitleWith:(long long)arg1;
- (double)getBackgroundViewHeightWithContentType:(long long)arg1;
- (id)loadingView;
- (void)startLoadingView;
- (void)stopLoadingView;
- (void)showTipsViewWhenUserNoLogin;
- (void)showTipsViewWithTipsContent:(id)arg1;
- (id)contentInvalidTipsView;
- (void)onUserConfirmInvalidTips;
- (void)onUserConfirmToShare;
- (void)onUserCancelContinueToShare;
- (void)onItemDataLoadFinished;
- (void)doAuthenticateCheck;
- (void)onItemDataRefresh;
- (void)onVideoCompressSuccess:(long long)arg1 outputUrl:(id)arg2;
- (void)onVideoCompressFail:(id)arg1;
- (void)onAppMsgUrlInvalid;
- (void)onMessageRequestSend;
- (void)onTimelineRequestSend;
- (void)onFavRequestSend;
- (void)onTextStatusRequestSend;
- (void)dismissSelfToBottom;
- (void)dismissSelf;
- (void)onMainContentViewDismiss;
- (void)doDismissContentAnimate:(id /* block */)arg1;
- (void)showHUDTipsView;
- (void)onHUDAnimationEnd;
- (id)contentSendStatusTipsView;
- (void)onUserConfirmSendTips;
- (void)onUserConfirmToContinueSendInBackground;
- (void)onUserCancelToRetry;
- (void)onCloseButton;
- (void)onUserConfirmSaveVideoToFav;
- (BOOL)canShare;
- (void)jumpToWechat:(id)arg1 shareScene:(int)arg2;
- (void)onPannelViewShareToFrienBtnPress;
- (void)onPannelViewShareToTimelineBtnPress;
- (void)onPannelViewShareToStateBtnPress;
- (void)onPannelViewShareToFavBtnPress;
- (void)onCheckAuthenticateDidFinish:(id)arg1;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)handleNoLoginError;
- (id)mainLogicController;
- (void)setMainLogicController:(id)arg1;
- (long long)contentType;
- (void)setContentType:(long long)arg1;
- (unsigned long long)targetType;
- (void)setTargetType:(unsigned long long)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (void)setLoadingView:(id)arg1;
- (void)setContentBkgroundView:(id)arg1;
- (void)setMainContainerView:(id)arg1;
- (id)videoContentView;
- (void)setVideoContentView:(id)arg1;
- (id)urlContentView;
- (void)setUrlContentView:(id)arg1;
- (id)fileContentView;
- (void)setFileContentView:(id)arg1;
- (id)sessionListContentView;
- (void)setSessionListContentView:(id)arg1;
- (id)timelineContainerView;
- (void)setTimelineContainerView:(id)arg1;
- (void)setContentInvalidTipsView:(id)arg1;
- (void)setContentSendStatusTipsView:(id)arg1;
- (id)imgConentView;
- (void)setImgConentView:(id)arg1;
- (id)pannelView;
- (void)setPannelView:(id)arg1;
- (id)redirectWebView;
- (void)setRedirectWebView:(id)arg1;
- (id)errorTipLabel;
- (void)setErrorTipLabel:(id)arg1;
- (BOOL)jumpToWeChatWhenError;
- (void)setJumpToWeChatWhenError:(BOOL)arg1;
- (BOOL)isJumping;
- (void)setIsJumping:(BOOL)arg1;
- (void).cxx_destruct;
@end

