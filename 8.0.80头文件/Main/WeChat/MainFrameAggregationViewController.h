@interface MainFrameAggregationViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, UIGestureRecognizerDelegate, MainFrameAggregationLogicDelegate, MainFrameAggregationTransitionDelegate>
{
    BOOL _hasOpenedSession; // +0x70
    BOOL _needAutoPopToMainPage; // +0x71
    BOOL _isTransitioning; // +0x72
    BOOL _needReloadAfterTransition; // +0x73
    id <MainFrameAggregationDelegate> _delegate; // +0x78
    MainFrameAggregationLogic * _dataLogic; // +0x80
    MainFrameFoldReporter * _reporter; // +0x88
    long long _reportQuitType; // +0x90
    MainFrameAggregationTransition * _transition; // +0x98
    UITapGestureRecognizer * _bgTap; // +0xa0
    UIView * _backgroundView; // +0xa8
    UIView * _tableContainerView; // +0xb0
    UIView * _tableBgView; // +0xb8
    UIImageView * _arrowDownImageView; // +0xc0
    MMTableView * _tableView; // +0xc8
    MMUILabel * _emptyLabel; // +0xd0
    UIView * _bottomContentView; // +0xd8
    MMUIButton * _cancelButton; // +0xe0
    MMUILabel * _titleLabel; // +0xe8
}
+ (void)showSessionAggregationFrom:(id)arg1 visibleCells:(id)arg2 headerHeight:(double)arg3 delegate:(id)arg4;
- (id)init;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (BOOL)shouldInteractivePop;
- (void)dealloc;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (BOOL)shouldWrapViewWithSafeArea;
- (void)initUI;
- (void)initBottomView;
- (void)updateLayout;
- (void)viewDidLayoutSubviews;
- (void)updateContent;
- (void)updateBottomTitle;
- (void)onCancelButtonClick:(id)arg1;
- (void)onBackgroundViewClick:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)onSessionListChange;
- (void)onSessionUnreadChange;
- (BOOL)shouldShowQuickReplyPush:(id)arg1;
- (void)onPushTransitionWillBegin;
- (void)onPushTransitionEnd;
- (void)onInteractivePopBegin;
- (id)getViewController;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)mmNavigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)transition;
- (void)setupUnreadSessionsReportData:(id)arg1 isClosePage:(BOOL)arg2;
- (void)registerYReportSdk;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)dataLogic;
- (void)setDataLogic:(id)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (long long)reportQuitType;
- (void)setReportQuitType:(long long)arg1;
- (BOOL)hasOpenedSession;
- (void)setHasOpenedSession:(BOOL)arg1;
- (BOOL)needAutoPopToMainPage;
- (void)setNeedAutoPopToMainPage:(BOOL)arg1;
- (void)setTransition:(id)arg1;
- (BOOL)isTransitioning;
- (void)setIsTransitioning:(BOOL)arg1;
- (BOOL)needReloadAfterTransition;
- (void)setNeedReloadAfterTransition:(BOOL)arg1;
- (id)bgTap;
- (void)setBgTap:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)tableContainerView;
- (void)setTableContainerView:(id)arg1;
- (id)tableBgView;
- (void)setTableBgView:(id)arg1;
- (id)arrowDownImageView;
- (void)setArrowDownImageView:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)emptyLabel;
- (void)setEmptyLabel:(id)arg1;
- (id)bottomContentView;
- (void)setBottomContentView:(id)arg1;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (void).cxx_destruct;
@end
