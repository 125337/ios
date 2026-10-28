@interface MMMusicInfoNewHalfViewController : MMUIViewController <WKUIDelegate, WKNavigationDelegate, UIScrollViewDelegate, MusicLinkServiceExtension, MMMusicOpenThirdAppHelperDelegate>
{
    MMMusicInfo * _musicInfo; // +0x70
    UIView * _containerView; // +0x78
    UIView * _albumContainerView; // +0x80
    MMUILabel * _songNameView; // +0x88
    MMUILabel * _songDescLabel; // +0x90
    BOOL _bFirstLayoutFinish; // +0x98
    BOOL _isPanning; // +0x99
    BOOL _isPanningHorizontal; // +0x9a
    BOOL _hasGetA8Key; // +0x9b
    id <MMMusicInfoNewHalfViewControllerDelegate> _delegate; // +0xa0
    id /* block */ _blockOnClose; // +0xa8
    id /* block */ _onClickJump; // +0xb0
    id /* block */ _onJoinMembershipHandler; // +0xb8
    UIView * _headerView; // +0xc0
    UIImageView * _defaultIconView; // +0xc8
    MMUIButton * _closeButton; // +0xd0
    MMMusicHorizontalScrollingView * _singerScrollingView; // +0xd8
    UITapGestureRecognizer * _tapGesture; // +0xe0
    UIPanGestureRecognizer * _panGesture; // +0xe8
    UIButton * _jumpButton; // +0xf0
    MMUIActivityIndicatorView * _activityIndicatorView; // +0xf8
    unsigned long long _webViewGetA8KeyStatus; // +0x100
    unsigned long long _webViewPageStatus; // +0x108
    MVWebViewController * _webViewController; // +0x110
    long long _currOrientation; // +0x118
    MMUIButton * _openMembershipButton; // +0x120
    MMUILabel * _openMembershipHintLabel; // +0x128
    double _menbershipButtonAndLabelSpacing; // +0x130
    MMMusicOpenThirdAppHelper * _thirdPartyAppHelper; // +0x138
    CGPoint _panStartPos; // +0x140
}
- (id)initWithMusicInfo:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)reloadDisplay;
- (id)getMusicOperationUrl;
- (void)configurateWebview;
- (BOOL)disableOperationWebview;
- (void)showWebview;
- (void)configurateAndShowJumpButton;
- (id)generateWebViewControllerFromURL:(id)arg1;
- (id)resizeImage:(id)arg1 toMaxWidth:(int)arg2 andMaxHeight:(int)arg3;
- (id)headerView;
- (id)containerView;
- (CGRect)containerViewNormalFrame;
- (BOOL)showOpenMemberShipLabel;
- (id)closeButton;
- (id)tapGesture;
- (id)panGesture;
- (id)activityIndicatorView;
- (id)openMembershipHintLabel;
- (id)openMembershipButton;
- (void)onOpenMembershipButtonClicked;
- (void)customLayout;
- (void)layoutOpenMembershipButton;
- (void)closeAnimated:(BOOL)arg1;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)onClose;
- (void)handleTapGesture:(id)arg1;
- (void)handlePanGesture:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (void)onJumpButtonClicked;
- (void)showWebviewOrJumpButton;
- (void)handleFailOnGetA8Key;
- (void)handleReceiveNavigationResponse:(BOOL)arg1;
- (void)handleGetA8KeyFinish:(id)arg1 reason:(int)arg2;
- (void)handleWebviewScrollViewScroll:(id)arg1;
- (void)musicLinkService:(id)arg1 didGetLinkWithResults:(id)arg2;
- (id)thirdPartyAppHelper;
- (void)mmMusicOpenThirdAppHelper:(id)arg1 onOpen3rdMusicAppWithType:(unsigned long long)arg2 source:(unsigned long long)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id /* block */)blockOnClose;
- (void)setBlockOnClose:(id /* block */)arg1;
- (id /* block */)onClickJump;
- (void)setOnClickJump:(id /* block */)arg1;
- (id /* block */)onJoinMembershipHandler;
- (void)setOnJoinMembershipHandler:(id /* block */)arg1;
- (void)setHeaderView:(id)arg1;
- (id)defaultIconView;
- (void)setDefaultIconView:(id)arg1;
- (void)setCloseButton:(id)arg1;
- (id)singerScrollingView;
- (void)setSingerScrollingView:(id)arg1;
- (void)setTapGesture:(id)arg1;
- (void)setPanGesture:(id)arg1;
- (BOOL)isPanning;
- (void)setIsPanning:(BOOL)arg1;
- (BOOL)isPanningHorizontal;
- (void)setIsPanningHorizontal:(BOOL)arg1;
- (CGPoint)panStartPos;
- (void)setPanStartPos:(CGPoint)arg1;
- (id)jumpButton;
- (void)setJumpButton:(id)arg1;
- (void)setActivityIndicatorView:(id)arg1;
- (unsigned long long)webViewGetA8KeyStatus;
- (void)setWebViewGetA8KeyStatus:(unsigned long long)arg1;
- (unsigned long long)webViewPageStatus;
- (void)setWebViewPageStatus:(unsigned long long)arg1;
- (id)webViewController;
- (void)setWebViewController:(id)arg1;
- (BOOL)hasGetA8Key;
- (void)setHasGetA8Key:(BOOL)arg1;
- (long long)currOrientation;
- (void)setCurrOrientation:(long long)arg1;
- (void)setOpenMembershipButton:(id)arg1;
- (void)setOpenMembershipHintLabel:(id)arg1;
- (double)menbershipButtonAndLabelSpacing;
- (void)setMenbershipButtonAndLabelSpacing:(double)arg1;
- (void)setThirdPartyAppHelper:(id)arg1;
- (void).cxx_destruct;
@end
