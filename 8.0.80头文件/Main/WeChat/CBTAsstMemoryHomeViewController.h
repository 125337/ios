@interface CBTAsstMemoryHomeViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, WCPayPayPwdViewControllerDelegate, WCPayTouchLockAuthenCgiDelegate, CBTAsstAllMemoryViewControllerDelegate, CBTAsstMemoryDetailViewControllerDelegate, MMMenuControllerExt>
{
    BOOL _hasTriggeredInitialAuth; // +0x70
    BOOL _isAuthenticating; // +0x71
    BOOL _isVisibleInMore; // +0x72
    BOOL _isVerifyingPayPassword; // +0x73
    BOOL _isFetchingRecentMemory; // +0x74
    id <CBTAsstMemoryHomeViewControllerDelegate> _delegate; // +0x78
    UIView * _headerContainerView; // +0x80
    UILabel * _recentTitleLabel; // +0x88
    UIButton * _allMemoryButton; // +0x90
    UIView * _listContainerView; // +0x98
    MMTableView * _tableView; // +0xa0
    NSArray * _recentMemoryList; // +0xa8
    NSString * _recentMemoryUserPostfix; // +0xb0
    UILongPressGestureRecognizer * _longPressGesture; // +0xb8
    NSArray * _memoryMenuItems; // +0xc0
    NSIndexPath * _menuIndexPath; // +0xc8
    unsigned long long _displayCount; // +0xd0
    UIView * _lockedContainerView; // +0xd8
    UIImageView * _lockImageView; // +0xe0
    UILabel * _lockedTitleLabel; // +0xe8
    UIButton * _unlockButton; // +0xf0
    UIButton * _payPasswordButton; // +0xf8
    CBTAsstMemoryRetryDialogView * _retryDialogView; // +0x100
    CBTAsstMemoryActionDialogView * _payPasswordOptionDialogView; // +0x108
    unsigned long long _state; // +0x110
    unsigned long long _faceIDFailureCount; // +0x118
    WCPayControlData * _payPasswordControlData; // +0x120
    WCPayPayPwdViewController * _payPasswordViewController; // +0x128
    WCPayTouchLockAuthenCgi * _payPasswordAuthenCgi; // +0x130
    CBTAsstMemoryActionDialogView * _payPasswordErrorDialogView; // +0x138
}
- (id)init;
- (void)viewDidLoad;
- (void)dealloc;
- (BOOL)shouldHideNavigationBar;
- (void)viewWillAppear:(BOOL)arg1;
- (void)buildSubviews;
- (void)buildUnlockedSubviews;
- (void)buildLockedSubviews;
- (void)buildOverlayViews;
- (void)viewDidLayoutSubviews;
- (void)onAllMemoryTap;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)listContentHeight;
- (void)onMoreTap;
- (void)memoryHomeDidBecomeVisible;
- (void)memoryHomeDidBecomeHidden;
- (void)onUnlockTap;
- (void)onPayPasswordTap;
- (id)cachedPayUserInfo;
- (BOOL)isWeChatPayOpened;
- (BOOL)hasBiometryHardwareSupport;
- (BOOL)isBiometryEnrolledInDevice;
- (BOOL)isPayBiometryEnabled;
- (id)unlockRouteLogText:(unsigned long long)arg1;
- (void)routeUnlockFlowAutomatically:(BOOL)arg1 source:(id)arg2;
- (void)startFaceIDAuthentication;
- (void)handleUnlockSuccess;
- (void)fetchRecentMemory;
- (id)memoryMenuItems;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)onTableViewLongPress:(id)arg1;
- (void)showMemoryMenuAtIndexPath:(id)arg1;
- (void)dismissMemoryMenuIfNeeded;
- (void)clearMenuSelection;
- (id)selectedMenuMemoryItem;
- (void)onCopyMemory:(id)arg1;
- (void)onAdjustMemory:(id)arg1;
- (void)onDeleteMemory:(id)arg1;
- (void)onMenuControllerDidHide;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)allMemoryViewController:(id)arg1 didRequestAdjustWithMemoryId:(id)arg2 memoryContent:(id)arg3 userPostfix:(id)arg4;
- (void)memoryDetailViewController:(id)arg1 didRequestAdjustWithMemoryId:(id)arg2 memoryContent:(id)arg3 userPostfix:(id)arg4;
- (void)handleFaceIDAuthenticationError:(id)arg1;
- (BOOL)shouldIgnoreFaceIDError:(id)arg1;
- (BOOL)shouldShowPayPasswordDialogForError:(id)arg1;
- (BOOL)shouldDirectlyUnlockForBiometryError:(id)arg1;
- (void)presentPayPasswordViewController;
- (void)closePayPasswordFlowAnimated:(BOOL)arg1;
- (void)updateUIForCurrentState;
- (id)homeOverlayHostView;
- (void)layoutHomeOverlayViews;
- (void)showRetryDialog;
- (void)dismissRetryDialog;
- (void)showPayPasswordOptionDialog;
- (void)dismissPayPasswordOptionDialog;
- (void)showPayPasswordErrorDialog;
- (void)dismissPayPasswordErrorDialog;
- (void)PayPwdBack;
- (void)PayPwdRightActionBack;
- (void)VerifyPayPwdNext:(id)arg1 vc:(id)arg2;
- (void)OnVerifyPayPassword:(id)arg1;
- (void)touchLockAuthenCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)touchLockAuthenCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)touchLockAuthenCgiVerifyPwdFail:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)headerContainerView;
- (void)setHeaderContainerView:(id)arg1;
- (id)recentTitleLabel;
- (void)setRecentTitleLabel:(id)arg1;
- (id)allMemoryButton;
- (void)setAllMemoryButton:(id)arg1;
- (id)listContainerView;
- (void)setListContainerView:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)recentMemoryList;
- (void)setRecentMemoryList:(id)arg1;
- (id)recentMemoryUserPostfix;
- (void)setRecentMemoryUserPostfix:(id)arg1;
- (id)longPressGesture;
- (void)setLongPressGesture:(id)arg1;
- (void)setMemoryMenuItems:(id)arg1;
- (id)menuIndexPath;
- (void)setMenuIndexPath:(id)arg1;
- (unsigned long long)displayCount;
- (void)setDisplayCount:(unsigned long long)arg1;
- (id)lockedContainerView;
- (void)setLockedContainerView:(id)arg1;
- (id)lockImageView;
- (void)setLockImageView:(id)arg1;
- (id)lockedTitleLabel;
- (void)setLockedTitleLabel:(id)arg1;
- (id)unlockButton;
- (void)setUnlockButton:(id)arg1;
- (id)payPasswordButton;
- (void)setPayPasswordButton:(id)arg1;
- (id)retryDialogView;
- (void)setRetryDialogView:(id)arg1;
- (id)payPasswordOptionDialogView;
- (void)setPayPasswordOptionDialogView:(id)arg1;
- (unsigned long long)state;
- (void)setState:(unsigned long long)arg1;
- (BOOL)hasTriggeredInitialAuth;
- (void)setHasTriggeredInitialAuth:(BOOL)arg1;
- (BOOL)isAuthenticating;
- (void)setIsAuthenticating:(BOOL)arg1;
- (unsigned long long)faceIDFailureCount;
- (void)setFaceIDFailureCount:(unsigned long long)arg1;
- (BOOL)isVisibleInMore;
- (void)setIsVisibleInMore:(BOOL)arg1;
- (id)payPasswordControlData;
- (void)setPayPasswordControlData:(id)arg1;
- (id)payPasswordViewController;
- (void)setPayPasswordViewController:(id)arg1;
- (id)payPasswordAuthenCgi;
- (void)setPayPasswordAuthenCgi:(id)arg1;
- (BOOL)isVerifyingPayPassword;
- (void)setIsVerifyingPayPassword:(BOOL)arg1;
- (id)payPasswordErrorDialogView;
- (void)setPayPasswordErrorDialogView:(id)arg1;
- (BOOL)isFetchingRecentMemory;
- (void)setIsFetchingRecentMemory:(BOOL)arg1;
- (void).cxx_destruct;
@end
