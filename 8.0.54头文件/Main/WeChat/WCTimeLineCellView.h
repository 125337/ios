@interface WCTimeLineCellView : MMUIView <WCCanvasImageLoaderObserver, WCAdTagButtonDelegate, WCAdActionLinkDetailViewDelegate, WCAdSocialLikeViewDelegate, WCTimelineErrTipsViewDelegate, WCFinderShareLiveViewDelegate, WAContactMgrExtension, WCMomentsContactMgrExt, WCAdWeGameGiftTagViewDelegate, WCAdContinuousLikeTagViewDelegate, WCAdStateSettingBarViewDelegate, WCAdCommonBarContainerViewDelegate, WCImageViewDelegate, IContactMgrExt, IStrangerContactMgrExt, WCActionSheetDelegate, RichTextLayoutDelegate, ILinkEventExt, ITranslateSnsMgrExt, WCTimeLineAdCardBaseViewDelegate, WCTimeLineAdDynamicFeedViewDelegate, WCContentItemBaseViewDelegate>
{
    WCDataItem * m_dataItem; // +0x8
    unsigned int m_row; // +0x10
    unsigned int m_section; // +0x14
    MMHeadImageView * m_headImage; // +0x18
    UrlLabel * m_nickLabel; // +0x20
    UIButton * m_contentDescBtn; // +0x28
    WCMomentsSpringTextContainerView * _springTextContainerView; // +0x30
    RichTextView * m_contentDescView; // +0x38
    RichTextView * m_togetherTextView; // +0x40
    UILabel * m_timeLabel; // +0x48
    UrlLabel * m_sourceLabel; // +0x50
    WCMomentsWeAppLogoNameView * m_weAppView; // +0x58
    MMUIButton * m_privacyButton; // +0x60
    MMUIButton * m_starIconButton; // +0x68
    MMUIButton * m_deleteButton; // +0x70
    MMUIButton * m_operateBtn; // +0x78
    WCTimelineErrTipsView * m_errTipsView; // +0x80
    InteractionLabel * m_actionLabel; // +0x88
    InteractionLabel * m_musicLabel; // +0x90
    UILabel * m_locationLabel; // +0x98
    UIView * m_mediaView; // +0xa0
    UIButton * m_advertiseLogo; // +0xa8
    WCAdTagButton * m_adTagButton; // +0xb0
    BOOL m_showDetail; // +0xb8
    InteractionLabel * m_showFullTextView; // +0xc0
    RichTextView * m_translateView; // +0xc8
    UIButton * m_translateStatusView; // +0xd0
    UIView * m_translateLineView; // +0xd8
    int eTranslateStatus; // +0xe0
    NSString * m_copyedText; // +0xe8
    id <ILinkEventExt> m_urlLabelDelegate; // +0xf0
    UILabel * m_adPOILabel; // +0xf8
    UILabel * _adChainStrengthenLabel; // +0x100
    UILabel * _adAtAdvertiserLabel; // +0x108
    NSString * m_cpKeyForNickname; // +0x110
    BOOL m_isNicknameUnsafe; // +0x118
    RichTextView * m_crashWarningLabel; // +0x120
    TextStateItemView * m_textStateView; // +0x128
    id <WCTimeLineCellViewDelegate> _timelineCellViewDelegate; // +0x130
    UILabel * _debugInfoLabel; // +0x138
    unsigned long long _cellType; // +0x140
    WCMomentsPageContext * _pageContext; // +0x148
    WCActionAreaVM * _actionAreaVM; // +0x150
    WCAdActionLinkDetailView * _adDetailView; // +0x158
    WCAdBreakFrameView * _adBreakFrameView; // +0x160
    WCAdBreakFrameTagView * _adBreakFrameTagView; // +0x168
    WCAdInteractionLabelView * _adInteractionLabelView; // +0x170
    WCAdSocialLikeView * _adSocialLikeView; // +0x178
    WCAdSocialLikeCheerPlayerView * _adSocialLikeCheerPlayerView; // +0x180
    WCAdWeGameGiftTagView * _adWeGameGiftTagView; // +0x188
    WCAdContinuousLikeTagView * _adContinuousLikeTagView; // +0x190
    WCAdStateSettingBarView * _adStateSettingBarView; // +0x198
    WCAdRandomPickCardContainerView * _adRandomPickCardContainerView; // +0x1a0
    WCAdPreviewMaskView * _adPreviewMaskView; // +0x1a8
    WCAdInteractionTagView * _adInteractionTagView; // +0x1b0
    WCAdHighlightTagView * _adHighlightTagView; // +0x1b8
    WCAdCommonBarContainerView * _adBarContainerView; // +0x1c0
    WCMomentsAnimatedFireworksView * _animatedFireworksView; // +0x1c8
    WCAdHeadStateView * _adHeadStateView; // +0x1d0
}
+ (double)heightForMedia:(id)arg1 pageContext:(id)arg2;
+ (double)heightForContentMedia:(id)arg1 pageContext:(id)arg2;
+ (double)heightForMedia:(id)arg1 fixMediaSize:(CGSize)arg2;
+ (double)heightForWSGroupItem:(id)arg1;
+ (id)mediaViewForWSGroupItem:(id)arg1;
+ (double)getHeadImageLeftMarginCurOri;
+ (double)getOperationBtnMarginRightCurOri;
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
+ (BOOL)shouldShowFullTextButtonWithDataItem:(id)arg1;
+ (BOOL)canShowDetailWithDataItem:(id)arg1;
+ (double)fullTextViewHeight;
+ (double)fullTextViewTopPadding;
+ (unsigned long long)numberOfContentLines:(id)arg1 showDetail:(BOOL)arg2;
+ (double)contentHeight:(id)arg1 showDetail:(BOOL)arg2;
+ (void)calculateDataItem:(id)arg1 showDetail:(BOOL)arg2 contentHeight:(double *)arg3 numberOfLines:(unsigned long long *)arg4;
+ (double)heightForDataItem:(id)arg1 pageContext:(id)arg2 actionAreaVM:(id)arg3;
+ (id)accessibilityDescForWSDataItem:(id)arg1;
+ (id)accessibilityTrimedDescForDataItem:(id)arg1;
+ (id)trimedDisplayDescForDataItem:(id)arg1;
+ (id)descPatternForDataItem:(id)arg1;
+ (id)defaultContentTextView;
+ (unsigned long long)actionAreaRowCount:(id)arg1 actionAreaVM:(id)arg2;
+ (double)maxActionAreaWidthForDataItem:(id)arg1;
+ (BOOL)canShowOperateButtonForDataItem:(id)arg1;
+ (CGSize)operateButtonSize;
+ (id)makeDataWrapForWCTranslate:(id)arg1;
+ (long long)fetchAdSocialLikeDisplayTypeWithDataItem:(id)arg1;
- (id)defaultCellView:(id)arg1;
- (id)addViewForMedia:(id)arg1 toView:(id)arg2 inPoint:(CGPoint)arg3 urlLabelDelegate:(id)arg4;
- (id)getContactDisplayName;
- (void)onStatusChange;
- (void)onStarIconButtonClicked:(id)arg1;
- (void)onShowGroup;
- (void)onShowFullText;
- (void)initHeadImage;
- (void)onNoContactHeadImageClick;
- (void)initNickLabel;
- (void)initTextStateView;
- (void)initTigerContentViewWithContentDesc:(id)arg1;
- (void)initContentDescButton:(id)arg1;
- (void)initContentDescView:(id)arg1;
- (void)initShowFullTextView;
- (void)initActionLabel;
- (void)initMusicLabel;
- (void)initLocationLabel;
- (void)initAdPOILabel;
- (void)initWithLabel:(id)arg1;
- (void)initTimeLabel;
- (void)initAdChainStrengthenLabel;
- (void)initAdAtAdvertiserLabel;
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
- (void)initErrTipsView;
- (void)initCrashWarningLabel;
- (void)updateCrashProtectedState:(id)arg1 newDataItem:(id)arg2;
- (void)updateWithDataItem:(id)arg1 actionAreaVM:(id)arg2;
- (void)initView;
- (void)adjustTimeLabelLine;
- (void)reportPossibleTextStateIconClickWithScene:(unsigned long long)arg1;
- (void)setupSourceView:(id)arg1 rightMostRect:(CGRect *)arg2 adjustTimeLabelWidth:(BOOL *)arg3;
- (id)getAdvertiseLogoTitle;
- (BOOL)canAutoPlayVideoWithoutSound;
- (void)autoPauseVideoWithoutSound;
- (id)getMainContentView;
- (void)autoPlayVideoWithoutSound;
- (id)generateOpenIMDescLabelWithDesc:(id)arg1 maxWidth:(double)arg2;
- (id)createAdStateSettingBarView;
- (void)layoutActionArea;
- (void)fitTimeLableLineElements;
- (double)actionAreaWidthWithElementTypes:(id)arg1;
- (id)actionAreaSubViewWithType:(unsigned long long)arg1;
- (void)onMenuControllerWillHide:(id)arg1;
- (void)willDisplay;
- (void)didEndDisplaying;
- (id)initWithUrlLabelDelegate:(id)arg1;
- (void)layoutSubviews;
- (id)fireworksDisplayRectList;
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
- (void)onActionAtAd:(id)arg1;
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
- (id)fetchAdWeGameGiftTagOriginView;
- (id)fetchAdContinuousLikeTagOriginView;
- (id)fetchAdStateSettingBarOriginView;
- (id)fetchAdCommonBarContainerOriginView;
- (id)fetchAdOriginView;
- (void)onAdLikeButtonTouched:(id)arg1;
- (void)onAdLikeButtonClicked:(id)arg1;
- (void)onAdCommentButtonClicked:(id)arg1;
- (void)onAdLikeButtonAnimationStarted:(id)arg1;
- (void)onAdLikeButtonAnimationFinished:(id)arg1;
- (void)onAdFireworkCheerCommentAnimationStarted:(id)arg1;
- (id)GetTranslateSnsKeyID;
- (void)onTranslateFeed:(id)arg1;
- (void)onCancelTranslateFeed:(id)arg1;
- (void)onCancelTranslateFeedInTranslatedArea:(id)arg1;
- (void)onTranslateAction:(id)arg1;
- (void)onChangeTranslateLanguage:(id)arg1;
- (double)initContentTranslateView:(id)arg1;
- (void)makeTranslateShowAnimation;
- (double)initTranslateStatusButton:(BOOL)arg1 withTitle:(id)arg2;
- (void)onTranslateSnsFailed:(id)arg1 errTip:(id)arg2;
- (void)onTranslateSnsChanged:(id)arg1;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2;
- (void)ImageDidFail:(id)arg1;
- (id)getCurrentViewControllerForContentItemView:(id)arg1;
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
- (id)adBarContainerView;
- (void)setAdBarContainerView:(id)arg1;
- (id)animatedFireworksView;
- (void)setAnimatedFireworksView:(id)arg1;
- (id)adHeadStateView;
- (void)setAdHeadStateView:(id)arg1;
- (void).cxx_destruct;
@end

