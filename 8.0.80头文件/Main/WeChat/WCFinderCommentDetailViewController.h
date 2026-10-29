@interface WCFinderCommentDetailViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, UIGestureRecognizerDelegate, MMGrowTextViewDelegate, WCFinderFilterTextViewDelegate, WCFinderCommentDetailHeaderViewDelegate, WCFinderRefreshTableFooterViewDelegate, InputControllerDelegate, WCFinderCommentDetailViewModelDelegate, WCFinderFeedCommentEventDelegate, WCFinderCommentAuthorityTipsCellDelegate, WCFinderCommentLiveRecommendTopicCellDelegate, WCFinderCommentSurveyCellDelegate, WCFinderCommentSurveyFollowUpVCDelegate, MMFinderLiveCreateNoticeViewControllerDelegate, EGORefreshTableHeaderDelegate, WCActionSheetDelegate, WCFinderFansProfileViewControllerDelegate, MMUIHalfScreenViewControllerDelegate, WCFinderContentHeaderViewDelegate, WCGeneralMonitorDelegate, WCGeneralMonitorCellProtocol, WCFinderCardWebViewControllerDelegate, WCAdFinderDialogViewControllerDelegate, WCFinderFeedContentVMExt, WCFinderHalfScreenProtocol, WCFinderCommentGoodsSelectVCDelegate, EmoticonSearchViewControllerDelegate, WCFinderCommentAdTableViewCellDelegate, WCFinderFeedbackViewDelegate, WCFinderCommentListSelectTabViewDelegate, WCFinderCommentExtraViewModelDelegate, WCFinderPostMgrDelegate, MMImagePickerManagerDelegate, MMPageSheetContentProtocol, MMUIViewControllerDelegate, EmoticonCustomManageAddLogicDelegate, WCEditImageViewControllerDelegate, WCFinderCommentBaseViewProtocol, WCFinderFeedBaseViewControllerProtocol>
{
    BOOL _statusBarHidden; // +0x70
    BOOL _disableCommentFunctions; // +0x71
    BOOL _callFromDetail; // +0x72
    BOOL _isStatusBarColorBlack; // +0x73
    BOOL _showBackgroundButtonColor; // +0x74
    BOOL _forceExpandContentHeader; // +0x75
    BOOL _isCurrentRepaly; // +0x76
    BOOL _isCurrentRepalySubComment; // +0x77
    BOOL _isHidingCommentInputForResize; // +0x78
    BOOL _showTitle; // +0x79
    BOOL _isShowHalfScreen; // +0x7a
    BOOL _needHandledFeedDeletedEvent; // +0x7b
    BOOL _isDismissAnimating; // +0x7c
    BOOL _noFirstTimeEnter; // +0x7d
    id <WCFinderCommentDetailViewControllerDelegate> _delegate; // +0x80
    id <WCFinderPostMgrDelegate> _finderPostDelegate; // +0x88
    unsigned long long _enterType; // +0x90
    UITableView * _tableView; // +0x98
    WCFinderFilterTextView * _growTextView; // +0xa0
    UIImageView * _commentImageView; // +0xa8
    MMUIButton * _commentImageDeleteButton; // +0xb0
    UIView * _commentAttachmentSeparatorView; // +0xb8
    WCFinderGradientView * _commentImageBtnGradient; // +0xc0
    UIView * _textViewBackGroundView; // +0xc8
    WCFinderCommentInputBackView * _inputBackView; // +0xd0
    UITapGestureRecognizer * _tapGesture; // +0xd8
    NSIndexPath * _currentRepalyIndexPath; // +0xe0
    WCFinderCommentDetailHeaderView * _headerView; // +0xe8
    UIView * _containerView; // +0xf0
    UIView * _commentContentView; // +0xf8
    UIView * _shopCommentContentView; // +0x100
    WCFinderRefreshTableFooterView * _footerView; // +0x108
    UIButton * _expressionButton; // +0x110
    UIButton * _postImageCommentButton; // +0x118
    UIView * _postImageCommentRetDotView; // +0x120
    MMUIButton * _addShopButton; // +0x128
    UIButton * _backgroundButton; // +0x130
    UIButton * _keyboardDismissBgView; // +0x138
    EmoticonBoardView * _emoticonBoardView; // +0x140
    WCInputController * _inputController; // +0x148
    UILabel * _stateTipsLabel; // +0x150
    WXMASConstraint * _stateTipsCenterYConstraint; // +0x158
    UILabel * _placeholderTipsLabel; // +0x160
    RichTextView * _handPickTipsTextView; // +0x168
    WCFinderAnimationLoadingView * _loadingView; // +0x170
    WCFinderCommentDetailViewModel * _viewModel; // +0x178
    WCFinderCommentDetailViewReporter * _viewReporter; // +0x180
    unsigned long long _createTime; // +0x188
    unsigned long long _exitType; // +0x190
    UIPanGestureRecognizer * _panGesture; // +0x198
    WCFinderCommentListHeaderRefreshView * _headerRefreshView; // +0x1a0
    UIView * _emptyHeaderView; // +0x1a8
    UIView * _inputBottomView; // +0x1b0
    WCFinderContentHeaderView * _contentHeaderView; // +0x1b8
    WCFinderFeedbackView * _feedbackView; // +0x1c0
    UIView * _authenticationErrorHeaderView; // +0x1c8
    YYLabel * _commentCloseTips; // +0x1d0
    UIView * _lastTipHeaderView; // +0x1d8
    unsigned long long _lastTipHeaderType; // +0x1e0
    WCFinderOperateEntranceTipsView * _shadowTipsView; // +0x1e8
    WCFinderCreateCoordinator * _createCoordinator; // +0x1f0
    UIButton * _sortActionBtn; // +0x1f8
    UILabel * _remainTextLabel; // +0x200
    long long _remainCommentTextMaxLimit; // +0x208
    long long _reindCommentTextMaxLimit; // +0x210
    unsigned long long _commentTextMaxLimit; // +0x218
    unsigned long long _commentInputMaxLineWrap; // +0x220
    UIScreenEdgePanGestureRecognizer * _popBackInteractivePopGesture; // +0x228
    unsigned long long _commentStyleType; // +0x230
    double _inputViewDefaultHeight; // +0x238
    MMUILabel * _educateDoubleIdentityLabel; // +0x240
    UIView * _educateDoubleIdentityShadowView; // +0x248
    UIView * _triangleBViewShadowView; // +0x250
    UIImageView * _triangleBView; // +0x258
    NSIndexPath * _indexPath; // +0x260
    unsigned long long _adPlayerExposeCheckTime; // +0x268
    NSMutableDictionary * _adPlayerDict; // +0x270
    WCFinderCommentDetailAvatarView * _avatarContainer; // +0x278
    UIImageView * _iconImageView; // +0x280
    double _lastCloseTimestamp; // +0x288
    WCFinderAdReportInfo * _adReportInfo; // +0x290
    UIView * _emojiInputBGView; // +0x298
    EmojiInputView * _emojiInputView; // +0x2a0
    EmoticonCustomManageAddLogic * _addEmoticonLogic; // +0x2a8
    double _heightRatio; // +0x2b0
    WCFinderComment * _showFansProfileComment; // +0x2b8
    unsigned long long _viewerScene; // +0x2c0
    WCFinderCommentSelfActionSheet * _selfActionSheet; // +0x2c8
    NSMutableSet * _exposedKeywords; // +0x2d0
    WCFinderPostMgr * _postMgr; // +0x2d8
    WCFinderFeedAudioHelper * _feedAudioHelper; // +0x2e0
    WCFinderComment * _curPostAnchorComment; // +0x2e8
    WCFinderFeedContentVM * _fromContentVM; // +0x2f0
    WeToast * _toastView; // +0x2f8
    WCPopUpSelectableMenuViewController * _selectableMenuVC; // +0x300
    WCFinderLeftOvalTipsView * _justWatchTipsView; // +0x308
    WCFinderCommonTipsView * _fastSendPhotoTips; // +0x310
    WCEditImageViewController * _editImageVCForFastSendPhoto; // +0x318
    unsigned long long _openAtTimestamp; // +0x320
    NSString * _patMusicId; // +0x328
    RecommendedMusicInfo * _patMusic; // +0x330
    double _commentPlaceholderWidth; // +0x338
}
+ (id)genCommentImageRedDotView;
+ (CGSize)fitSizeWithOriginSize:(CGSize)arg1 maxLen:(double)arg2;
- (id)onPostFollowTopicFeedId:(id)arg1;
- (id)postMgrAttachTextContent:(id)arg1;
- (void)onPostActionFinish;
- (void)postMgrWillPresentCamera:(id)arg1;
- (void)postMgrDidDismissCamera:(id)arg1;
- (void)tryBuildCommentImageRedDotIfNeeded;
- (BOOL)shouldShowCommentImageRedDot;
- (void)disposeCommentImageRedDotIfNeeded;
- (double)preferredBottomInsetForStandardOverlay;
- (id)initWithViewModel:(id)arg1 showTitle:(BOOL)arg2 enterType:(unsigned long long)arg3 viewerScene:(unsigned long long)arg4;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)checkVisibleCellHightlightState;
- (void)handleLaunchComposeWithImage;
- (void)viewWillDisappear:(BOOL)arg1;
- (id)postMgr;
- (void)reportExposeAction;
- (void)prefetchUniversalJumperWithJumpInfo:(id)arg1 showPosition:(int)arg2;
- (id)reportUniversalJumperWithJumperInfoView:(id)arg1 eventType:(unsigned long long)arg2;
- (id)reportUniversalJumperWithJumperInfoView:(id)arg1 eventType:(unsigned long long)arg2 clientUdfKV:(id)arg3;
- (id)jumpInfoStyleToDict:(id)arg1;
- (void)reportAdEntryWithReportType:(long long)arg1;
- (void)reportAdEntryWithJumperInfoView:(id)arg1 reportType:(long long)arg2;
- (void)reportPOIWithReportType:(long long)arg1;
- (void)reportEventWithReportType:(long long)arg1;
- (void)reportRedPacketWithReportType:(long long)arg1;
- (void)reportAvatarWithEventType:(long long)arg1;
- (void)reportReferSomeone:(id)arg1 withEventType:(long long)arg2;
- (void)viewableExposeReport;
- (void)reportTopicInfo:(id)arg1 withReportType:(unsigned long long)arg2;
- (void)viewWillBePushOrPresent:(BOOL)arg1;
- (void)viewDidPushOrPresent:(BOOL)arg1;
- (void)viewWillPopOrDismiss:(BOOL)arg1;
- (void)viewDidBeDismissed:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)reportCommentStay;
- (void)updateEducateLabelShowCount;
- (void)viewWillLayoutSubviews;
- (double)commentDetailHeaderViewHeight;
- (void)updateCommentHeaderLayoutIfNeeded;
- (void)viewDidLayoutSubviews;
- (void)onMainWindowFrameChangedFrom:(CGRect)arg1 to:(CGRect)arg2;
- (void)hideCommentInputForResize;
- (void)logDuoCommentInput:(id)arg1;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)reloadResizableContainerLayout:(BOOL)arg1;
- (void)correctCommentIdentity;
- (id)tid;
- (void)resetUI;
- (void)resetInputControllerBottomSpace;
- (void)viewDidLoad;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)prepareContentHeaderCollapsedForPresentation;
- (void)openCommentNextAction;
- (void)dealloc;
- (void)initEducateDoubleIdentityLabel;
- (void)activeInput;
- (void)tapBecomeFirstResponder;
- (void)keyboardWillShow;
- (void)addKeyboardDismissButton;
- (void)keyboardDismissAction;
- (void)keyboardDidShow;
- (void)emoticonBoardViewDidShow;
- (void)emoticonBoardViewWillHide;
- (void)updateCommentCountTitle;
- (void)setUpCommentVCHeaderView;
- (void)configureTableView;
- (void)applyVoiceOverContentHeaderAsTableHeaderIfNeeded;
- (void)updateCommentAccessibilityElementsOrder;
- (void)refreshCommentAccessibilityElementsOrderAfterLayout;
- (void)setUpShowTitleView;
- (void)initEmoticonView;
- (double)getBarRightBtnLen;
- (void)updateInputSuffixButton;
- (BOOL)shouldShowAddShopButton;
- (void)createEmojiInputView;
- (void)setUpTextView;
- (void)removeShopMiniAppView;
- (void)setUpShopMiniAppView;
- (void)updateViewModelReplyScene:(int)arg1;
- (void)setupInputView;
- (void)setGrowTextViewPlaceholderWithReplyNickname:(id)arg1 isDefaultComment:(BOOL)arg2 useVMData:(BOOL)arg3;
- (void)updateGrowTextViewPlaceholderAnimated:(BOOL)arg1;
- (id)finderCommentPlaceholderWithPostNickname:(id)arg1 attachText:(id)arg2 font:(id)arg3;
- (void)onBackgroundButtonClicked:(id)arg1;
- (void)addGrowTextView;
- (BOOL)isMentionByFeedAuthor;
- (void)updateAttachInfoView;
- (BOOL)hasSelectedEmoticon;
- (BOOL)hasSelectedImage;
- (void)adjustInputBackViewLayout;
- (void)clickCommentIdentityChange;
- (void)hiddenEducateDoubleIdentityLabel;
- (void)showEducateDoubleIdentityLabel;
- (void)updateCommentIdentityStatus;
- (void)updateTextViewPostCommentIdentity;
- (void)clickPlaceholderAction;
- (void)reloadFirstPage;
- (BOOL)canPostBidEmoticonComment;
- (BOOL)canPostImageComment;
- (void)showFastSendPhotoTipsIfNeed;
- (void)doShowFastSendPhotoTips:(id)arg1;
- (void)autoDismissFastSendPhotoTips;
- (void)showEditImageVCWithRecentAlbum:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)updateCommetIdentityView;
- (void)updateCommentSpamState;
- (id)stateTipsLabel;
- (id)authenticationErrorHeaderView;
- (id)commentCloseTips;
- (id)loadingView;
- (void)requestInitDataWithAnimation;
- (double)tableViewTipsTopMargin;
- (void)tapAction:(id)arg1;
- (void)onClickPostImageCommentButton:(id)arg1;
- (void)onExpressionButtonClicked:(id)arg1;
- (void)reloadExpressionButtonImage:(long long)arg1;
- (id)navigationBarBackgroundColor;
- (BOOL)useBlackStatusbar;
- (void)viewWillBePresented:(BOOL)arg1;
- (void)scrollCommentToTop;
- (void)exitEnterComment;
- (void)clearCommentAdState;
- (void)resignResponder;
- (void)clickErrorHeaderViewAction;
- (void)showSortListView;
- (void)updateHeaderRightButtonEntrance;
- (void)showErrorTipsWithType:(unsigned long long)arg1;
- (id)createPlaceHolderTipsView;
- (void)updateCloseTipsText;
- (void)updateLastTipHeaderLayout;
- (void)reloadLastTipsInset;
- (void)adjustTableViewTopInset;
- (void)onClickCloseCommentDetailHeaderBtn;
- (void)closeCommentVC;
- (void)closeCommentVCWithExitType:(unsigned long long)arg1;
- (void)_handleUnSelectCommentImage;
- (void)_handleDidSelectEmoticon:(id)arg1;
- (void)_handleDidSelectImage:(id)arg1 editingInfo:(id)arg2;
- (void)_showCommentImageWithImage:(id)arg1 contentMode:(long long)arg2;
- (id)voiceInputReportParams;
- (void)MMGrowTextViewDidApplyDictationTextChange:(id)arg1;
- (void)MMGrowTextViewDidClickDictationStartIntent:(id)arg1;
- (void)MMGrowTextViewDidStopVoiceInput:(id)arg1;
- (void)onSelectorSelfDefinedEmotcion:(id)arg1;
- (void)keyboardDidHide;
- (void)textViewTextDidChange;
- (void)updateRemainTextLabel;
- (void)handleExcessiveWrap;
- (void)textViewDidChangeSelection:(id)arg1;
- (BOOL)getInputControllerSendButtonCanSendState;
- (void)growTextViewDidClickSendWithText:(id)arg1;
- (void)onSelectEmoticonSearchItem;
- (void)didCommitEmptyText;
- (void)didCommitText:(id)arg1;
- (void)_handleCommitWithText:(id)arg1;
- (void)MMGrowTextViewHeightDidChanged:(id)arg1;
- (void)MMGrowTextViewDidPasted:(id)arg1 pastedText:(id)arg2;
- (BOOL)shouldRespondToKeyBoardEvent;
- (void)keyboardWillHide;
- (void)keyboardDidShow:(double)arg1;
- (void)handleTableViewPanGesture:(id)arg1;
- (void)handlePopGesture:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (BOOL)isEnableTriggerRefreshAtScroll:(id)arg1;
- (void)replyRootCommentAtSection:(unsigned long long)arg1 cell:(id)arg2;
- (BOOL)checkShouldShowYuanbaoAlert:(id)arg1;
- (void)showYuanBaoConfirmSheetWithHanlder:(id /* block */)arg1 cancelHandler:(id /* block */)arg2;
- (void)replySubCommentAtIndex:(id)arg1 cell:(id)arg2;
- (void)showCommentUserProfileWithComment:(id)arg1;
- (void)finderCommentCell:(id)arg1 clickSubCommentFinder:(id)arg2;
- (void)finderCommentCell:(id)arg1 clickSubCommentWeChat:(id)arg2;
- (void)finderCommentCell:(id)arg1 clickMentionNickname:(id)arg2 comment:(id)arg3;
- (BOOL)_isMemberQA;
- (BOOL)finderCommentCellIsInMemberQACommentList:(id)arg1;
- (double)maxHeightForCommentView;
- (id)playerViewWithFrame:(CGRect)arg1 ForCommentAdCell:(id)arg2 argsWrap:(id)arg3;
- (id)adPlayerDict;
- (void)commentAdCell:(id)arg1 clickAvatarAtSection:(unsigned long long)arg2;
- (void)commentAdCell:(id)arg1 clickNicknameAtSection:(unsigned long long)arg2;
- (void)commentAdCell:(id)arg1 clickFullTextAtSection:(unsigned long long)arg2 isExpand:(BOOL)arg3;
- (void)commentAdCell:(id)arg1 clickJumpInfo:(id)arg2 atSection:(unsigned long long)arg3 clickArea:(int)arg4;
- (void)commentAdCell:(id)arg1 longPressAtSection:(unsigned long long)arg2;
- (void)commentAdCell:(id)arg1 clickFeedbackButton:(id)arg2 atSection:(unsigned long long)arg3;
- (void)_commentAdCellReporstClickType:(unsigned long long)arg1 comment:(id)arg2 section:(unsigned long long)arg3;
- (void)commentAuthorityTipsCellDidTapHighlightText:(id)arg1;
- (void)liveRecommendTopicCellDidTapAction:(id)arg1;
- (BOOL)checkShouldShowCommentSurvey;
- (long long)anchorSectionAtVisiblePosForCommentSurvey;
- (void)insertCommentSurveyAtVisiblePos;
- (void)deleteCommentSurveySection:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)showFollowUpCommentSurvey:(id)arg1;
- (void)commentSurveyCell:(id)arg1 didSelectScore:(unsigned long long)arg2;
- (void)commentSurveyCellDidRequestClose:(id)arg1;
- (void)commentSurveyFollowUpVC:(id)arg1 didSubmitViewModel:(id)arg2;
- (void)viewController:(id)arg1 didFinishCreateLiveNoticeWithInfo:(id)arg2;
- (void)viewController:(id)arg1 didFinishExtendedCreateLiveNoticeWithInfo:(id)arg2;
- (void)handleCommentAreaCreateLiveNoticeSuccess:(id)arg1;
- (void)viewControllerDidCancelCreateLiveNotice:(id)arg1;
- (void)rootCommentCell:(id)arg1 clickReplyUsername:(id)arg2 atSection:(unsigned long long)arg3;
- (void)finderCommentCell:(id)arg1 clickTemplatePreviewWithComment:(id)arg2;
- (void)finderCommentCell:(id)arg1 clickCutSameVideoComment:(id)arg2;
- (void)rootCommentCell:(id)arg1 clickTextViewAtIndexPath:(id)arg2;
- (void)rootCommentCell:(id)arg1 likeCommentAtIndexPath:(id)arg2;
- (void)rootCommentCell:(id)arg1 clickFullTextAtIndexPath:(id)arg2 isExpand:(BOOL)arg3;
- (void)finderCommentCell:(id)arg1 clickRefContentFullText:(id)arg2 atIndexPath:(id)arg3 isExpand:(BOOL)arg4;
- (void)rootCommentCell:(id)arg1 longPressAtIndexPath:(id)arg2;
- (void)rootCommentCell:(id)arg1 clickAvatarAtIndexPath:(id)arg2;
- (void)rootCommentCell:(id)arg1 clickNicknameAtIndexPath:(id)arg2;
- (void)rootCommentCell:(id)arg1 clickCommentRepostAtIndexPath:(id)arg2;
- (void)finderCommentCell:(id)arg1 clickJumpInfo:(id)arg2 style:(id)arg3;
- (void)showCommentProfileViewWithComment:(id)arg1;
- (void)finderCommentCell:(id)arg1 clickReplyAction:(id)arg2;
- (void)finderCommentCell:(id)arg1 clickKeyword:(WCFinderKeywordAction)arg2 comment:(id)arg3;
- (void)finderCommentCell:(id)arg1 showRecommendTips:(id)arg2 recommendView:(id)arg3;
- (void)hideShadowTipsView:(double)arg1;
- (void)finderCommentCell:(id)arg1 clickRecommend:(id)arg2 isSelected:(BOOL)arg3;
- (void)finderCommentCell:(id)arg1 clickRecommendUsername:(id)arg2 comment:(id)arg3;
- (void)finderCommentCell:(id)arg1 clickRecommendList:(id)arg2;
- (void)finderCommentCell:(id)arg1 clickEmoticon:(id)arg2 wrap:(id)arg3;
- (void)finderCommentCell:(id)arg1 longPressEmoticon:(id)arg2 wrap:(id)arg3;
- (void)finderCommentCell:(id)arg1 clickImageView:(id)arg2 image:(id)arg3 comment:(id)arg4;
- (void)showJustWatchingTipsForComment:(unsigned long long)arg1;
- (void)removeJustWatchingTipsAnimated:(BOOL)arg1;
- (void)finderCommentCell:(id)arg1 clickHandPick:(id)arg2 button:(id)arg3;
- (id)genImgVCReportDictWithComment:(id)arg1;
- (id)finderCommentCellGetFeedId:(id)arg1;
- (BOOL)finderCommentCellCanShowHandPickButton:(id)arg1;
- (int)finderCommentCellGetCommentListScene:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)updateSubCommentCell:(id)arg1 withComment:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)_configLiveRecommendTopicCellReportBehavior:(id)arg1;
- (void)_configADCellReportBehavior:(id)arg1 comment:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint *)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)checkShouldPreloadCommentListWithIndexPath:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_updateContentHeaderViewShowState;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)finderFeedCommentNoMoreData:(id)arg1 direction:(unsigned long long)arg2;
- (void)finderFeedCommentIsEmpty:(id)arg1;
- (void)finderFeedCommentDataChange:(id)arg1;
- (void)performCommentInsertAnimationWithUpdates:(id /* block */)arg1;
- (void)performCommentFadeInAnimationAtIndexPath:(id)arg1 updates:(id /* block */)arg2;
- (void)finderFeedCommentPostTid:(id)arg1 commentID:(unsigned long long)arg2;
- (void)finderFeedCommentClickLikeTid:(id)arg1 comment:(id)arg2;
- (void)finderFeedCommentClickFullTextTid:(id)arg1 rootCommentID:(unsigned long long)arg2;
- (void)finderFeedCommentClickRefcontentFullTextTid:(id)arg1 rootCommentID:(unsigned long long)arg2;
- (void)finderFeedCommentSubCommentDataChange:(unsigned long long)arg1 updateModel:(id)arg2;
- (void)finderFeedCommentFeedWasDeleted;
- (void)finderFeedSubCommentPostTid:(id)arg1 rootCommentID:(unsigned long long)arg2;
- (void)reloadSectionWith:(unsigned long long)arg1;
- (void)reloadSubCommentListWithRootComment:(unsigned long long)arg1;
- (void)finderFeedCommentNetworkError:(int)arg1 tid:(id)arg2 direction:(unsigned long long)arg3;
- (void)finderFeedCommentPostNetworError:(int)arg1 errorMsg:(id)arg2 comment:(id)arg3;
- (void)finderFeedCommentFetchWithSpecialCode:(int)arg1;
- (void)stopLoadingView;
- (void)showEmptyTipsView;
- (void)finderFeedCommentFetchByRefCommentWithTid:(id)arg1 refCommentID:(unsigned long long)arg2 refCommentIndexPath:(id)arg3;
- (void)finderFeedCommentSubCommentFetchFailWithCommentID:(unsigned long long)arg1 direction:(unsigned long long)arg2 retCode:(int)arg3;
- (void)finderFeedCommentCloseStatusChange;
- (void)finderSelectAccountChange;
- (void)finderFeedCommentUpdateCommentCount;
- (void)finderFeedTranslateTypeChange:(id)arg1 errorMsg:(id)arg2;
- (void)finderFeedCommentRecommendUpdate:(id)arg1;
- (void)finderFeedCommentFetchFirstPageSuccessful;
- (void)finderFeedCommentSurveyRequestInsertWithDelay:(double)arg1;
- (void)finderFeedCommentSurveyRequestCancelPendingInsert;
- (void)onClickContentReadMoreAction:(id)arg1 isExpand:(BOOL)arg2;
- (void)onClickContentTopicAction:(id)arg1 dataItem:(id)arg2;
- (void)onClickContentMentionAction:(id)arg1 nickname:(id)arg2 dataItem:(id)arg3;
- (void)onClickContentUsernameAction:(id)arg1;
- (void)onClickContentExtReadingAction:(id)arg1;
- (void)clickContentPOIAction:(id)arg1;
- (void)clickContentModFeedAction:(id)arg1;
- (void)onClickEventEntry:(id)arg1;
- (void)onClickMoreAction:(id)arg1;
- (void)onTapTextViewBackGroundView;
- (void)onClickOriginalStatement:(id)arg1;
- (id)getCommentMusicFromContentVM:(id)arg1;
- (void)headerViewShowActionSheet:(id)arg1;
- (void)_changeContentTranslateStatusWithShow:(BOOL)arg1 content:(id)arg2 forceUpdate:(BOOL)arg3;
- (void)headerViewShowkeyboard:(id)arg1;
- (void)headerViewHeatUpComplection:(id)arg1;
- (void)updateContentheaderTranslateType:(unsigned long long)arg1;
- (void)onClickUserHeadAvatar:(id)arg1;
- (void)onClickUserHeadNickname:(id)arg1;
- (void)onClickUserHead:(id)arg1;
- (void)onFinderJumpInfoViewDidClick:(id)arg1;
- (void)onFinderJumpInfoViewDidClick:(id)arg1 inArea:(int)arg2;
- (void)onFeedClickJumpInfo:(id)arg1 style:(id)arg2;
- (void)onFeedClickJumpInfo:(id)arg1 style:(id)arg2 clickTraceId:(id)arg3;
- (void)_jumpWithJumpInfo:(id)arg1 style:(id)arg2;
- (void)_jumpWithJumpInfo:(id)arg1 style:(id)arg2 pos:(unsigned long long)arg3;
- (void)_jumpWithJumpInfo:(id)arg1 style:(id)arg2 pos:(unsigned long long)arg3 clickTraceId:(id)arg4;
- (void)onAdFinderDialogFailedToJumpToAppDirectlyWithAppParams:(id)arg1 jumpParams:(id)arg2;
- (void)_updateCommentDetailVCPushState;
- (void)headerViewShowStateChanged:(BOOL)arg1;
- (void)headerViewExpandText:(BOOL)arg1;
- (void)onClickCollectionAction:(id)arg1;
- (void)headerViewOnClickExpandFeedDescAndLinks;
- (void)onFinderFeedbackViewLikeButtonDidClick:(id)arg1;
- (void)onFinderFeedbackViewDislikeButtonDidClick:(id)arg1;
- (void)onFinderFeedbackViewComplainButtonDidClick:(id)arg1;
- (void)onFinderFeedbackView:(id)arg1 shouldCloseWithReasons:(id)arg2;
- (void)_closeFeedbackView:(id)arg1 toastText:(id)arg2;
- (void)onFinderFeedbackViewDidCancel:(id)arg1;
- (id)adFeedbackParamsWithSection:(unsigned long long)arg1;
- (void)onFinderFeedbackView:(id)arg1 didClickDescriptionJumpInfo:(id)arg2;
- (void)_reportFeedbackViewActionWithType:(unsigned long long)arg1 comment:(id)arg2;
- (void)onFinderCardWebViewControllerJumpToOthers;
- (void)onFinderCardWebViewControllerWillResume;
- (void)onFinderCardWebViewControllerWillBeClosed;
- (void)onFeedContentJumpInfoContainerChanged:(id)arg1 isPureUIChanged:(BOOL)arg2 showPosition:(int)arg3 scene:(int)arg4;
- (void)onFeedContentCommentPromotionInfoChange:(id)arg1;
- (void)reloadContentHeaderWithAnimated:(BOOL)arg1;
- (void)showEmptyRetryFetchView;
- (void)retryEmptyFetchAction:(id)arg1;
- (void)showRetryNextPageFetchView;
- (void)retryFetchNextPage;
- (void)startLoadingNextPage;
- (void)finderFeedDataItemUpdate:(id)arg1;
- (void)onClickAddShopAction:(id)arg1;
- (void)onCommentGoodsSelectRefProductJumpInfo:(id)arg1;
- (void)finderCommentCell:(id)arg1 likeComment:(id)arg2 atIndexPath:(id)arg3;
- (void)finderCommentCell:(id)arg1 clickFullText:(id)arg2 atIndexPath:(id)arg3 isExpand:(BOOL)arg4;
- (void)finderCommentCell:(id)arg1 longPressComment:(id)arg2 atIndexPath:(id)arg3;
- (void)finderCommentCell:(id)arg1 clickAvatar:(id)arg2 atIndexPath:(id)arg3;
- (void)finderCommentCell:(id)arg1 clickNickname:(id)arg2 atIndexPath:(id)arg3;
- (void)finderCommentCell:(id)arg1 clickReplyUsername:(id)arg2 comment:(id)arg3 atIndexPath:(id)arg4;
- (void)finderCommentCell:(id)arg1 repostComment:(id)arg2 atIndexPath:(id)arg3;
- (void)finderCommentCell:(id)arg1 clickTextViewForReply:(id)arg2 atIndexPath:(id)arg3;
- (void)finderCommentCell:(id)arg1 onClickForwardForComment:(id)arg2;
- (id)finderCommentCellGetContentVM:(id)arg1;
- (id)indexPathForCommentCell:(id)arg1;
- (void)showEmoticonBrowserVCwithEmoticonWrap:(id)arg1 comment:(id)arg2;
- (void)showEmoticonActionSheetWithComment:(id)arg1;
- (id)emoticonReportDictWithComment:(id)arg1;
- (BOOL)allowForward:(id)arg1;
- (void)showActionSheetWithComment:(id)arg1 rootComment:(id)arg2;
- (void)showForwardComment:(id)arg1 rootComment:(id)arg2;
- (void)_reportCommentForward:(id)arg1 commentId:(unsigned long long)arg2;
- (void)showReplaceTopCommentActionSheet:(id)arg1;
- (void)handleSetTopWithComment:(id)arg1;
- (void)showDeleteconfirmActionSheetWithComment:(id)arg1 rootComment:(id)arg2;
- (void)showBlackListActionViewWithComment:(id)arg1;
- (void)addBlackListWithComment:(id)arg1 shouldDeleteComment:(BOOL)arg2;
- (void)showRevertBlackListActionViewWithComment:(id)arg1;
- (BOOL)canShowRewardTips;
- (BOOL)isAuthorScene;
- (BOOL)isSelfPostFeed;
- (BOOL)canDeleteComment:(id)arg1;
- (BOOL)isSelfPostComment:(id)arg1;
- (void)complainActionWithComment:(id)arg1;
- (void)reportCommentAction:(id)arg1;
- (void)reportUserCommentLiteApp:(id)arg1;
- (BOOL)isInProfileScene:(id)arg1;
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
- (void)scrollToTop;
- (unsigned long long)refCommentID;
- (void)tryScrollToRefComment;
- (void)scrollToRefComment;
- (BOOL)canScrollToCommentID:(unsigned long long)arg1;
- (void)scrollToCommentID:(unsigned long long)arg1;
- (void)onSearchEmoticonViewControllerSendEmoticon:(id)arg1;
- (void)onSearchEmoticonViewControllerDidClose;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (void)monitorView:(id)arg1 newExposedItems:(id)arg2 lastExposedItems:(id)arg3;
- (void)monitorView:(id)arg1 newExposedCells:(id)arg2;
- (void)monitorView:(id)arg1 unExposedCells:(id)arg2;
- (void)reportCommentAd:(id)arg1 withReportScene:(long long)arg2;
- (void)reportCommentAdIfNeededWithReportScene:(long long)arg1;
- (void)checkCommentAdPlayerExposeStateIfNeeded;
- (BOOL)isInSubScene;
- (id)getCurCommentBindTid;
- (id)getHalfContainerView;
- (id)getCurTargetRatioValue;
- (void)updateHalfScreenHeightRatio:(double)arg1;
- (id)getListenHalfFrameCell;
- (void)listenHalfScreenIsShow:(BOOL)arg1 eventType:(unsigned long long)arg2;
- (unsigned long long)listenHalfScreenOption;
- (id)feedAudioHelper;
- (id)onPostMusicIds:(id)arg1;
- (id)postMgrGetRecommendedMusicInfoFromShoot:(BOOL)arg1 postMgr:(id)arg2;
- (id)onPostFollowMusicFeedId:(id)arg1;
- (id)postMgrSourceInfo:(id)arg1;
- (void)registerYReportSdk;
- (void)textDidInputAtFinderContact:(id)arg1;
- (void)clickMentionSomebodyButton;
- (void)onSelectedMentionContact:(id)arg1;
- (void)onTapcommentImageDeleteButton:(id)arg1;
- (void)onTapCommentImageView:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithEditImageAttr:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)editImageViewController:(id)arg1 didFinishEditingImage:(id)arg2;
- (void)editImageViewControllerDidCancel:(id)arg1;
- (void)onCommentExtraModelLinkTextChanged:(id)arg1;
- (void)onCommentExtraModelShopInfoChanged:(id)arg1;
- (id)commentListTabXiaoweiFinderUsername:(id)arg1;
- (id)commentListTab:(id)arg1 xiaoweiReportParamsForEventId:(id)arg2;
- (void)commentListTabDidClickXiaowei:(id)arg1 srcInfoParams:(id)arg2;
- (void)commentListTab:(id)arg1 rightLinkClickUrl:(id)arg2;
- (void)_doTopLinkExposeReport:(BOOL)arg1;
- (id)keywordReportExtraInfo:(long long)arg1;
- (void)commentListTab:(id)arg1 selectTabType:(unsigned long long)arg2;
- (void)commentListTab:(id)arg1 unSelectTabType:(unsigned long long)arg2;
- (void)commentListTab:(id)arg1 clickTabWhenSelected:(unsigned long long)arg2 selectButton:(id)arg3;
- (id)getViewController;
- (id)pageSheetContentView;
- (BOOL)statusBarHidden;
- (void)setStatusBarHidden:(BOOL)arg1;
- (BOOL)disableCommentFunctions;
- (void)setDisableCommentFunctions:(BOOL)arg1;
- (BOOL)callFromDetail;
- (void)setCallFromDetail:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)finderPostDelegate;
- (void)setFinderPostDelegate:(id)arg1;
- (unsigned long long)enterType;
- (void)setEnterType:(unsigned long long)arg1;
- (BOOL)isStatusBarColorBlack;
- (void)setIsStatusBarColorBlack:(BOOL)arg1;
- (BOOL)showBackgroundButtonColor;
- (void)setShowBackgroundButtonColor:(BOOL)arg1;
- (BOOL)forceExpandContentHeader;
- (void)setForceExpandContentHeader:(BOOL)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)growTextView;
- (void)setGrowTextView:(id)arg1;
- (id)commentImageView;
- (void)setCommentImageView:(id)arg1;
- (id)commentImageDeleteButton;
- (void)setCommentImageDeleteButton:(id)arg1;
- (id)commentAttachmentSeparatorView;
- (void)setCommentAttachmentSeparatorView:(id)arg1;
- (id)commentImageBtnGradient;
- (void)setCommentImageBtnGradient:(id)arg1;
- (id)textViewBackGroundView;
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
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)commentContentView;
- (void)setCommentContentView:(id)arg1;
- (id)shopCommentContentView;
- (void)setShopCommentContentView:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)expressionButton;
- (void)setExpressionButton:(id)arg1;
- (id)postImageCommentButton;
- (void)setPostImageCommentButton:(id)arg1;
- (id)postImageCommentRetDotView;
- (void)setPostImageCommentRetDotView:(id)arg1;
- (id)addShopButton;
- (void)setAddShopButton:(id)arg1;
- (id)backgroundButton;
- (void)setBackgroundButton:(id)arg1;
- (id)keyboardDismissBgView;
- (void)setKeyboardDismissBgView:(id)arg1;
- (id)emoticonBoardView;
- (void)setEmoticonBoardView:(id)arg1;
- (id)inputController;
- (void)setInputController:(id)arg1;
- (BOOL)isHidingCommentInputForResize;
- (void)setIsHidingCommentInputForResize:(BOOL)arg1;
- (void)setStateTipsLabel:(id)arg1;
- (id)stateTipsCenterYConstraint;
- (void)setStateTipsCenterYConstraint:(id)arg1;
- (id)placeholderTipsLabel;
- (void)setPlaceholderTipsLabel:(id)arg1;
- (id)handPickTipsTextView;
- (void)setHandPickTipsTextView:(id)arg1;
- (void)setLoadingView:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)viewReporter;
- (void)setViewReporter:(id)arg1;
- (unsigned long long)createTime;
- (void)setCreateTime:(unsigned long long)arg1;
- (unsigned long long)exitType;
- (void)setExitType:(unsigned long long)arg1;
- (id)panGesture;
- (void)setPanGesture:(id)arg1;
- (id)headerRefreshView;
- (void)setHeaderRefreshView:(id)arg1;
- (id)emptyHeaderView;
- (void)setEmptyHeaderView:(id)arg1;
- (id)inputBottomView;
- (void)setInputBottomView:(id)arg1;
- (id)contentHeaderView;
- (void)setContentHeaderView:(id)arg1;
- (id)feedbackView;
- (void)setFeedbackView:(id)arg1;
- (void)setAuthenticationErrorHeaderView:(id)arg1;
- (void)setCommentCloseTips:(id)arg1;
- (id)lastTipHeaderView;
- (void)setLastTipHeaderView:(id)arg1;
- (unsigned long long)lastTipHeaderType;
- (void)setLastTipHeaderType:(unsigned long long)arg1;
- (id)shadowTipsView;
- (void)setShadowTipsView:(id)arg1;
- (id)createCoordinator;
- (void)setCreateCoordinator:(id)arg1;
- (id)sortActionBtn;
- (void)setSortActionBtn:(id)arg1;
- (id)remainTextLabel;
- (void)setRemainTextLabel:(id)arg1;
- (long long)remainCommentTextMaxLimit;
- (void)setRemainCommentTextMaxLimit:(long long)arg1;
- (long long)reindCommentTextMaxLimit;
- (void)setReindCommentTextMaxLimit:(long long)arg1;
- (unsigned long long)commentTextMaxLimit;
- (void)setCommentTextMaxLimit:(unsigned long long)arg1;
- (unsigned long long)commentInputMaxLineWrap;
- (void)setCommentInputMaxLineWrap:(unsigned long long)arg1;
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
- (unsigned long long)adPlayerExposeCheckTime;
- (void)setAdPlayerExposeCheckTime:(unsigned long long)arg1;
- (void)setAdPlayerDict:(id)arg1;
- (id)avatarContainer;
- (void)setAvatarContainer:(id)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (double)lastCloseTimestamp;
- (void)setLastCloseTimestamp:(double)arg1;
- (BOOL)showTitle;
- (void)setShowTitle:(BOOL)arg1;
- (id)adReportInfo;
- (void)setAdReportInfo:(id)arg1;
- (BOOL)isShowHalfScreen;
- (void)setIsShowHalfScreen:(BOOL)arg1;
- (id)emojiInputBGView;
- (void)setEmojiInputBGView:(id)arg1;
- (id)emojiInputView;
- (void)setEmojiInputView:(id)arg1;
- (id)addEmoticonLogic;
- (void)setAddEmoticonLogic:(id)arg1;
- (double)heightRatio;
- (void)setHeightRatio:(double)arg1;
- (id)showFansProfileComment;
- (void)setShowFansProfileComment:(id)arg1;
- (unsigned long long)viewerScene;
- (void)setViewerScene:(unsigned long long)arg1;
- (id)selfActionSheet;
- (void)setSelfActionSheet:(id)arg1;
- (id)exposedKeywords;
- (void)setExposedKeywords:(id)arg1;
- (void)setPostMgr:(id)arg1;
- (void)setFeedAudioHelper:(id)arg1;
- (id)curPostAnchorComment;
- (void)setCurPostAnchorComment:(id)arg1;
- (id)fromContentVM;
- (void)setFromContentVM:(id)arg1;
- (id)toastView;
- (void)setToastView:(id)arg1;
- (BOOL)needHandledFeedDeletedEvent;
- (void)setNeedHandledFeedDeletedEvent:(BOOL)arg1;
- (id)selectableMenuVC;
- (void)setSelectableMenuVC:(id)arg1;
- (id)justWatchTipsView;
- (void)setJustWatchTipsView:(id)arg1;
- (id)fastSendPhotoTips;
- (void)setFastSendPhotoTips:(id)arg1;
- (id)editImageVCForFastSendPhoto;
- (void)setEditImageVCForFastSendPhoto:(id)arg1;
- (BOOL)isDismissAnimating;
- (void)setIsDismissAnimating:(BOOL)arg1;
- (unsigned long long)openAtTimestamp;
- (void)setOpenAtTimestamp:(unsigned long long)arg1;
- (id)patMusicId;
- (void)setPatMusicId:(id)arg1;
- (id)patMusic;
- (void)setPatMusic:(id)arg1;
- (BOOL)noFirstTimeEnter;
- (void)setNoFirstTimeEnter:(BOOL)arg1;
- (double)commentPlaceholderWidth;
- (void)setCommentPlaceholderWidth:(double)arg1;
- (void).cxx_destruct;
@end
