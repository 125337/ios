@interface WCCommentDetailViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, UIGestureRecognizerDelegate, MMGrowTextViewDelegate, WCCommentDetailHeaderViewDelegate, WCFinderRefreshTableFooterViewDelegate, InputControllerDelegate, WCCommentSubCommentTableViewCellActionDelegate, WCCommentDetailViewControllerDelegate, WCCommentDetailRootCommentCellDelegate, EGORefreshTableHeaderDelegate, WCActionSheetDelegate, WCFinderFansProfileViewControllerDelegate, MMUIHalfScreenViewControllerDelegate, WCGeneralMonitorDelegate, WCFinderCardWebViewControllerDelegate, WCFinderCommentSearchMentionContainerViewDelegate, WCFinderCommentDetailTextViewMentionDelegate, WCCommentDetailViewModelDelegate, WCFinderCommentBaseViewProtocol, WCFinderFeedBaseViewControllerProtocol>
{
    BOOL _statusBarHidden; // +0x70
    BOOL _disableCommentFunctions; // +0x71
    BOOL _callFromDetail; // +0x72
    BOOL _isCurrentRepaly; // +0x73
    BOOL _isCurrentRepalySubComment; // +0x74
    BOOL _shouldSaveLastCommentIdentity; // +0x75
    BOOL _showTitle; // +0x76
    WCCommentDetailViewModel * _viewModel; // +0x78
    id /* block */ _beforePushVCBlock; // +0x80
    id /* block */ _afterPopVCBlock; // +0x88
    id <WCCommentDetailViewControllerDelegate> _delegate; // +0x90
    UITableView * _tableView; // +0x98
    WCFinderCommentDetailTextView * _growTextView; // +0xa0
    UIView * _textViewBackGroundView; // +0xa8
    WCCommentInputView * _inputBackView; // +0xb0
    UITapGestureRecognizer * _tapGesture; // +0xb8
    NSIndexPath * _currentRepalyIndexPath; // +0xc0
    WCCommentDetailHeaderView * _headerView; // +0xc8
    WCFinderCommentSearchMentionContainerView * _searchMentionContainerView; // +0xd0
    UIView * _containerView; // +0xd8
    WCFinderRefreshTableFooterView * _footerView; // +0xe0
    UIButton * _mentionButton; // +0xe8
    UIButton * _expressionButton; // +0xf0
    UIButton * _backgroundButton; // +0xf8
    EmoticonBoardView * _emoticonBoardView; // +0x100
    WCCommentEmotionBoardViewContainerView * _emoticonBoardViewContainerView; // +0x108
    WCInputController * _inputController; // +0x110
    UILabel * _stateTipsLabel; // +0x118
    UITapGestureRecognizer * _stateRetryGesture; // +0x120
    WCFinderAnimationLoadingView * _loadingView; // +0x128
    UIView * _commentBackgroundView; // +0x130
    unsigned long long _createTime; // +0x138
    UIPanGestureRecognizer * _panGesture; // +0x140
    WCFinderCommentListHeaderRefreshView * _headerRefreshView; // +0x148
    UIView * _emptyHeaderView; // +0x150
    UIView * _inputBottomView; // +0x158
    UIView * _authenticationErrorHeaderView; // +0x160
    UILabel * _commentCloseTips; // +0x168
    UIView * _lastTipHeaderView; // +0x170
    unsigned long long _lastTipHeaderType; // +0x178
    WCFinderCreateCoordinator * _createCoordinator; // +0x180
    unsigned long long _commentTextMaxLimit; // +0x188
    UIScreenEdgePanGestureRecognizer * _popBackInteractivePopGesture; // +0x190
    unsigned long long _commentStyleType; // +0x198
    double _inputViewDefaultHeight; // +0x1a0
    MMUILabel * _educateDoubleIdentityLabel; // +0x1a8
    UIView * _educateDoubleIdentityShadowView; // +0x1b0
    UIView * _triangleBViewShadowView; // +0x1b8
    UIImageView * _triangleBView; // +0x1c0
    NSIndexPath * _indexPath; // +0x1c8
    WCFinderHeadImageView * _avatarImageView; // +0x1d0
    UIImageView * _iconImageView; // +0x1d8
    WCFinderCommentIdentityActionSheetView * _identityActionSheet; // +0x1e0
    double _lastCloseTimestamp; // +0x1e8
    WCFinderPushFeedViewParams * _funcParams; // +0x1f0
    NSArray * _rightButtons; // +0x1f8
}
+ (id)viewControllerWithCommentObject:(id)arg1;
+ (void)showWithCommentObject:(id)arg1 refCommentId:(unsigned long long)arg2 viewController:(id)arg3;
- (id)initWithViewModel:(id)arg1 showTitle:(BOOL)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)updateEducateLabelShowCount;
- (void)viewWillPop:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)layoutIconImageView;
- (void)reloadLayout;
- (void)correctCommentIdentity;
- (void)restoreCommentIdentity;
- (void)resetUI;
- (id)dataService;
- (id)generateHeaderView;
- (void)viewDidLoad;
- (void)dealloc;
- (void)initEducateDoubleIdentityLabel;
- (void)activeInput;
- (void)tapBecomeFirstResponder;
- (void)p_becomeFirstResponder;
- (void)keyboardWillShow;
- (void)keyboardDidShow;
- (void)emoticonBoardViewDidShow;
- (void)emoticonBoardViewWillHide;
- (void)updateCommentCountTitle;
- (void)configureTableView;
- (void)initEmoticonView;
- (id)cellTextThemeColor;
- (id)expressionButton;
- (double)defaultInputBottomViewHeight;
- (void)setUpTextView;
- (void)updateViewModelReplyScene:(int)arg1;
- (void)setupInputView;
- (void)layoutInputBackView;
- (CGSize)inputBackViewSize;
- (void)setGrowTextViewPlaceholderWithReplyNickname:(id)arg1 isDefaultComment:(BOOL)arg2 useVMData:(BOOL)arg3;
- (id)mentionButton;
- (void)checkMentionStateWhenSwitchIdentity;
- (BOOL)canShowMentionButton;
- (void)onBackgroundButtonClicked:(id)arg1;
- (void)onMentionButtonClicked:(id)arg1;
- (id)postAuthorIconImageColor;
- (void)addGrowTextView;
- (id)textViewBackGroundView;
- (void)clickCommentIdentityChange;
- (void)hiddenEducateDoubleIdentityLabel;
- (void)showEducateDoubleIdentityLabel;
- (void)updateCommentIdentityStatus;
- (void)updateTextViewPostCommentIdentity;
- (double)headerheight;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)updateCommetIdentityView;
- (void)updateCommentSpamState;
- (id)stateTipsLabel;
- (id)authenticationErrorHeaderView;
- (id)commentCloseTips;
- (id)rightButtons;
- (BOOL)_isLimitedByYoungCheck;
- (id)loadingView;
- (id)stateRetryGesture;
- (void)requestInitDataWithAnimation;
- (void)stateRetryGestureAction:(id)arg1;
- (void)tapAction:(id)arg1;
- (void)onExpressionButtonClicked:(id)arg1;
- (double)inputViewYForInputController;
- (BOOL)commentFunctionIsSpam;
- (void)reloadExpressionButtonImage:(long long)arg1;
- (id)navigationBarBackgroundColor;
- (BOOL)useBlackStatusbar;
- (void)viewWillBePresented:(BOOL)arg1;
- (void)performShowHalfScreenAnimation;
- (void)scrollCommentToTop;
- (void)exitEnterComment;
- (void)resignResponder;
- (void)clickErrorHeaderViewAction;
- (void)showErrorTipsWithType:(unsigned long long)arg1;
- (void)hideErrorTips;
- (void)onClickCloseCommentDetailHeaderBtn;
- (void)closeCommentVC;
- (void)keyboardDidHide;
- (void)textViewTextDidChange;
- (void)textViewDidChangeSelection:(id)arg1;
- (void)growTextViewDidClickSendWithText:(id)arg1;
- (void)clearCurrentInput;
- (BOOL)canCommitWithText:(id)arg1;
- (void)didCommitEmptyText;
- (void)didCommitText:(id)arg1;
- (id)willPostComment:(id)arg1;
- (void)MMGrowTextViewHeightDidChanged:(id)arg1;
- (void)MMGrowTextViewDidPasted:(id)arg1 pastedText:(id)arg2;
- (void)keyboardWillHide;
- (void)keyboardDidShow:(double)arg1;
- (void)handleTableViewPanGesture:(id)arg1;
- (void)handlePopGesture:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (BOOL)isEnableTriggerRefreshAtScroll:(id)arg1;
- (void)replyRootCommentAtSection:(unsigned long long)arg1 cell:(id)arg2;
- (void)replySubCommentAtIndex:(id)arg1 cell:(id)arg2;
- (void)showCommentUserProfileWithComment:(id)arg1;
- (void)onClickSubCommentFinder:(id)arg1;
- (void)onClickSubCommentWeChat:(id)arg1;
- (void)rootCommentCell:(id)arg1 clickReplyUsername:(id)arg2 atSection:(unsigned long long)arg3;
- (void)rootCommentCell:(id)arg1 clickTextViewAtSection:(unsigned long long)arg2;
- (void)handleLikeOrDislikeWithIsDislike:(BOOL)arg1 section:(unsigned long long)arg2;
- (void)rootCommentCell:(id)arg1 likeCommentSection:(unsigned long long)arg2;
- (void)rootCommentCell:(id)arg1 dislikeCommentSection:(unsigned long long)arg2 comment:(id)arg3;
- (void)rootCommentCell:(id)arg1 clickFullTextAtSection:(unsigned long long)arg2 isExpand:(BOOL)arg3;
- (void)rootCommentCell:(id)arg1 clickFullRefContentTextAtSection:(unsigned long long)arg2 isExpand:(BOOL)arg3;
- (void)rootCommentCell:(id)arg1 longPressAtSection:(unsigned long long)arg2;
- (void)rootCommentCell:(id)arg1 clickAvatarAtSection:(unsigned long long)arg2;
- (void)rootCommentCell:(id)arg1 clickCommentRepostAtSection:(unsigned long long)arg2;
- (void)rootCommentCell:(id)arg1 didClickMediaViewWithComment:(id)arg2;
- (void)showCommentProfileViewWithComment:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)commentDetailViewModel:(id)arg1 onNoMoreMoreDataWithEntityId:(id)arg2;
- (void)commentDetailViewModel:(id)arg1 onCommentEmptyWithEntityId:(id)arg2;
- (void)commentDetailViewModel:(id)arg1 onCommentEntityDataChanged:(id)arg2;
- (void)commentDetailViewModel:(id)arg1 commentPostWithEntityId:(id)arg2 commentId:(unsigned long long)arg3;
- (void)commentDetailViewModel:(id)arg1 onCommentClickLikeWithEntityId:(id)arg2 rootCommentId:(unsigned long long)arg3;
- (void)commentDetailViewModel:(id)arg1 onCommentClickFullTextWithEntityId:(id)arg2 rootCommentId:(unsigned long long)arg3;
- (void)commentDetailViewModel:(id)arg1 onClickRefcontentFullTextWithEntityId:(id)arg2 rootCommentID:(unsigned long long)arg3;
- (void)commentDetailViewModel:(id)arg1 onSubCommentDataChangedWithRootCommentId:(unsigned long long)arg2;
- (void)commentDetailViewModelCommentEntityWasDeleted:(id)arg1;
- (void)commentDetailViewModel:(id)arg1 subCommentPostEntity:(id)arg2 rootCommentID:(unsigned long long)arg3;
- (void)commentDetailViewModel:(id)arg1 commentWithNetworkError:(int)arg2 entityId:(id)arg3 direction:(int)arg4;
- (void)commentDetailViewModel:(id)arg1 commentPostNetworkError:(int)arg2 errorMessage:(id)arg3 comment:(id)arg4;
- (void)commentDetailViewModel:(id)arg1 commentFetchWithSpecialCode:(int)arg2;
- (void)commentDetailViewModel:(id)arg1 commentFetchByRefCommentWithEntityId:(id)arg2 refCommentID:(unsigned long long)arg3 refCommentIndexPath:(id)arg4;
- (void)commentDetailViewModel:(id)arg1 subCommentFetchFailWithCommentID:(unsigned long long)arg2 direction:(int)arg3 retCode:(int)arg4;
- (void)commentDetailViewModelcommentEntityCloseStatusChange:(id)arg1;
- (void)commentDetailViewModel:(id)arg1 willPostSubcomment:(id)arg2;
- (void)stopLoadingView;
- (void)showEmptyTipsView;
- (void)reloadSectionWith:(unsigned long long)arg1;
- (void)reloadSubCommentListWithRootComment:(unsigned long long)arg1;
- (void)onFinderCardWebViewControllerJumpToOthers;
- (void)_updateCommentDetailVCPushState;
- (void)onFinderCardWebViewControllerWillResume;
- (void)onFinderCardWebViewControllerWillBeClosed;
- (void)showEmptyRetryFetchView;
- (void)retryEmptyFetchAction:(id)arg1;
- (void)showRetryNextPageFetchView;
- (void)retryFetchNextPage;
- (void)startLoadingNextPage;
- (void)finderFeedDataItemUpdate:(id)arg1;
- (void)onClickSubCommentReadMore:(id)arg1 isExpand:(BOOL)arg2;
- (void)feedDetailCommentCellOnLongPress:(id)arg1;
- (void)onClickSubCommentAvatar:(id)arg1;
- (void)wcCommentSubCommentTableViewCell:(id)arg1 clickReplyUsername:(id)arg2 atIndexPath:(id)arg3;
- (void)wcCommentSubCommentTableViewCell:(id)arg1 likeComment:(id)arg2 atIndexPath:(id)arg3;
- (void)wcCommentSubCommentTableViewCell:(id)arg1 dislikeComment:(id)arg2 atIndexPath:(id)arg3;
- (void)wcCommentSubCommentTableViewCell:(id)arg1 didClickMediaViewWithComment:(id)arg2;
- (void)previewMediaWithComment:(id)arg1;
- (void)showActionSheetWithComment:(id)arg1 rootComment:(id)arg2;
- (void)onFinderCommentCopy:(id)arg1;
- (void)showDeleteconfirmActionSheetWithComment:(id)arg1 rootComment:(id)arg2;
- (BOOL)isFinderComment:(unsigned long long)arg1;
- (BOOL)isSelfPostComment:(id)arg1;
- (BOOL)isSelfComment:(id)arg1;
- (void)reportUserComment:(id)arg1;
- (BOOL)isCommentFunctionEnable;
- (CGRect)containerViewFrame;
- (BOOL)egoRefreshTableHeaderDataSourceIsLoading:(id)arg1;
- (void)egoRefreshTableHeaderDidTriggerRefresh:(id)arg1;
- (void)clickToToast;
- (void)fansProfileViewController:(id)arg1 clickActionWithContact:(id)arg2 finderContact:(id)arg3 type:(unsigned long long)arg4;
- (void)fansProfileViewController:(id)arg1 clickPrivateMsgWithContact:(id)arg2 finderContact:(id)arg3 comment:(id)arg4;
- (void)fansProfileViewController:(id)arg1 clickFinderActionWithWXUsername:(id)arg2;
- (void)onHalfScreenPageWillClose:(id)arg1 action:(long long)arg2;
- (unsigned long long)commentViewControllerShowType;
- (BOOL)canUseCache;
- (void)enterShowKeyBoard;
- (BOOL)presentWithAnimation;
- (id)viewmodelOfCommentVC;
- (BOOL)shouldStopPlayingVideo;
- (BOOL)hidesStatusBar;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (BOOL)isInSubScene;
- (void)showSearchMentionContainerView;
- (void)hideSearchMentionContainerView;
- (void)commentSearchMentionContainerViewShouldBeClosed;
- (void)onSelectContact:(id)arg1;
- (BOOL)onShouldSelectContact:(id)arg1;
- (id)getSafeSearchViewController;
- (void)commentDetailTextViewDidInputValidMentionCharacter;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id /* block */)beforePushVCBlock;
- (void)setBeforePushVCBlock:(id /* block */)arg1;
- (id /* block */)afterPopVCBlock;
- (void)setAfterPopVCBlock:(id /* block */)arg1;
- (BOOL)statusBarHidden;
- (void)setStatusBarHidden:(BOOL)arg1;
- (BOOL)disableCommentFunctions;
- (void)setDisableCommentFunctions:(BOOL)arg1;
- (BOOL)callFromDetail;
- (void)setCallFromDetail:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)growTextView;
- (void)setGrowTextView:(id)arg1;
- (void)setTextViewBackGroundView:(id)arg1;
- (id)inputBackView;
- (void)setInputBackView:(id)arg1;
- (id)tapGesture;
- (void)setTapGesture:(id)arg1;
- (BOOL)isCurrentRepaly;
- (void)setIsCurrentRepaly:(BOOL)arg1;
- (id)currentRepalyIndexPath;
- (void)setCurrentRepalyIndexPath:(id)arg1;
- (BOOL)isCurrentRepalySubComment;
- (void)setIsCurrentRepalySubComment:(BOOL)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (id)searchMentionContainerView;
- (void)setSearchMentionContainerView:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (void)setMentionButton:(id)arg1;
- (void)setExpressionButton:(id)arg1;
- (id)backgroundButton;
- (void)setBackgroundButton:(id)arg1;
- (id)emoticonBoardView;
- (void)setEmoticonBoardView:(id)arg1;
- (id)emoticonBoardViewContainerView;
- (void)setEmoticonBoardViewContainerView:(id)arg1;
- (id)inputController;
- (void)setInputController:(id)arg1;
- (void)setStateTipsLabel:(id)arg1;
- (void)setStateRetryGesture:(id)arg1;
- (void)setLoadingView:(id)arg1;
- (id)commentBackgroundView;
- (void)setCommentBackgroundView:(id)arg1;
- (unsigned long long)createTime;
- (void)setCreateTime:(unsigned long long)arg1;
- (id)panGesture;
- (void)setPanGesture:(id)arg1;
- (id)headerRefreshView;
- (void)setHeaderRefreshView:(id)arg1;
- (id)emptyHeaderView;
- (void)setEmptyHeaderView:(id)arg1;
- (id)inputBottomView;
- (void)setInputBottomView:(id)arg1;
- (void)setAuthenticationErrorHeaderView:(id)arg1;
- (void)setCommentCloseTips:(id)arg1;
- (id)lastTipHeaderView;
- (void)setLastTipHeaderView:(id)arg1;
- (unsigned long long)lastTipHeaderType;
- (void)setLastTipHeaderType:(unsigned long long)arg1;
- (id)createCoordinator;
- (void)setCreateCoordinator:(id)arg1;
- (unsigned long long)commentTextMaxLimit;
- (void)setCommentTextMaxLimit:(unsigned long long)arg1;
- (id)popBackInteractivePopGesture;
- (void)setPopBackInteractivePopGesture:(id)arg1;
- (unsigned long long)commentStyleType;
- (void)setCommentStyleType:(unsigned long long)arg1;
- (double)inputViewDefaultHeight;
- (void)setInputViewDefaultHeight:(double)arg1;
- (id)educateDoubleIdentityLabel;
- (void)setEducateDoubleIdentityLabel:(id)arg1;
- (id)educateDoubleIdentityShadowView;
- (void)setEducateDoubleIdentityShadowView:(id)arg1;
- (id)triangleBViewShadowView;
- (void)setTriangleBViewShadowView:(id)arg1;
- (id)triangleBView;
- (void)setTriangleBView:(id)arg1;
- (id)indexPath;
- (void)setIndexPath:(id)arg1;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)identityActionSheet;
- (void)setIdentityActionSheet:(id)arg1;
- (double)lastCloseTimestamp;
- (void)setLastCloseTimestamp:(double)arg1;
- (BOOL)shouldSaveLastCommentIdentity;
- (void)setShouldSaveLastCommentIdentity:(BOOL)arg1;
- (BOOL)showTitle;
- (void)setShowTitle:(BOOL)arg1;
- (id)funcParams;
- (void)setFuncParams:(id)arg1;
- (void)setRightButtons:(id)arg1;
- (void).cxx_destruct;
@end
