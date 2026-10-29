@interface WCFinderMentionDetailViewController : MMUIViewController <WCFinderFeedContentVMExt, WCFinderFeedListViewDataSource, WCFinderFeedListViewDelegate, WCFinderDataItemExt, RingBackInfoDisplaySheetViewDelegate, WCFinderCustomTransitionProtocol, WCFinderShareAbstractCell, WCFinderShareCustomTransitionProtocol, WCFinderFeedListViewMinimizeDelegate, WCFinderMinimizeColdBootVCProtocol, WCFinderFeedListViewReportDelegate, WCFinderFeedBaseViewControllerProtocol>
{
    BOOL _showFromSystemMsg; // +0x68
    BOOL _supportMinimize; // +0x69
    BOOL _hasShowTopComment; // +0x6a
    BOOL _isSilencePlay; // +0x6b
    BOOL _hasShowComment; // +0x6c
    BOOL _needsResumeTimelineVideo; // +0x6d
    BOOL _isClickCloseBtn; // +0x6e
    unsigned long long _scene; // +0x70
    NSString * _navigationTitle; // +0x78
    WCFinderShareListReportModel * _reportModel; // +0x80
    WCFinderMentionDetailVCParams * _params; // +0x88
    WCFinderFeedListView * _feedListView; // +0x90
    double _startExposureTime; // +0x98
    WCFinderCommentDetailViewController * _commentVC; // +0xa0
    WCFinderCreateCoordinator * _createCoordinator; // +0xa8
    UIViewController<WCFinderCommentBaseViewProtocol> * _lastCommentVC; // +0xb0
    double _currentVideoPlayProgress; // +0xb8
    WCFinderShareCustomTransition * _animator; // +0xc0
}
- (id)init;
- (id)initWithParams:(id)arg1;
- (void)setScene:(unsigned long long)arg1;
- (id)contentVM;
- (void)viewDidLoad;
- (void)updateNaviLeftCloseItem;
- (void)updateRightBarButtonItems;
- (void)tryFetchDiagnosisData;
- (void)onLimitedClicked;
- (void)onClickCloseLeftItem;
- (void)viewWillLayoutSubviews;
- (void)viewDidBePoped:(BOOL)arg1;
- (BOOL)useTransparentNavibar;
- (void)configureTableView;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)tryShowEnterShowJumpInfo;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidTransitionToNewSize;
- (void)likeFeedContentVMAction:(id)arg1 isPrivateLike:(BOOL)arg2;
- (id)finderFeedListViewCustomTableViewParam:(id)arg1 contentVM:(id)arg2;
- (id)feedCellViewParamModelWithContentVM:(id)arg1;
- (BOOL)isInSubScene;
- (id)finderFeedList:(id)arg1 actionConfigureWithContentVM:(id)arg2;
- (BOOL)finderFeedList:(id)arg1 scrollActionSheet:(id)arg2 customResponseSelecteItem:(id)arg3;
- (id)finderFeedListView:(id)arg1 contentVMAtSection:(long long)arg2;
- (id)finderFeedListView:(id)arg1 contentVMOfTid:(id)arg2;
- (long long)numberOfContentVMsInTableView;
- (long long)finderFeedListView:(id)arg1 sectionOfTid:(id)arg2;
- (unsigned int)finderFeedListViewTLFollowEnterType:(id)arg1;
- (id)finderFeedListViewTLFollowUdfKv:(id)arg1;
- (void)finderFeedListViewFetchMoreData:(id)arg1;
- (void)finderFeedListViewRetryFetch:(id)arg1;
- (unsigned long long)finderFeedListDataBeginRefreshTime:(id)arg1;
- (BOOL)finderFeedListViewCanPreFetchData:(id)arg1;
- (id)finderFeedListViewCurrentViewController:(id)arg1;
- (BOOL)finderFeedListViewIsNoMoreData:(id)arg1;
- (void)finderFeedListViewDidClickScreenRotateBtn:(id)arg1;
- (void)onFeedContent:(id)arg1 likedDataChanged:(id)arg2;
- (void)onFinderDataItemBeDeletedWithTid:(id)arg1;
- (void)onFinderDataItemBeSetPrivateWithTid:(id)arg1;
- (void)showAllLikeList;
- (void)showAllThumbsUpList;
- (void)showCommentListWithContentVM:(id)arg1 showEnterKeyBoard:(BOOL)arg2 refCommentID:(unsigned long long)arg3;
- (void)showDetialCommentListVCOnlyList:(BOOL)arg1;
- (void)profileViewDidClickFullTextWithTid:(id)arg1;
- (BOOL)isMemberShipFeedWithVisitorStatusVisitant;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)finderFeedListView:(id)arg1 deleteContentVM:(id)arg2;
- (BOOL)finderFeedListViewFriendsLikeListShouldShowFirstLikeLabel:(id)arg1;
- (void)didClickToolbarDeleteAction:(id)arg1;
- (void)deleteFeedWithContenVM:(id)arg1;
- (void)onFinderDataItemPostingCommentFailBySpecialError:(id)arg1 errorCode:(int)arg2 errorMsg:(id)arg3;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (BOOL)isAuthor;
- (id)getCurMediaListObject;
- (void)onRingToneSheetDisappear;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)getCustomTransitionAnimator:(BOOL)arg1;
- (void)updateTransitionAnimator:(id)arg1;
- (void)doShareAnimation;
- (BOOL)finderFeedListViewControllerSupportMinimize:(id)arg1;
- (id)minimizePageBizKey;
- (void)registerYReportSdk;
- (id)minimizeDelegate;
- (id)minimizeDisplayContentView;
- (unsigned long long)scene;
- (id)navigationTitle;
- (void)setNavigationTitle:(id)arg1;
- (BOOL)showFromSystemMsg;
- (void)setShowFromSystemMsg:(BOOL)arg1;
- (id)reportModel;
- (void)setReportModel:(id)arg1;
- (BOOL)supportMinimize;
- (void)setSupportMinimize:(BOOL)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (id)feedListView;
- (void)setFeedListView:(id)arg1;
- (BOOL)hasShowTopComment;
- (void)setHasShowTopComment:(BOOL)arg1;
- (BOOL)isSilencePlay;
- (void)setIsSilencePlay:(BOOL)arg1;
- (double)startExposureTime;
- (void)setStartExposureTime:(double)arg1;
- (BOOL)hasShowComment;
- (void)setHasShowComment:(BOOL)arg1;
- (id)commentVC;
- (void)setCommentVC:(id)arg1;
- (id)createCoordinator;
- (void)setCreateCoordinator:(id)arg1;
- (id)lastCommentVC;
- (void)setLastCommentVC:(id)arg1;
- (double)currentVideoPlayProgress;
- (void)setCurrentVideoPlayProgress:(double)arg1;
- (BOOL)needsResumeTimelineVideo;
- (void)setNeedsResumeTimelineVideo:(BOOL)arg1;
- (id)animator;
- (void)setAnimator:(id)arg1;
- (BOOL)isClickCloseBtn;
- (void)setIsClickCloseBtn:(BOOL)arg1;
- (void).cxx_destruct;
@end

