@interface MsgImageBrowseViewController : MMUIViewController <IMsgRevokeExt, MMImgageBrowseViewDelegate, WCActionSheetDelegate, UIViewControllerAnimatedTransitioning>
{
    MMImageBrowseView * m_imageView; // +0x70
    CMessageWrap * m_wrapMsg; // +0x78
    UIImage * m_image; // +0x80
    id <ImageBrowseDelegate> m_delegate; // +0x88
    MMLoadingView * m_loadingView; // +0x90
    id m_singleTapGesture; // +0x98
    id m_doubleTapGesture; // +0xa0
    BOOL m_saveMode; // +0xa8
    WCActionSheet * m_actionSheet; // +0xb0
    CGRect m_originRect; // +0xb8
    BOOL _m_bSupportLocateToMsg; // +0xd8
}
- (void)adjustImageViewRect;
- (void)hideStatusBar;
- (void)showStatusBar;
- (void)handleViewWillAppear;
- (void)handleViewWillDisappear;
- (void)addNvGestureRecognizer;
- (void)removeNvGestureRecognizer;
- (void)setFullScreen:(BOOL)arg1;
- (void)exitFullScreen;
- (void)GetImage;
- (id)genDataLength:(unsigned int)arg1;
- (void)initNavigationBar;
- (void)initImageView;
- (void)initData;
- (void)initView;
- (void)viewDidLoad;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)viewWillBeInteractivePoped;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)willAppear;
- (void)viewDidAppear:(BOOL)arg1;
- (void)didAppear;
- (id)initWithMsgWrap:(id)arg1 originFrame:(CGRect)arg2;
- (void)dealloc;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)onSingleTapOnNavigationBar:(id)arg1;
- (void)onDouTapOnNavigationBar:(id)arg1;
- (void)onOperate:(id)arg1;
- (void)onSavedPhotosAlbum:(id)arg1;
- (void)onSingleTapImageBrowseView;
- (void)onLongPress;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)OnMsgRevoked:(id)arg1 n64MsgId:(long long)arg2;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)animateTransition:(id)arg1 fromVC:(id)arg2 toVC:(id)arg3 fromView:(id)arg4 toView:(id)arg5;
- (void)animateShowWithOriginRectInScreen:(CGRect)arg1;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)m_image;
- (void)setM_image:(id)arg1;
- (id)m_singleTapGesture;
- (void)setM_singleTapGesture:(id)arg1;
- (id)m_doubleTapGesture;
- (void)setM_doubleTapGesture:(id)arg1;
- (BOOL)m_saveMode;
- (void)setM_saveMode:(BOOL)arg1;
- (BOOL)m_bSupportLocateToMsg;
- (void)setM_bSupportLocateToMsg:(BOOL)arg1;
- (void).cxx_destruct;
@end
