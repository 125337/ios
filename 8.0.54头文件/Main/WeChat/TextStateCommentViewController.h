@interface TextStateCommentViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, UIGestureRecognizerDelegate, MMGrowTextViewDelegate, WCCommentDetailHeaderViewDelegate, WCFinderRefreshTableFooterViewDelegate, InputControllerDelegate, TextStateSubCommentTableViewCellActionDelegate, TextStateRootCommentTableViewCellDelegate, EGORefreshTableHeaderDelegate, MMUIHalfScreenViewControllerDelegate, WCGeneralMonitorDelegate, WCFinderCommentDetailTextViewMentionDelegate, TextStateDetailViewModelDelegate, WCFinderPostingCommentExt>
{
    BOOL _statusBarHidden; // +0x68
    BOOL _disableCommentFunctions; // +0x69
    BOOL _callFromDetail; // +0x6a
    BOOL _isCurrentRepaly; // +0x6b
    BOOL _isCurrentExitComment; // +0x6c
    BOOL _isCurrentRepalySubComment; // +0x6d
    BOOL _shouldSaveLastCommentIdentity; // +0x6e
    BOOL _showTitle; // +0x6f
    BOOL _popupKeyboardAtBeginingFlag; // +0x70
    TextStateCommentViewModel * _viewModel; // +0x78
    id /* block */ _beforePushVCBlock; // +0x80
    id /* block */ _afterPopVCBlock; // +0x88
    TextStateCardReporter * _cardReporter; // +0x90
    UITableView * _tableView; // +0x98
    WCFinderCommentDetailTextView * _growTextView; // +0xa0
    UIView * _textViewBackGroundView; // +0xa8
    WCCommentInputView * _inputBackView; // +0xb0
    UITapGestureRecognizer * _tapGesture; // +0xb8
    NSIndexPath * _currentRepalyIndexPath; // +0xc0
    NSIndexPath * _prepareRepalyIndexPath; // +0xc8
    WCCommentDetailHeaderView * _headerView; // +0xd0
    UIView * _containerView; // +0xd8
    WCFinderRefreshTableFooterView * _footerView; // +0xe0
    UIButton * _mentionButton; // +0xe8
    UIButton * _expressionButton; // +0xf0
    MMUILabel * _maxLimitTextView; // +0xf8
    UIButton * _backgroundButton; // +0x100
    EmoticonBoardView * _emoticonBoardView; // +0x108
    WCCommentEmotionBoardViewContainerView * _emoticonBoardViewContainerView; // +0x110
    WCInputController * _inputController; // +0x118
    UITapGestureRecognizer * _stateRetryGesture; // +0x120
    WCFinderAnimationLoadingView * _loadingView; // +0x128
    UIView * _commentBackgroundView; // +0x130
    unsigned long long _createTime; // +0x138
    unsigned long long _lastLen; // +0x140
    NSIndexPath * _currIndexPath; // +0x148
    UIPanGestureRecognizer * _panGesture; // +0x150
    WCFinderCommentListHeaderRefreshView * _headerRefreshView; // +0x158
    UIView * _emptyHeaderView; // +0x160
    UIView * _inputBottomView; // +0x168
    UIView * _authenticationErrorHeaderView; // +0x170
    UILabel * _commentCloseTips; // +0x178
    UIView * _lastTipHeaderView; // +0x180
    unsigned long long _lastTipHeaderType; // +0x188
    unsigned long long _commentTextMaxLimit; // +0x190
    UIScreenEdgePanGestureRecognizer * _popBackInteractivePopGesture; // +0x198
    unsigned long long _commentStyleType; // +0x1a0
    double _inputViewDefaultHeight; // +0x1a8
    MMUILabel * _educateDoubleIdentityLabel; // +0x1b0
    UIView * _educateDoubleIdentityShadowView; // +0x1b8
    UIView * _triangleBViewShadowView; // +0x1c0
    UIImageView * _triangleBView; // +0x1c8
    NSIndexPath * _indexPath; // +0x1d0
    WCFinderCommentIdentityActionSheetView * _identityActionSheet; // +0x1d8
    double _lastCloseTimestamp; // +0x1e0
    WCFinderPushFeedViewParams * _funcParams; // +0x1e8
    NSArray * _rightButtons; // +0x1f0
    MMCustomTitleView * _tipContentView; // +0x1f8
}
- (id)initWithViewModel:(id)arg1 showTitle:(BOOL)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)updateEducateLabelShowCount;
- (void)viewWillPop:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)reloadLayout;
- (void)resetUI;
- (id)dataService;
- (id)generateHeaderView;
- (void)viewDidLoad;
- (void)dealloc;
- (void)tapBecomeFirstResponder;
- (void)p_becomeFirstResponder;
- (void)keyboardWillShow;
- (void)keyboardDidShow;
- (void)emoticonBoardViewDidShow;
- (void)emoticonBoardViewWillHide;
- (void)updateCommentCountTitle;
- (void)configureTableView;
- (void)addTextMaxLimitView;
- (void)initEmoticonView;
- (id)cellTextThemeColor;
- (id)maxLimitTextView;
- (id)expressionButton;
- (double)defaultInputBottomViewHeight;
- (void)setUpTextView;
- (void)updateViewModelReplyScene:(int)arg1;
- (void)setupInputView;
- (void)layoutInputBackView;
- (CGSize)inputBackViewSize;
- (void)setGrowTextViewPlaceholderWithReplyNickname:(id)arg1 isDefaultComment:(BOOL)arg2;
- (id)mentionButton;
- (BOOL)canShowMentionButton;
- (void)onBackgroundButtonClicked:(id)arg1;
- (void)onMentionButtonClicked:(id)arg1;
- (id)postAuthorIconImageColor;
- (void)addGrowTextView;
- (id)textViewBackGroundView;
- (void)updateCommentIdentityStatus;
- (void)updateTextViewPostCommentIdentity;
- (double)headerheight;
- (id)tipContentView;
- (void)updateCommentTip;
- (id)authenticationErrorHeaderView;
- (id)commentCloseTips;
- (id)rightButtons;
- (id)loadingView;
- (id)stateRetryGesture;
- (void)requestInitDataWithAnimation;
- (void)stateRetryGestureAction:(id)arg1;
- (void)tapAction:(id)arg1;
- (void)onExpressionButtonClicked:(id)arg1;
- (void)tipStateExpire;
- (double)inputViewYForInputController;
- (void)reloadExpressionButtonImage:(long long)arg1;
- (id)navigationBarBackgroundColor;
- (BOOL)useBlackStatusbar;
- (void)viewWillBePresented:(BOOL)arg1;
- (void)performShowHalfScreenAnimation;
- (void)scrollCommentToTop;
- (void)exitEnterComment;
- (void)resignResponder;
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
- (void)prepareReplyAtIndexPath:(id)arg1;
- (void)replySubCommentAtIndex:(id)arg1 cell:(id)arg2;
- (void)showCommentUserProfileWithComment:(id)arg1;
- (void)rootCommentCell:(id)arg1 clickReplyUsername:(id)arg2 atSection:(unsigned long long)arg3;
- (void)rootCommentCell:(id)arg1 clickTextViewAtSection:(unsigned long long)arg2;
- (void)handleLikeOrDislikeWithIsDislike:(BOOL)arg1 section:(unsigned long long)arg2;
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
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)commentDetailViewModel:(id)arg1 onNoMoreMoreDataWithEntityId:(id)arg2;
- (void)commentDetailViewModel:(id)arg1 onCommentEmptyWithEntityId:(id)arg2;
- (void)commentDetailViewModel:(id)arg1 onCommentEntityDataChanged:(id)arg2;
- (void)commentDetailViewModel:(id)arg1 commentPostWithEntityId:(id)arg2 comment:(id)arg3;
- (void)commentDetailViewModel:(id)arg1 onCommentClickFullTextWithEntityId:(id)arg2 rootCommentId:(unsigned long long)arg3;
- (void)commentDetailViewModel:(id)arg1 onClickRefcontentFullTextWithEntityId:(id)arg2 rootCommentID:(unsigned long long)arg3;
- (void)commentDetailViewModel:(id)arg1 onSubCommentDataChangedWithRootCommentId:(unsigned long long)arg2;
- (void)commentDetailViewModelCommentEntityWasDeleted:(id)arg1;
- (void)commentDetailViewModel:(id)arg1 subCommentPostEntity:(id)arg2 comment:(id)arg3;
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
- (void)showEmptyRetryFetchView;
- (void)retryEmptyFetchAction:(id)arg1;
- (void)showRetryNextPageFetchView;
- (void)retryFetchNextPage;
- (void)startLoadingNextPage;
- (void)onClickSubCommentReadMore:(id)arg1 isExpand:(BOOL)arg2;
- (void)subCommentTableViewCell:(id)arg1 onLongPressAtIndexPath:(id)arg2;
- (void)onClickSubCommentAvatar:(id)arg1;
- (void)subCommentTableViewCell:(id)arg1 clickReplyUsername:(id)arg2 atIndexPath:(id)arg3;
- (void)subCommentTableViewCell:(id)arg1 likeComment:(id)arg2 atIndexPath:(id)arg3;
- (void)subCommentTableViewCell:(id)arg1 dislikeComment:(id)arg2 atIndexPath:(id)arg3;
- (void)subCommentTableViewCell:(id)arg1 didClickMediaViewWithComment:(id)arg2;
- (void)previewMediaWithComment:(id)arg1;
- (void)showActionSheetWithComment:(id)arg1 rootComment:(id)arg2 fromView:(id)arg3;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)onCopyComment:(id)arg1;
- (void)onDeleteComment:(id)arg1;
- (void)showDeleteconfirmActionSheetWithComment:(id)arg1;
- (BOOL)isSelfPostComment:(id)arg1;
- (BOOL)isSelfComment:(id)arg1;
- (BOOL)isCommentFunctionEnable;
- (CGRect)containerViewFrame;
- (void)setCurrentRepalyIndexPath:(id)arg1;
- (BOOL)egoRefreshTableHeaderDataSourceIsLoading:(id)arg1;
- (void)egoRefreshTableHeaderDidTriggerRefresh:(id)arg1;
- (void)clickToToast;
- (void)onFinderDataItemPostingCommentFailBySpecialError:(id)arg1 errorCode:(int)arg2 errorMsg:(id)arg3;
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
- (id)cardReporter;
- (void)setCardReporter:(id)arg1;
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
- (BOOL)isCurrentExitComment;
- (void)setIsCurrentExitComment:(BOOL)arg1;
- (id)currentRepalyIndexPath;
- (id)prepareRepalyIndexPath;
- (void)setPrepareRepalyIndexPath:(id)arg1;
- (BOOL)isCurrentRepalySubComment;
- (void)setIsCurrentRepalySubComment:(BOOL)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (void)setMentionButton:(id)arg1;
- (void)setExpressionButton:(id)arg1;
- (void)setMaxLimitTextView:(id)arg1;
- (id)backgroundButton;
- (void)setBackgroundButton:(id)arg1;
- (id)emoticonBoardView;
- (void)setEmoticonBoardView:(id)arg1;
- (id)emoticonBoardViewContainerView;
- (void)setEmoticonBoardViewContainerView:(id)arg1;
- (id)inputController;
- (void)setInputController:(id)arg1;
- (void)setStateRetryGesture:(id)arg1;
- (void)setLoadingView:(id)arg1;
- (id)commentBackgroundView;
- (void)setCommentBackgroundView:(id)arg1;
- (unsigned long long)createTime;
- (void)setCreateTime:(unsigned long long)arg1;
- (unsigned long long)lastLen;
- (void)setLastLen:(unsigned long long)arg1;
- (id)currIndexPath;
- (void)setCurrIndexPath:(id)arg1;
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
- (void)setTipContentView:(id)arg1;
- (BOOL)popupKeyboardAtBeginingFlag;
- (void)setPopupKeyboardAtBeginingFlag:(BOOL)arg1;
- (void).cxx_destruct;
@end

