@interface WCCommentDetailViewControllerFB : MMUIViewController <InputControllerDelegate, BaseEmoticonViewDelegate, WCAdvertiseActionFloatViewDelegate, WCCanvasImageLoaderObserver, WCTimeLineContactSelectViewControllerDelegate, IMMGrowTextViewExt, WCTimeLineAdCardBaseViewDelegate, WCTimeLineAdDynamicFeedViewDelegate, WCAdTagButtonDelegate, WCAdSocialLikeViewDelegate, WCAdWeGameGiftTagViewDelegate, WCAdContinuousLikeTagViewDelegate, WCAdStateSettingBarViewDelegate, WCAdFireworkCheerInviteFriendViewDelegate, WCAdCommonBarContainerViewDelegate, RichTextLayoutDelegate, WCMomentsClickHandlerDelegate, WCMomentsContactMgrExt, WCAdvertiseFeedbackViewDelegate, WCAdActionLinkDetailViewDelegate, IWCCommentDetailViewControllerFBExt, WCPlayerConfigFullScreenViewControllerPostDelegate, WCCommitViewAnimationDelegate, WCCommentErrTipsViewDelegate, WCFinderShareLiveViewDelegate, MMLiveMorphDismissTarget, WCContentItemBaseViewDelegate, MJTemplateFullScreenViewControllerPostDelegate, UITableViewDelegate, UITableViewDataSource, WCFacadeExt, IMsgExt, MMGrowTextViewDelegate, MMTableViewDelegate, BaseEmoticonViewDelegate, WCActionSheetDelegate, ILinkEventExt, WCCommentViewDelegate, WCImageFullScreeViewMgrExt, IStrangerContactMgrExt, ITranslateSnsMgrExt, WCSightViewExt, WCEditImageViewControllerDelegate>
{
    MMTableView * _tableView; // +0x68
    NSMutableArray * _contentViews; // +0x70
    UIView * _likeListView; // +0x78
    WCHeaderGridView * _headerGridView; // +0x80
    UIView * _inputView; // +0x88
    EmoticonBoardView * _emoticonBoardView; // +0x90
    UIButton * _expressionButton; // +0x98
    MMUILabel * _remainWordCountLabel; // +0xa0
    MMGrowTextView * _growTextView; // +0xa8
    WCOperateFloatView * _floatOperateView; // +0xb0
    WCAdvertiseActionFloatView * _advertiseActionFloatView; // +0xb8
    WCInputController * _inputController; // +0xc0
    BOOL _bStranger; // +0xc8
    NSString * _nsStrangerUsrName; // +0xd0
    BOOL _bForbideComment; // +0xd8
    MMURLHandler * _urlHandler; // +0xe0
    WCMomentsClickHandler * _clickHandler; // +0xe8
    BOOL _bIsShow; // +0xf0
    WCUserComment * _refComment; // +0xf8
    WCUserComment * _defaultRefComment; // +0x100
    double _defaultRefCommentContentOffset; // +0x108
    BOOL _hasFoundDefaultRefComment; // +0x110
    BOOL _hasJumpDefaultRefCommentOnce; // +0x111
    NSObject<WCCommentDetailViewControllerFBDelegate> * m_delegate; // +0x118
    NSString * _copyedText; // +0x120
    RichTextView * _contentDescView; // +0x128
    WCMomentsSpringTextContainerView * _springTextContainerView; // +0x130
    RichTextView * m_translateView; // +0x138
    UIButton * m_translateStatusView; // +0x140
    UIView * m_translateLineView; // +0x148
    int eTranslateStatus; // +0x150
    double fTranslateViewHeight; // +0x158
    WCUserComment * curLongPressedComment; // +0x160
    WCUserComment * curTranslateComment; // +0x168
    UIView * _errTipsView; // +0x170
    MMHeadImageView * _headImageView; // +0x178
    UrlLabel * _nickLabel; // +0x180
    WCContentItemBaseView * _mediaCellView; // +0x188
    RichTextView * _togetherTextView; // +0x190
    UILabel * _locationLabel; // +0x198
    MMUIButton * _privacyBtn; // +0x1a0
    UILabel * _timeLabel; // +0x1a8
    MMUIButton * _operateBtn; // +0x1b0
    MMUIButton * _deleteBtn; // +0x1b8
    UIButton * _advertiseLogo; // +0x1c0
    WCAdTagButton * _adTagButton; // +0x1c8
    WCCommentView * _commentViewForDelete; // +0x1d0
    WCADPageWrap * _floatViewPageWrap; // +0x1d8
    int m_commentWordLimit; // +0x1e0
    BOOL m_bHasClickFloat; // +0x1e4
    BOOL m_bHaveActionSheet; // +0x1e5
    UILabel * _rewardTipLabel; // +0x1e8
    WCSnsCommentDetailRewardView * _rewardDetailView; // +0x1f0
    WCHeaderGridView * _headImageRewardView; // +0x1f8
    UILabel * _adPOILabel; // +0x200
    UILabel * _adChainStrengthenLabel; // +0x208
    UILabel * _adAtAdvertiserLabel; // +0x210
    BOOL _isActionAtAd; // +0x218
    NSString * _inputSessionId; // +0x220
    NSMutableDictionary * m_dicUserCommentsUICache; // +0x228
    UIView * _adCardTopMaskView; // +0x230
    CContact * _atContact; // +0x238
    UIButton * _atButton; // +0x240
    WCPasteTextLengthLogic * pastelogic; // +0x248
    MMCPLabel * m_openIMDescLabel; // +0x250
    WCTimelineExtBean * _extBean; // +0x258
    BOOL m_forbidsReloadTableView; // +0x260
    BOOL _bJustShowContent; // +0x261
    BOOL _bMusicSearchScene; // +0x262
    BOOL _bFromAtFriend; // +0x263
    BOOL _canShowInvisibleTipsView; // +0x264
    BOOL _isInvisible; // +0x265
    BOOL _isStarModificationEnabled; // +0x266
    BOOL _isStarBrowsingEnabled; // +0x267
    BOOL _dynamicTagEnabled; // +0x268
    BOOL _isViewAppear; // +0x269
    BOOL _isEnhanceInteractionEnabled; // +0x26a
    BOOL _hasActionRecordForShowingStarGuideButton; // +0x26b
    BOOL _isModifyingStarStatus; // +0x26c
    BOOL _hasModifiedStarStatus; // +0x26d
    BOOL _hasActionRecordForShowingFinderShareButton; // +0x26e
    BOOL _hasActionRecordForShowingNewLifeShareButton; // +0x26f
    BOOL _actionAreaWrapEnabled; // +0x270
    BOOL _didShowModifyShareScopeInActionSheet; // +0x271
    NSString * _nsUsrName; // +0x278
    long long _uiSource; // +0x280
    WCTogetherTailReporter * _togetherTailReporter; // +0x288
    WCMomentsTigerReporter * _tigerReporter; // +0x290
    WCDataItem * _dataItem; // +0x298
    WCContentItem * _contentItem; // +0x2a0
    NSMutableArray * _arrMediaList; // +0x2a8
    NSMutableArray * _arrCommentList; // +0x2b0
    NSMutableArray * _arrLikeList; // +0x2b8
    WCCommentItem * _failedComment; // +0x2c0
    long long _tipType; // +0x2c8
    WCCommentReport * _commentReport; // +0x2d0
    WCAlbumForwardFinderUtil * _albumForwardFlow; // +0x2d8
    long long _enterScene; // +0x2e0
    long long _homepageType; // +0x2e8
    WCMomentsPageContext * _pageContext; // +0x2f0
    WCTogetherHistoryReportSession * _togetherHistoryReportSession; // +0x2f8
    long long _lastRemainWordCount; // +0x300
    WCMomentsNewLifeShareViewModel * _newlifeShareViewModel; // +0x308
    CEmoticonWrap * _emoticonWrap; // +0x310
    SharePreConfirmView * _sharePreConfirmView; // +0x318
    SharePreConfirmSheetView * _sharePreConfirmSheetView; // +0x320
    WCTimelineCommentEmotionReport * _emotionReporter; // +0x328
    UrlLabel * _sourceLabel; // +0x330
    WCAdvertiseFeedbackBaseView * _adFeedbackView; // +0x338
    WCMomentsWeAppLogoNameView * _weAppView; // +0x340
    WCAdActionLinkDetailView * _adDetailView; // +0x348
    WCAdBreakFrameView * _adBreakFrameView; // +0x350
    WCAdBreakFrameTagView * _adBreakFrameTagView; // +0x358
    WCAdInteractionLabelView * _adInteractionLabelView; // +0x360
    WCAdSocialLikeView * _adSocialLikeView; // +0x368
    WCAdSocialLikeCheerPlayerView * _adSocialLikeCheerPlayerView; // +0x370
    WCAdContinuousLikeBannerAnimationView * _adContinuousLikeBannerAnimationView; // +0x378
    WCAdWeGameGiftTagView * _adWeGameGiftTagView; // +0x380
    WCAdContinuousLikeTagView * _adContinuousLikeTagView; // +0x388
    WCAdStateSettingBarView * _adStateSettingBarView; // +0x390
    WCAdRandomPickCardView * _adRandomPickCardView; // +0x398
    WCAdPreviewMaskView * _adPreviewMaskView; // +0x3a0
    WCAdInteractionTagView * _adInteractionTagView; // +0x3a8
    WCAdHeadStateView * _adHeadStateView; // +0x3b0
    WCAdHighlightTagView * _adHighlightTagView; // +0x3b8
    WCAdCommonBarContainerView * _adBarContainerView; // +0x3c0
    WCMomentsPostSessionController * _postSessionController; // +0x3c8
    WCMomentsShareScopeMgr * _shareScopeMgr; // +0x3d0
    WCMomentsInvisibleTipsView * _invisibleTipsView; // +0x3d8
    TextStateItemView * _textStateView; // +0x3e0
    MMUIButton * _starIconButton; // +0x3e8
    WCMomentsStarGuideViewModel * _starGuideViewModel; // +0x3f0
    WCMomentsStarGuideButton * _starGuideButton; // +0x3f8
    WCMomentsFinderShareViewModel * _finderShareViewModel; // +0x400
    WCMomentsPostShareButton * _postShareButton; // +0x408
    WCMomentsInputAreaReportInfo * _inputAreaReportInfo; // +0x410
    unsigned long long _actionAreaRowCount; // +0x418
    WCMomentsAnimatedFireworksView * _animatedFireworksView; // +0x420
    NSArray * _actionItems; // +0x428
}
+ (id)makeDataWrapForWCTranslate:(id)arg1;
- (void)becomeInput;
- (void)becomeInputWithAtAdvertise;
- (void)resignInput;
- (id)getDefaultInputPlaceHolder;
- (id)expressionButtonImageColor;
- (void)mmTableView:(id)arg1 touchesBegan:(id)arg2 withEvent:(id)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)mmTableViewDidFinishedLoading:(id)arg1;
- (void)onSingleTapOnInputView;
- (void)initInputToolView;
- (void)setInputAtButtonImage;
- (void)initEmoticonView;
- (void)initInputController;
- (void)updatePlaceholderImage;
- (void)updateContentOffset;
- (void)updateInputView;
- (void)reloadData:(id)arg1;
- (void)updateWordCnt:(long long)arg1;
- (void)performLightFeedBackIfNeededWithRemain:(long long)arg1;
- (void)updateGrowTextViewMaxHeight;
- (double)maxGrowTextViewHeight;
- (BOOL)hasAtFriend:(id)arg1;
- (id)subAtContactString:(id)arg1;
- (double)getTableViewVisibleHeight;
- (void)updateTableLayout;
- (void)updateTableViewHeight;
- (void)onSelectorSelfDefinedEmotcion:(id)arg1;
- (void)MMGrowTextViewHeightDidChanged:(id)arg1;
- (void)MMGrowTextViewBeginEditing:(id)arg1;
- (void)onInputModeChangeTo:(long long)arg1 Animated:(BOOL)arg2;
- (void)onTextChanged:(id)arg1 selectedRange:(_NSRange)arg2;
- (void)growTextViewDidClickSendWithText:(id)arg1;
- (void)didCommitText:(id)arg1;
- (void)textViewTextDidChange;
- (void)onGrowTextViewMenuItemClicked:(unsigned long long)arg1;
- (void)onGrowTextViewDidShowMenuControllerWithMenuItemArr:(id)arg1;
- (void)keyboardWillShow;
- (void)keyboardWillHide;
- (void)keyboardDidHide;
- (BOOL)shouldRespondToKeyBoardEvent;
- (void)didSelectContact:(id)arg1;
- (void)onCancelSelectContact;
- (void)onTextView:(id)arg1 shouldChangeTextInRange:(_NSRange)arg2 replacementText:(id)arg3;
- (void)onMenuControllerWillShow:(id)arg1;
- (void)onMenuControllerWillHide:(id)arg1;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)onCopyText:(id)arg1;
- (void)onCopyComment:(id)arg1;
- (void)onCopy:(id)arg1;
- (void)onDeleteComment:(id)arg1;
- (void)onDelete:(id)arg1;
- (void)onFavAdd:(id)arg1;
- (void)onFavAddForTranslated:(id)arg1;
- (void)onWebSearchText:(id)arg1;
- (void)onWebSearchComment:(id)arg1;
- (void)onWebSearch:(id)arg1;
- (void)showEmoitionMenuItemWithRect:(CGRect)arg1 userComment:(id)arg2;
- (void)showMenuItemForText:(id)arg1 withRect:(CGRect)arg2 isWord:(BOOL)arg3 andView:(id)arg4;
- (void)showMenuItemForText:(id)arg1 withRect:(CGRect)arg2 isWord:(BOOL)arg3 andView:(id)arg4 isCommentText:(BOOL)arg5;
- (void)showMenuItemForComment:(id)arg1 withRect:(CGRect)arg2 withComment:(id)arg3;
- (void)onLinkLongPressed:(id)arg1 withRect:(CGRect)arg2 withView:(id)arg3;
- (void)onSearchTopicLongPressed:(id)arg1 withRect:(CGRect)arg2 withView:(id)arg3;
- (void)onPhoneLongPressed:(id)arg1 withRect:(CGRect)arg2 withView:(id)arg3;
- (void)onTextLongPressed:(id)arg1 withRect:(CGRect)arg2 withView:(id)arg3;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onPhoneClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onLinkClicked:(id)arg1 backupUrl:(id)arg2 withRect:(CGRect)arg3;
- (void)handleUrl:(id)arg1 backupUrl:(id)arg2;
- (void)onSearchTopicClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onCommentViewTopicTagClicked:(id)arg1 query:(id)arg2;
- (void)openTopicWithQuery:(id)arg1 userComment:(id)arg2;
- (void)onCommentViewClicked:(id)arg1;
- (void)onCommentViewLongPressed:(id)arg1 withText:(id)arg2 withRect:(CGRect)arg3;
- (BOOL)isTouchEnableOnCommentView;
- (void)onReloadCommentCellView:(id)arg1;
- (void)delayReloadTableView;
- (void)setInputToolView:(BOOL)arg1;
- (void)onRestoreCommentCellView:(id)arg1;
- (void)onAtableAdClicked:(id)arg1;
- (void)onExpressionButtonClicked:(id)arg1;
- (void)reloadExpressionButtonImage:(long long)arg1;
- (void)updateRewardView;
- (void)updateRewardTip;
- (void)onDataChangedWithAdded:(id)arg1 andChanged:(id)arg2 andDeleted:(id)arg3;
- (void)onUpdateDataItemDetailFinished:(long long)arg1 itemId:(id)arg2 dataItem:(id)arg3;
- (void)onModifyDataItemShareScopeFinished:(long long)arg1 dataItemID:(id)arg2;
- (void)onCommentItemDeleteFinished:(long long)arg1 commentItemID:(id)arg2 dataItemID:(id)arg3;
- (BOOL)shouldInteractivePop;
- (void)onAdvertiseDetail;
- (void)onAdvertiseDetailWithSource:(long long)arg1;
- (void)onAdFeedbackBtnClick:(id)arg1;
- (void)resetAdFeedbackView;
- (void)onDoAdvertiseAction:(id)arg1;
- (void)onOpenIMTimeLineAction:(id)arg1;
- (void)onAdActoin:(id)arg1;
- (void)onUnInterestOpenIMTimeLine;
- (void)onDataItemDeleteFinished:(long long)arg1 dataItemID:(id)arg2;
- (void)onModifyTogetherFinished:(long long)arg1 itemID:(id)arg2 dataItem:(id)arg3;
- (void)onModifyDataItemStarStatusFinished:(long long)arg1 dataItem:(id)arg2;
- (void)onCommentSend:(id)arg1 comment:(id)arg2;
- (void)onAdCardActionButtonClick;
- (void)onAdDynamicFeedViewActionClickWithSource:(long long)arg1;
- (void)onAdDynamicFeedViewActionClickWithExtraClickType:(long long)arg1 jumpInfo:(id)arg2;
- (id)fetchAdTagButtonOriginView;
- (id)fetchAdWeGameGiftTagOriginView;
- (id)fetchAdContinuousLikeTagOriginView;
- (id)fetchAdStateSettingBarOriginView;
- (id)fetchAdCommonBarContainerOriginView;
- (id)fetchAdOriginView;
- (void)onAdLikeButtonTouched:(id)arg1;
- (void)onAdLikeButtonClicked:(id)arg1;
- (void)onAdCommentButtonClicked:(id)arg1;
- (void)onAdLikeButtonSizeChanged:(id)arg1;
- (void)onAdInviteButtonClick:(id)arg1;
- (void)onActionFloatView:(id)arg1 didSelectReason:(id)arg2;
- (void)onActionFloatView:(id)arg1 didSelectFeedbackItem:(id)arg2;
- (void)onWCSightViewWillEnterFullScreen:(id)arg1;
- (void)onWCSightViewWillExitFullScreen:(id)arg1;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2;
- (void)ImageDidFail:(id)arg1;
- (void)isInAtFriendCommentDetailViewController:(BOOL *)arg1;
- (void)onWCContentItemViewInteractedByUser:(id)arg1 sender:(id)arg2;
- (void)onWCContentItemViewWillEnterFullScreen;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onWCCommentEmotionViewClick:(id)arg1;
- (void)onWCCommentEmotionViewSizeChange;
- (void)onResignActive;
- (void)onApplicationDidBecomeActive;
- (void)momentsContactMgr:(id)arg1 didUpdateContact:(id)arg2;
- (void)registerYReportSdk;
- (void)setupInputAreaReportInfo;
- (void)reloadRightBarButtonItems;
- (void)onShowMenu:(id)arg1;
- (BOOL)canSetPrivate;
- (id)getPrivacyString;
- (void)startSetPrivacy;
- (void)onSetDataItemPrivateFinished:(long long)arg1 dataItemID:(id)arg2;
- (void)onSetDataItemPublicFinished:(long long)arg1 dataItemID:(id)arg2;
- (BOOL)canModifyTogetherList;
- (void)modifyTogetherList;
- (void)RightBarButton_onModifyTogetherFinished:(long long)arg1 itemID:(id)arg2 dataItem:(id)arg3;
- (void)onForwardToFinderPost;
- (void)doModifyShareScopeExposureReport:(BOOL)arg1;
- (void)onActionSheetCancel;
- (void)showEmotionConfirmView;
- (void)hideEmotionConfirmView;
- (void)commentEmotion;
- (void)OnSharePreConfirmViewSend:(id)arg1;
- (void)OnSharePreConfirmViewCancel:(id)arg1;
- (void)OnSharePreConfirmViewDidHide:(id)arg1;
- (void)OnSharePreConfirmSheetViewSend:(id)arg1;
- (void)OnSharePreConfirmSheetViewCancel:(id)arg1;
- (id)getReplyNickNameFromComment:(id)arg1;
- (id)init;
- (id)pageContext;
- (void)hideFloatView;
- (void)setDataItem:(id)arg1;
- (BOOL)shouldForbidComment;
- (double)getTableViewMarginToBottom;
- (id)shareScopeMgr;
- (void)dealloc;
- (void)initData;
- (BOOL)isSpringStyle;
- (BOOL)isSpringStyleForDataItem:(id)arg1;
- (void)onActionLocation:(id)arg1;
- (void)navigateToOriginPOI;
- (void)onActionAdPOI:(id)arg1;
- (void)onActionAtAd:(id)arg1;
- (void)onActionAdChainStrengthen:(id)arg1;
- (void)updateTimeLabelText;
- (BOOL)shouldShowErrTipsView;
- (BOOL)shouldShowInnerReSendBtn;
- (double)getContentWidth;
- (double)getInfoMaxWidth;
- (id)createHeadImageView;
- (id)createNickNameLabel;
- (id)createAdvertiseLogo:(double)arg1;
- (id)createOpenIMDescLabel:(id)arg1 maxWidth:(double)arg2;
- (id)createContentDescView:(id)arg1 contentDescPattern:(id)arg2;
- (id)createMediaView:(id)arg1;
- (id)createADDetailView;
- (id)createInteractionLocationLabel;
- (id)createDefaultLocationLabel;
- (id)createInteractionADLocationLabel;
- (id)createDefaultADLocationLabel;
- (void)createOperateImage:(id *)arg1 operateImageHL:(id *)arg2;
- (id)createAdInteractionLabelViewWithInfo:(id)arg1;
- (id)createAdRandomPickCardViewWithInfo:(id)arg1;
- (id)createAdBreakFrameTagView;
- (id)createAdTagButtonWithInfo:(id)arg1;
- (id)createAdWeGameGiftTagView;
- (id)createAdContinuousLikeTagView;
- (id)createAdStateSettingBarView;
- (id)createAdInteractionTagView;
- (id)createAdHighlightTagView;
- (id)createAdBarContainerView;
- (id)createTogetherTextView;
- (id)createWithTextLabel:(id)arg1;
- (id)createPrivacyBtn;
- (id)createRewardTipLabel;
- (id)createOperateBtn:(CGRect)arg1 operateImage:(id)arg2 operateImageHL:(id)arg3;
- (id)createAdChainStrengthenLabel:(double)arg1;
- (void)updateAdChainStrengthenContent;
- (id)createAdAtAdvertiserLabel:(double)arg1;
- (id)createDeleteButton;
- (id)createOperateFloatView;
- (double)calAdevertiseLabelMaxWidthToShowWithHeadImageSize:(CGSize)arg1 operateImageSize:(CGSize)arg2 timeLabelWidth:(double)arg3;
- (id)sourceLabel;
- (id)weAppView;
- (void)initTableHeaderView;
- (void)initExtensionViewsInTableHeader;
- (void)_cleanMainViewsInTableHeaderView:(id)arg1;
- (void)_recreateMainViewsInTableHeaderView:(id)arg1;
- (void)_cleanExtensionViewsInTableHeaderView:(id)arg1;
- (void)_recreateExtensionViewsInTableHeaderView:(id)arg1;
- (void)_layoutTableHeaderView:(id)arg1;
- (void)_layoutSubviewsInTableHeaderView:(id)arg1;
- (void)tryToAutoPlayAdVideo;
- (void)layoutFireworksPlayerViewInTableHeaderView:(id)arg1;
- (id)fireworksDisplayRectList;
- (void)tryToSetAdVideoPlayingState:(BOOL)arg1 forItemView:(id)arg2;
- (id)fetchContentItem;
- (BOOL)shouldShowRewardTip;
- (BOOL)shouldShowRewardDetailView;
- (void)initRewardDetailView:(id)arg1;
- (void)rewardDetailViewTapped;
- (void)resetFailedCommentText;
- (void)showInvisibleTipsView;
- (void)layoutInvisibleTipsView;
- (void)playerViewController:(id)arg1 requireToPostWithShareInfo:(id)arg2;
- (BOOL)isShareButtonVisibleInPlayerViewController:(id)arg1;
- (void)templateFullScreenViewController:(id)arg1 didClickShareButton:(id)arg2;
- (void)animationDidEndRemainView:(id)arg1 hintDataItem:(id)arg2;
- (void)onAdActionLinkDetailClicked;
- (void)onForbidScrollToTop;
- (void)onResumeScrollToTop;
- (id)getContactDisplayName;
- (double)getHeadImageViewLeftMargin;
- (double)getCommentViewLeftMargin;
- (double)getCommentViewWidth;
- (double)getOperateBtnRightMargin;
- (double)layoutHeadInnerView;
- (BOOL)canShowSourceLabel;
- (BOOL)canShowWeAppView;
- (BOOL)canShowStarIcon;
- (BOOL)canShowStarIconWithDataItem:(id)arg1;
- (BOOL)canShowDeleteButton;
- (BOOL)canShowPirvacyButton;
- (double)layoutActionArea;
- (double)maxActionAreaWidth;
- (id)actionAreaSubViewWithType:(unsigned long long)arg1;
- (BOOL)layoutSourceLabel;
- (void)layoutWeAppSource;
- (double)maxSourceContentWidth;
- (int)getDefaultInputViewHeight;
- (int)getInputViewHeight;
- (void)initTableFooterView;
- (id)privateFooterTipsForContentType:(long long)arg1;
- (void)initTableView;
- (void)reloadTableView;
- (void)forbidsReloadTableView;
- (void)tryResumeReloadTableView;
- (id)getCommentsUICacheKey:(id)arg1;
- (id)FormCommentTipsView:(id)arg1;
- (void)updateHeaderGridView;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewWillPush:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidTransitionToNewSize;
- (void)onHeadImageClicked:(id)arg1;
- (void)onDeletePhoto:(id)arg1;
- (void)onShowGroup;
- (void)onClickStarIconButton:(id)arg1;
- (void)onClickContent:(id)arg1 way:(long long)arg2;
- (void)onClickSelfComment:(id)arg1 comment:(id)arg2 index:(long long)arg3 confirmDelete:(BOOL)arg4;
- (void)onClickFriendsComment:(id)arg1 comment:(id)arg2 index:(long long)arg3 replay:(BOOL)arg4;
- (id)generateInputSessionID;
- (void)showConfirmDeleteAlert:(long long)arg1;
- (void)onClickCommentBtnOnFloatView;
- (void)onClickLikeBtnOnFloatView;
- (void)onCommentPhoto:(id)arg1;
- (void)modifyStarStatus:(BOOL)arg1;
- (void)_modifyStarStatus:(BOOL)arg1;
- (void)handleModifyDataItemStarStatusFinished:(long long)arg1 dataItem:(id)arg2;
- (void)starGuideButtonClicked:(id)arg1;
- (void)doStarReportWithDataItem:(id)arg1 isStarred:(BOOL)arg2 isFromBanner:(BOOL)arg3;
- (void)showStarIconButtonAnimatedWithCompletion:(id /* block */)arg1;
- (void)hideStarIconButtonAnimatedWithCompletion:(id /* block */)arg1;
- (void)finderShareButtonClicked:(id)arg1;
- (void)clearFinderShareButtonIfNeeded;
- (void)shareToNewLifeWithScene:(long long)arg1;
- (void)clearNewLifeShareButtonIfNeeded;
- (void)newlifeShareButtonClicked:(id)arg1;
- (void)onViewAnimationWillHide;
- (void)handleResendBtnClick;
- (void)handleDetailBtnClick;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)findCommentViewWithComment:(id)arg1;
- (void)adjustTableViewRect;
- (void)willShow;
- (void)willDisshow;
- (id)GetMyTranslateSnsKeyID;
- (void)onTranslateFeed:(id)arg1;
- (void)onCancelTranslateFeed:(id)arg1;
- (void)onCancelTranslateFeedInTranslatedArea:(id)arg1;
- (void)onTranslateAction:(id)arg1;
- (void)onChangeTranslateLanguageForContent:(id)arg1;
- (void)onChangeTranslateLanguageForComment:(id)arg1;
- (void)onTranslateCommentText:(id)arg1;
- (void)onTranslateCommentOrigin:(id)arg1;
- (void)onTranslateComment:(id)arg1;
- (void)modifyShareScope;
- (double)initContentTranslateView:(id)arg1 andSuperView:(id)arg2;
- (void)makeTranslateShowAnimation;
- (double)initTranslateStatusButton:(BOOL)arg1 withTitle:(id)arg2 andReferView:(id)arg3;
- (void)onTranslateSnsFailed:(id)arg1 errTip:(id)arg2;
- (void)onTranslateSnsChanged:(id)arg1;
- (void)floatViewHiddenWrap;
- (void)asyncRecordMicroMerchantInteractionIfNeeded:(unsigned long long)arg1;
- (void)momentsClickHandler:(id)arg1 willClickUserProfileWithContext:(id)arg2;
- (void)reportOnViewApper;
- (void)reportOnViewDisappear;
- (id)behaviourInfoSession;
- (int)behaviourInfoPageType;
- (id)albumFeedBehaviourSession;
- (void)endAlbumFeedBehaviourSessionIfNeeded;
- (void)reportMenuAction:(long long)arg1 isComment:(BOOL)arg2;
- (void)reportTopicTagInputMenuItemAction:(long long)arg1;
- (id)togetherTailReporter;
- (void)reportTogetherTailIfNeeded;
- (id)tigerReporter;
- (void)reportTigerIfNeeded;
- (void)onAdFeedbackDisappear:(id)arg1;
- (void)onClickComplainBtn:(id)arg1 dataItem:(id)arg2;
- (void)onClickGuideAdManageBtn:(id)arg1 dataItem:(id)arg2;
- (void)onClickPositiveBtn:(id)arg1;
- (void)onClickNegativeBtn:(BOOL)arg1 dataItem:(id)arg2;
- (void)onClickNegativeReasonBtn:(id)arg1 dataItem:(id)arg2;
- (CGPoint)genButtonClickPoint:(id)arg1 isBaseFullScreen:(BOOL)arg2;
- (void)onRemoveAd;
- (void)onRemoveAd:(id)arg1;
- (void)showSecurityVerificationAlert;
- (void)onCommentErrTipsViewCustomButtonClicked:(id)arg1;
- (void)onCommentErrTipsViewLinkClicked:(id)arg1 nsUrl:(id)arg2;
- (void)onSecurityVerificationFinished:(BOOL)arg1 type:(unsigned long long)arg2 dataItem:(id)arg3;
- (void)tryUpdateAdContent:(id)arg1;
- (void)updateAdRelievedBuyVisibility:(id)arg1;
- (void)initAdBreakFrameView;
- (void)resizeAdBreakFrameView;
- (void)initAdPreviewMaskView;
- (void)resizeAdPreviewMaskView;
- (id)extBean;
- (void)setExtBean:(id)arg1;
- (void)clearExtBean;
- (void)initAdSocialLikeView;
- (void)initAdSocialLikeCheerPlayerView;
- (void)resizeAdSocialLikeCheerPlayerView;
- (void)initAdContinuousLikeBannerAnimationView;
- (void)resizeAdContinuousLikeBannerAnimationView;
- (BOOL)handleClickedOnAdFirstLikeForContact:(id)arg1;
- (id)generatePostReportSessionForEntrance:(long long)arg1;
- (id)getCurrentViewControllerForContentItemView:(id)arg1;
- (id)getFinderLiveDismissTarget;
- (BOOL)shouldLiveUseMorphDismissForCustomKey:(id)arg1;
- (CGRect)liveMorphDismissTargetFrameOnScreenForCustomKey:(id)arg1 videoSize:(CGSize)arg2;
- (id)liveShareViewViewWithTid:(id)arg1;
- (BOOL)isAdFireworkCheerCommentStyle;
- (id)commentViewBackgroundColor;
- (void)startPlayRandomFireworksIfNeeded;
- (void)stopPlayRandomFireworksIfNeeded;
- (id)nsStrangerUsrName;
- (void)setNsStrangerUsrName:(id)arg1;
- (id)nsUsrName;
- (void)setNsUsrName:(id)arg1;
- (long long)uiSource;
- (void)setUiSource:(long long)arg1;
- (BOOL)bStranger;
- (void)setBStranger:(BOOL)arg1;
- (BOOL)bForbideComment;
- (void)setBForbideComment:(BOOL)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)refComment;
- (void)setRefComment:(id)arg1;
- (id)defaultRefComment;
- (void)setDefaultRefComment:(id)arg1;
- (BOOL)bJustShowContent;
- (void)setBJustShowContent:(BOOL)arg1;
- (id)dataItem;
- (id)contentItem;
- (void)setContentItem:(id)arg1;
- (id)arrMediaList;
- (void)setArrMediaList:(id)arg1;
- (id)arrCommentList;
- (void)setArrCommentList:(id)arg1;
- (id)arrLikeList;
- (void)setArrLikeList:(id)arg1;
- (BOOL)bMusicSearchScene;
- (void)setBMusicSearchScene:(BOOL)arg1;
- (id)failedComment;
- (void)setFailedComment:(id)arg1;
- (long long)tipType;
- (void)setTipType:(long long)arg1;
- (BOOL)bFromAtFriend;
- (void)setBFromAtFriend:(BOOL)arg1;
- (id)commentReport;
- (void)setCommentReport:(id)arg1;
- (id)albumForwardFlow;
- (void)setAlbumForwardFlow:(id)arg1;
- (long long)enterScene;
- (void)setEnterScene:(long long)arg1;
- (long long)homepageType;
- (void)setHomepageType:(long long)arg1;
- (void)setPageContext:(id)arg1;
- (BOOL)canShowInvisibleTipsView;
- (void)setCanShowInvisibleTipsView:(BOOL)arg1;
- (BOOL)isInvisible;
- (id)togetherHistoryReportSession;
- (void)setTogetherHistoryReportSession:(id)arg1;
- (long long)lastRemainWordCount;
- (void)setLastRemainWordCount:(long long)arg1;
- (BOOL)isStarModificationEnabled;
- (BOOL)isStarBrowsingEnabled;
- (BOOL)dynamicTagEnabled;
- (void)setDynamicTagEnabled:(BOOL)arg1;
- (id)newlifeShareViewModel;
- (void)setNewlifeShareViewModel:(id)arg1;
- (id)emoticonWrap;
- (void)setEmoticonWrap:(id)arg1;
- (id)sharePreConfirmView;
- (void)setSharePreConfirmView:(id)arg1;
- (id)sharePreConfirmSheetView;
- (void)setSharePreConfirmSheetView:(id)arg1;
- (id)emotionReporter;
- (void)setEmotionReporter:(id)arg1;
- (BOOL)isViewAppear;
- (void)setIsViewAppear:(BOOL)arg1;
- (BOOL)isEnhanceInteractionEnabled;
- (void)setIsEnhanceInteractionEnabled:(BOOL)arg1;
- (void)setSourceLabel:(id)arg1;
- (id)adFeedbackView;
- (void)setAdFeedbackView:(id)arg1;
- (void)setWeAppView:(id)arg1;
- (id)adDetailView;
- (void)setAdDetailView:(id)arg1;
- (id)adBreakFrameView;
- (void)setAdBreakFrameView:(id)arg1;
- (id)adBreakFrameTagView;
- (void)setAdBreakFrameTagView:(id)arg1;
- (id)adInteractionLabelView;
- (void)setAdInteractionLabelView:(id)arg1;
- (id)adSocialLikeView;
- (void)setAdSocialLikeView:(id)arg1;
- (id)adSocialLikeCheerPlayerView;
- (void)setAdSocialLikeCheerPlayerView:(id)arg1;
- (id)adContinuousLikeBannerAnimationView;
- (void)setAdContinuousLikeBannerAnimationView:(id)arg1;
- (id)adWeGameGiftTagView;
- (void)setAdWeGameGiftTagView:(id)arg1;
- (id)adContinuousLikeTagView;
- (void)setAdContinuousLikeTagView:(id)arg1;
- (id)adStateSettingBarView;
- (void)setAdStateSettingBarView:(id)arg1;
- (id)adRandomPickCardView;
- (void)setAdRandomPickCardView:(id)arg1;
- (id)adPreviewMaskView;
- (void)setAdPreviewMaskView:(id)arg1;
- (id)adInteractionTagView;
- (void)setAdInteractionTagView:(id)arg1;
- (id)adHeadStateView;
- (void)setAdHeadStateView:(id)arg1;
- (id)adHighlightTagView;
- (void)setAdHighlightTagView:(id)arg1;
- (id)adBarContainerView;
- (void)setAdBarContainerView:(id)arg1;
- (id)postSessionController;
- (void)setPostSessionController:(id)arg1;
- (void)setShareScopeMgr:(id)arg1;
- (id)invisibleTipsView;
- (void)setInvisibleTipsView:(id)arg1;
- (id)textStateView;
- (void)setTextStateView:(id)arg1;
- (id)starIconButton;
- (void)setStarIconButton:(id)arg1;
- (BOOL)hasActionRecordForShowingStarGuideButton;
- (void)setHasActionRecordForShowingStarGuideButton:(BOOL)arg1;
- (id)starGuideViewModel;
- (void)setStarGuideViewModel:(id)arg1;
- (id)starGuideButton;
- (void)setStarGuideButton:(id)arg1;
- (BOOL)isModifyingStarStatus;
- (void)setIsModifyingStarStatus:(BOOL)arg1;
- (BOOL)hasModifiedStarStatus;
- (void)setHasModifiedStarStatus:(BOOL)arg1;
- (id)finderShareViewModel;
- (void)setFinderShareViewModel:(id)arg1;
- (BOOL)hasActionRecordForShowingFinderShareButton;
- (void)setHasActionRecordForShowingFinderShareButton:(BOOL)arg1;
- (BOOL)hasActionRecordForShowingNewLifeShareButton;
- (void)setHasActionRecordForShowingNewLifeShareButton:(BOOL)arg1;
- (id)postShareButton;
- (void)setPostShareButton:(id)arg1;
- (id)inputAreaReportInfo;
- (void)setInputAreaReportInfo:(id)arg1;
- (BOOL)actionAreaWrapEnabled;
- (void)setActionAreaWrapEnabled:(BOOL)arg1;
- (unsigned long long)actionAreaRowCount;
- (void)setActionAreaRowCount:(unsigned long long)arg1;
- (id)animatedFireworksView;
- (void)setAnimatedFireworksView:(id)arg1;
- (id)actionItems;
- (void)setActionItems:(id)arg1;
- (BOOL)didShowModifyShareScopeInActionSheet;
- (void)setDidShowModifyShareScopeInActionSheet:(BOOL)arg1;
- (void).cxx_destruct;
@end

