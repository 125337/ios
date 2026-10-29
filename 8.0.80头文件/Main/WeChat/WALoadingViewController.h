@interface WALoadingViewController : MMUIViewController
{
    BOOL m_isBlackStatusBar; // +0x70
    BOOL _isViewDidAppear; // +0x71
    BOOL _isPopMyselfAfterDidAppear; // +0x72
    BOOL _isCallPopMySelf; // +0x73
    UIScreenEdgePanGestureRecognizer * _panGesture; // +0x78
    BOOL _isCallReturn; // +0x80
    BOOL _forbidStatusBarInset; // +0x81
    BOOL _hideCapsuleMenu; // +0x82
    BOOL _isInSheetMode; // +0x83
    WAContact * _contact; // +0x88
    id <WALoadingViewControllerDelegate> _delegate; // +0x90
    id <WAMinimizeDelegate> _minimizeDelegate; // +0x98
    NSString * _navTitle; // +0xa0
    unsigned long long _darkmodeSpecificType; // +0xa8
    UIColor * _loadingBackgroundColor; // +0xb0
    UIColor * _loadingForegroundTextColor; // +0xb8
    id /* block */ _viewDidAppearCallback; // +0xc0
}
- (void)viewDidLoad;
- (id)initWithContact:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)updateLeftBarItemWithNavMode:(long long)arg1;
- (BOOL)isViewDidAppear;
- (void)updateContact:(id)arg1;
- (void)popMyselfAfterViewDidAppear;
- (void)popMyselfViewController;
- (BOOL)takeOverLoadFailedBehavior;
- (void)onTaskLoadingFailed;
- (void)showDownloadingProgressView;
- (void)setThumbImage:(id)arg1;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (void)changeStatusBarToBlack:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)onReturn;
- (void)dismissSelfAndMinimizeIfNeed;
- (void)setDarkmodeSpecificType:(unsigned long long)arg1;
- (double)statusBarInset;
- (void)addPanGesture;
- (void)removePanGesture;
- (void)handleScreenEdgesPanGesture:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)minimizeDelegate;
- (void)setMinimizeDelegate:(id)arg1;
- (BOOL)isCallReturn;
- (void)setIsCallReturn:(BOOL)arg1;
- (id)navTitle;
- (void)setNavTitle:(id)arg1;
- (BOOL)forbidStatusBarInset;
- (void)setForbidStatusBarInset:(BOOL)arg1;
- (unsigned long long)darkmodeSpecificType;
- (BOOL)hideCapsuleMenu;
- (void)setHideCapsuleMenu:(BOOL)arg1;
- (BOOL)isInSheetMode;
- (void)setIsInSheetMode:(BOOL)arg1;
- (id)loadingBackgroundColor;
- (void)setLoadingBackgroundColor:(id)arg1;
- (id)loadingForegroundTextColor;
- (void)setLoadingForegroundTextColor:(id)arg1;
- (id /* block */)viewDidAppearCallback;
- (void)setViewDidAppearCallback:(id /* block */)arg1;
- (void).cxx_destruct;
@end
