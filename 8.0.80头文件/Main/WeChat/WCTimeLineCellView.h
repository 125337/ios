@interface WCTimeLineCellView : MMUIView <WCCanvasImageLoaderObserver, WCAdTagButtonDelegate, WCAdActionLinkDetailViewDelegate, WCAdSocialLikeViewDelegate, WCAdCommonBarContainerViewDelegate, WCTimelineErrTipsViewDelegate, WCFinderShareLiveViewDelegate, WAContactMgrExtension, WCMomentsContactMgrExt, IWCAdInfoProxyLogicExt, WCImageViewDelegate, IContactMgrExt, IStrangerContactMgrExt, WCActionSheetDelegate, RichTextLayoutDelegate, ILinkEventExt, ITranslateSnsMgrExt, WCTimeLineAdCardBaseViewDelegate, WCTimeLineAdDynamicFeedViewDelegate, WCContentItemBaseViewDelegate>
{
    WCDataItem * m_dataItem; // +0x8
    unsigned int m_row; // +0x10
    unsigned int m_section; // +0x14
    MMHeadImageView * m_headImage; // +0x18
    UrlLabel * m_nickLabel; // +0x20
    UIButton * m_contentDescBtn; // +0x28
    WCMomentsSpringTextContainerView * _springTextContainerView; // +0x30
    WCRichTextView * m_contentDescView; // +0x38
    RichTextView * m_togetherTextView; // +0x40
    UILabel * m_timeLabel; // +0x48
    UrlLabel * m_sourceLabel; // +0x50
    UrlLabel * m_individualSourceLabel; // +0x58
    WCMomentsWeAppLogoNameView * m_weAppView; // +0x60
    WCMomentsWeAppLogoNameView * m_individualWeAppView; // +0x68
    MMUIButton * m_privacyButton; // +0x70
    MMUIButton * m_starIconButton; // +0x78
    MMUIButton * m_deleteButton; // +0x80
    MMUIButton * m_operateBtn; // +0x88
    WCTimelineErrTipsView * m_errTipsView; // +0x90
    InteractionLabel * m_actionLabel; // +0x98
    InteractionLabel * m_musicLabel; // +0xa0
    UILabel * m_locationLabel; // +0xa8
    UILabel * m_individualLocationLabel; // +0xb0
    UIView * m_mediaView; // +0xb8
    UIButton * m_advertiseLogo; // +0xc0
    WCAdTagButton * m_adTagButton; // +0xc8
    BOOL m_showDetail; // +0xd0
    InteractionLabel * m_showFullTextView; // +0xd8
    WCRichTextView * m_translateView; // +0xe0
    UIButton * m_translateStatusView; // +0xe8
    UIView * m_translateLineView; // +0xf0
    int eTranslateStatus; // +0xf8
    NSString * m_copyedText; // +0x100
    id <ILinkEventExt> m_urlLabelDelegate; // +0x108
    UILabel * m_adPOILabel; // +0x110
    UILabel * _adChainStrengthenLabel; // +0x118
    NSString * m_cpKeyForNickname; // +0x120
    BOOL m_isNicknameUnsafe; // +0x128
    RichTextView * m_crashWarningLabel; // +0x130
    TextStateItemView * m_textStateView; // +0x138
    WCTimelinePostTipsView * m_postTipsView; // +0x140
    MMCPLabel * m_openIMDescLabel; // +0x148
    id <WCTimeLineCellViewDelegate> _timelineCellViewDelegate; // +0x150
    UILabel * _debugInfoLabel; // +0x158
    unsigned long long _cellType; // +0x160
    WCMomentsPageContext * _pageContext; // +0x168
    WCActionAreaVM * _actionAreaVM; // +0x170
    WCAdActionLinkDetailView * _adDetailView; // +0x178
    WCAdBreakFrameView * _adBreakFrameView; // +0x180
    WCAdBreakFrameTagView * _adBreakFrameTagView; // +0x188
    WCAdInteractionLabelView * _adInteractionLabelView; // +0x190
    WCAdSocialLikeView * _adSocialLikeView; // +0x198
    WCAdSocialLikeCheerPlayerView * _adSocialLikeCheerPlayerView; // +0x1a0
    WCAdWeGameGiftTagView * _adWeGameGiftTagView; // +0x1a8
    WCAdContinuousLikeTagView * _adContinuousLikeTagView; // +0x1b0
    WCAdStateSettingBarView * _adStateSettingBarView; // +0x1b8
    WCAdRandomPickCardContainerView * _adRandomPickCardContainerView; // +0x1c0
    WCAdPreviewMaskView * _adPreviewMaskView; // +0x1c8
    WCAdInteractionTagView * _adInteractionTagView; // +0x1d0
    WCAdHighlightTagView * _adHighlightTagView; // +0x1d8
    WCAdCommonBarContainerView * _adMediaBottomBarContainerView; // +0x1e0
    WCAdCommonBarContainerView * _adBarContainerView; // +0x1e8
    WCMomentsAnimatedFireworksView * _animatedFireworksView; // +0x1f0
    WCAdHeadStateView * _adHeadStateView; // +0x1f8
    WCAdHeadLivingView * _adHeadLivingView; // +0x200
    WCEcsLogoNameView * _ecsView; // +0x208
    NSString * _feedTailText; // +0x210
}
+ (double)heightForMedia:(id)arg1 pageContext:(id)arg2;
+ (double)heightForContentMedia:(id)arg1 pageContext:(id)arg2;
+ (double)heightForMedia:(id)arg1 fixMediaSize:(CGSize)arg2;
+ (double)heightForWSGroupItem:(id)arg1;
+ (id)mediaViewForWSGroupItem:(id)arg1;
+ (double)getHeadImageLeftMarginCurOri;
+ (double)getHeadImageLeftMarginForLayoutWidth:(double)arg1;
+ (double)getOperationBtnMarginRightCurOri;
+ (double)getOperationButtonRightCurOri;
+ (double)getOperationButtonRightForLayoutWidth:(double)arg1;
+ (id)getWithNickNameForPhotoData:(id)arg1;
+ (id)getTogetherNicknamesForDataItem:(id)arg1;
+ (id)getWithTextForDataItem:(id)arg1;
+ (BOOL)hasWithInfoForDataItem:(id)arg1;
+ (id)createTigerTextContainerView;
+ (id)createTogetherTextView;
+ (BOOL)isShowErrTipsView:(id)arg1;
+ (BOOL)isShowOperationBtn:(id)arg1;
+ (double)heightForDataItemDescContent:(id)arg1;
+ (BOOL)canShowDescContentTranslateWithDataItem:(id)arg1;
+ (BOOL)shouldShowFullTextButtonWithDataItem:(id)arg1 layoutWidth:(double)arg2;
+ (BOOL)shouldShowFullTextButtonWithDataItem:(id)arg1;
+ (BOOL)canShowDetailWithDataItem:(id)arg1;
+ (double)fullTextViewHeight;
+ (double)fullTextViewTopPadding;
+ (unsigned long long)numberOfContentLines:(id)arg1 showDetail:(BOOL)arg2;
+ (double)contentHeight:(id)arg1 showDetail:(BOOL)arg2;
+ (void)calculateDataItem:(id)arg1 showDetail:(BOOL)arg2 contentHeight:(double *)arg3 numberOfLines:(unsigned long long *)arg4;
+ (double)heightForDataItem:(id)arg1 pageContext:(id)arg2 actionAreaVM:(id)arg3;
+ (double)heightForDataItem:(id)arg1 containerWidth:(double)arg2 pageContext:(id)arg3 actionAreaVM:(id)arg4;
+ (id)accessibilityDescForWSDataItem:(id)arg1;
+ (id)accessibilityTrimedDescForDataItem:(id)arg1;
+ (id)trimedDisplayDescForDataItem:(id)arg1;
+ (id)descPatternForDataItem:(id)arg1;
+ (id)defaultContentTextView;
+ (unsigned long long)actionAreaRowCount:(id)arg1 pageContext:(id)arg2 actionAreaVM:(id)arg3;
+ (unsigned long long)actionAreaRowCount:(id)arg1 pageContext:(id)arg2 containerWidth:(double)arg3 actionAreaVM:(id)arg4;
+ (double)maxActionAreaWidthForDataItem:(id)arg1 pageContext:(id)arg2;
+ (double)maxActionAreaWidthForDataItem:(id)arg1 pageContext:(id)arg2 containerWidth:(double)arg3;
+ (BOOL)canShowOperateButtonForDataItem:(id)arg1 pageContext:(id)arg2;
+ (CGSize)operateButtonSize;
+ (id)makeDataWrapForWCTranslate:(id)arg1;
+ (long long)fetchAdSocialLikeDisplayTypeWithDataItem:(id)arg1;
- (id)defaultCellView:(id)arg1;
- (id)addViewForMedia:(id)arg1 toView:(id)arg2 inPoint:(CGPoint)arg3 urlLabelDelegate:(id)arg4;
- (double)timelineLayoutWidth;
- (double)timelineLayoutLeftMargin;
- (double)timelineOperationButtonRight;
- (id)getContactDisplayName;
- (BOOL)useStatusIconStyleUpgrade;
- (Class)timelineCellTextStateViewClass;
- (id)createTimelineCellTextStateView:(id)arg1;
- (void)onStatusChange;
- (void)onStarIconButtonClicked:(id)arg1;
- (void)onShowGroup;
- (void)onShowFullText;
- (void)initHeadImage;
- (void)onNoContactHeadImageClick;
- (void)initNickLabel;
- (void)initTextStateView;
- (void)onTapTextStateViewForCard;
- (void)hideTimelineTextStateView;
- (void)initTigerContentViewWithContentDesc:(id)arg1;
- (void)initContentDescButton:(id)arg1;
- (void)initContentDescView:(id)arg1;
- (void)initShowFullTextView;
- (void)configFoldReportForShowFullTextView;
- (id)genFoldReportDict;
- (id)showFullTextView;
- (void)initActionLabel;
- (void)initMusicLabel;
- (void)initLocationLabel;
- (void)initIndividualLocationLabel;
- (void)initIndividualSourceLabel;
- (void)configFeedTailReport;
- (id)genFeedTailReportDict;
- (void)initIndividualWeAppInfoLabel;
- (void)initAdPOILabel;
- (void)initWithLabel:(id)arg1;
- (void)initTimeLabel;
- (void)initEcsView;
- (void)initAdChainStrengthenLabel;
- (void)initAdBreakFrameView;
- (void)resizeAdBreakFrameView;
- (void)initAdPreviewMaskView;
- (void)resizeAdPreviewMaskView;
- (void)checkAdPreviewMaskView;
- (void)initOperateBtn;
- (id)operateBtnImage:(BOOL)arg1 isSpringStyle:(BOOL)arg2;
- (void)cleanAdSocialLikeView;
- (void)initAdSocialLikeView;
- (void)initAdSocialLikeCheerPlayerView;
- (void)resizeAdSocialLikeCheerPlayerView;
- (id)fetchAdContinuousLikeBannerAnimationView;
- (void)initAdContinuousLikeBannerAnimationView;
- (void)resizeAdContinuousLikeBannerAnimationView;
- (void)layoutAdSliderView;
- (void)initSourceLabel;
- (void)initWeAppInfoLabel;
- (void)initStarIconButton;
- (void)initPrivacyButton:(id)arg1;
- (void)initDeleteButton;
- (void)initPostTipsView;
- (void)initErrTipsView;
- (void)initCrashWarningLabel;
- (void)updateCrashProtectedState:(id)arg1 newDataItem:(id)arg2;
- (void)updateWithDataItem:(id)arg1 actionAreaVM:(id)arg2;
- (void)initView;
- (void)adjustTimeLabelLine;
- (void)reportPossibleTextStateIconClickWithScene:(unsigned long long)arg1;
- (void)setupLocationView:(id)arg1 rightMostRect:(CGRect *)arg2 adjustTimeLabelWidth:(BOOL *)arg3;
- (void)setupSourceView:(id)arg1 rightMostRect:(CGRect *)arg2 adjustTimeLabelWidth:(BOOL *)arg3;
- (BOOL)canAutoPlayVideoWithoutSound;
- (void)autoPauseVideoWithoutSound;
- (id)getMainContentView;
- (void)autoPlayVideoWithoutSound;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (id)createAdStateSettingBarView;
- (void)layoutActionArea;
- (void)fitTimeLableLineElements;
- (double)actionAreaWidthWithElementTypes:(id)arg1;
- (id)actionAreaSubViewWithType:(unsigned long long)arg1;
- (void)onMenuControllerWillHide:(id)arg1;
- (void)willDisplay;
- (void)didEndDisplaying;
- (id)initWithUrlLabelDelegate:(id)arg1;
- (void)layoutOpenIMDescLabel;
- (void)layoutSubviews;
- (id)fireworksDisplayRectList;
- (void)setLikeEasterEggDimmed:(BOOL)arg1;
- (void)setLikeEasterEggDimProgress:(double)arg1;
- (void)dealloc;
- (void)momentsContactMgr:(id)arg1 didUpdateContact:(id)arg2;
- (void)handleContactUpdate:(id)arg1;
- (void)setTimelineCellViewDelegate:(id)arg1;
- (void)onClickWCImage:(id)arg1;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)onLinkClicked:(id)arg1 backupUrl:(id)arg2 withRect:(CGRect)arg3;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onCopy:(id)arg1;
- (void)onFavAdd:(id)arg1;
- (void)onFavAddForTranslated:(id)arg1;
- (void)onMore:(id)arg1;
- (void)onWebSearch:(id)arg1;
- (void)onAskXiaoWei:(id)arg1;
- (void)onRichTextViewDoubleClick:(id)arg1 withRect:(CGRect)arg2 withRichTextView:(id)arg3;
- (void)onLongPressWithRichTextCoverView:(id)arg1 bubblePullType:(long long)arg2 textSelectType:(long long)arg3;
- (id)menuItemsForTextView:(id)arg1;
- (id)generateMenuItemsForView:(id)arg1;
- (id)textViewForTranslatedState:(BOOL)arg1;
- (void)showMenuItemForText:(id)arg1 withRect:(CGRect)arg2 andView:(id)arg3;
- (void)showMenuItemForCrashProtectedStateWithRect:(CGRect)arg1 andView:(id)arg2;
- (void)onLinkLongPressed:(id)arg1 withRect:(CGRect)arg2 withView:(id)arg3;
- (void)onSearchTopicLongPressed:(id)arg1 withRect:(CGRect)arg2 withView:(id)arg3;
- (void)onPhoneLongPressed:(id)arg1 withRect:(CGRect)arg2 withView:(id)arg3;
- (void)onTextLongPressed:(id)arg1 withRect:(CGRect)arg2 withView:(id)arg3;
- (void)onTextClicked:(id)arg1 withRect:(CGRect)arg2 withView:(id)arg3;
- (void)onSearchTopicClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)showProfileForUser:(id)arg1;
- (void)onDoubleClick;
- (void)showContactInfo;
- (void)editBlackList;
- (void)onCommentPhoto:(id)arg1;
- (void)onDeletePhoto:(id)arg1;
- (void)onOpenWeApp;
- (void)onActionJump:(id)arg1;
- (void)onActionMusic:(id)arg1;
- (void)onActionLocation:(id)arg1;
- (void)onActionAdPOI:(id)arg1;
- (void)onActionAdChainStrengthen:(id)arg1;
- (void)showSecurityVerificationAlert;
- (void)onReSendPhoto:(id)arg1;
- (void)onAdvertiseDetail;
- (void)onAdvertiseDetailWithSource:(long long)arg1;
- (void)onAdFeedbackBtnClick:(id)arg1;
- (void)onOpenIMTimeLineAction:(id)arg1;
- (void)onRestore:(id)arg1;
- (id)currentViewController;
- (void)hideStarIconButtonAnimatedWithCompletion:(id /* block */)arg1;
- (void)onTimelineErrTipsViewLinkClicked:(id)arg1 errTipsView:(id)arg2;
- (unsigned long long)onSecurityVerificationFinished:(BOOL)arg1 type:(unsigned long long)arg2 dataItem:(id)arg3;
- (void)onAdCardActionButtonClick;
- (void)onAdActionLinkDetailClicked;
- (void)onAdDynamicFeedViewActionClickWithSource:(long long)arg1;
- (void)onAdDynamicFeedViewActionClickWithExtraClickType:(long long)arg1 jumpInfo:(id)arg2;
- (id)fetchAdTagButtonOriginView;
- (id)fetchAdOriginView;
- (void)onAdLikeButtonTouched:(id)arg1;
- (void)onAdLikeButtonClicked:(id)arg1;
- (void)onAdCommentButtonClicked:(id)arg1;
- (void)onAdLikeButtonAnimationStarted:(id)arg1;
- (void)onAdLikeButtonAnimationFinished:(id)arg1;
- (void)onAdFireworkCheerCommentAnimationStarted:(id)arg1;
- (void)onAdCommonBarRockPaperScissorsLeaveCanvasWithDataItem:(id)arg1 showComment:(BOOL)arg2;
- (void)onAdCommonBarWorldCupAvatarLeaveCanvasWithDataItem:(id)arg1;
- (id)onAdCommonBarFetchMediaViewWithDataItem:(id)arg1;
- (id)GetTranslateSnsKeyID;
- (void)onTranslateFeed:(id)arg1;
- (void)onCancelTranslateFeed:(id)arg1;
- (void)onCancelTranslateFeedInTranslatedArea:(id)arg1;
- (void)onTranslateAction:(id)arg1;
- (void)onChangeTranslateLanguage:(id)arg1;
- (double)initContentTranslateView:(id)arg1;
- (void)layoutContentTranslateViewsWithReferenceView:(id)arg1;
- (void)makeTranslateShowAnimation;
- (double)initTranslateStatusButton:(BOOL)arg1 withTitle:(id)arg2;
- (void)onTranslateSnsFailed:(id)arg1 errTip:(id)arg2;
- (void)onTranslateSnsChanged:(id)arg1;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2;
- (void)ImageDidFail:(id)arg1;
- (void)onAdInfoProxyLogicAvatarImageUpdated:(id)arg1 username:(id)arg2 url:(id)arg3;
- (id)getCurrentViewControllerForContentItemView:(id)arg1;
- (id)fetchAdCellViewExtContainerForItemView:(id)arg1 type:(long long)arg2;
- (id)getFinderLiveDismissTarget;
- (void)onUpdateWeAppContactSuccess:(id)arg1;
- (BOOL)isSpringStyle;
- (void)initFireworksPlayerView;
- (void)startPlayRandomFireworksIfNeeded;
- (void)stopPlayRandomFireworksIfNeeded;
- (id)accessibilityLabel;
- (id)getNickNameAccessibilityDesc;
- (id)getContentAccessibilityDesc;
- (id)getMediaAccessibilityDesc;
- (BOOL)accessibilityActivate;
- (id)accessibilityHint;
- (BOOL)accessibilityPerformMagicTap;
- (void)onAccessibilityLike;
- (void)onAccessibilityComment;
- (void)onAccessibilityPlay;
- (void)onOpenMediaView;
- (id)getMediaViewVoiceOverTitle;
- (void)cellViewWillDisplay;
- (void)cellViewDidEndDisplaying;
- (void)cellViewDidEndDecelerating;
- (void)reportMenuAction:(long long)arg1;
- (void)showDebugInfoIfNeeded;
- (id)m_dataItem;
- (BOOL)m_showDetail;
- (id)m_showFullTextView;
- (unsigned int)m_row;
- (void)setM_row:(unsigned int)arg1;
- (unsigned int)m_section;
- (void)setM_section:(unsigned int)arg1;
- (id)m_copyedText;
- (void)setM_copyedText:(id)arg1;
- (id)m_urlLabelDelegate;
- (void)setM_urlLabelDelegate:(id)arg1;
- (id)m_mediaView;
- (id)m_headImage;
- (id)m_nickLabel;
- (id)m_timeLabel;
- (id)m_operateBtn;
- (id)contentDescView;
- (id)translateView;
- (id)timelineCellViewDelegate;
- (id)debugInfoLabel;
- (void)setDebugInfoLabel:(id)arg1;
- (unsigned long long)cellType;
- (void)setCellType:(unsigned long long)arg1;
- (id)pageContext;
- (void)setPageContext:(id)arg1;
- (id)actionAreaVM;
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
- (id)adWeGameGiftTagView;
- (void)setAdWeGameGiftTagView:(id)arg1;
- (id)adContinuousLikeTagView;
- (void)setAdContinuousLikeTagView:(id)arg1;
- (id)adStateSettingBarView;
- (void)setAdStateSettingBarView:(id)arg1;
- (id)adRandomPickCardContainerView;
- (void)setAdRandomPickCardContainerView:(id)arg1;
- (id)adPreviewMaskView;
- (void)setAdPreviewMaskView:(id)arg1;
- (id)adInteractionTagView;
- (void)setAdInteractionTagView:(id)arg1;
- (id)adHighlightTagView;
- (void)setAdHighlightTagView:(id)arg1;
- (id)adMediaBottomBarContainerView;
- (void)setAdMediaBottomBarContainerView:(id)arg1;
- (id)adBarContainerView;
- (void)setAdBarContainerView:(id)arg1;
- (id)animatedFireworksView;
- (void)setAnimatedFireworksView:(id)arg1;
- (id)adHeadStateView;
- (void)setAdHeadStateView:(id)arg1;
- (id)adHeadLivingView;
- (void)setAdHeadLivingView:(id)arg1;
- (id)ecsView;
- (void)setEcsView:(id)arg1;
- (id)feedTailText;
- (void)setFeedTailText:(id)arg1;
- (void).cxx_destruct;
@end
