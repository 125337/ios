@interface WCTimeLineAdCardBaseView : WCContentItemBaseView <WCAdSubscriptionLogicDelegate, WCAdQuicklyAddBrandLogicDelegate, WCAdFinderLiveNoticeLogicExt, WCAdFinderFollowLogicDelegate, WCAdCountdownViewDelegate, WCAdSellingPointLogicDelegate, WCAdAppointmentLogicDelegate, WCImageViewDelegate, WCCanvasPageViewControllerExt, WCAdMultiProductsLogicDelegate, WCAdCardActionButtonLogicDelegate, WCAdCommonInteractionLogicDelegate>
{
    BOOL _isCanvasPageOpenBySelf; // +0x38
    unsigned int _liveStatus; // +0x3c
    id <WCTimeLineAdCardBaseViewDelegate> _delegate; // +0x40
    WCDataItem * _dataItem; // +0x48
    double _mediaAreaHeight; // +0x50
    double _mediaAreaWidth; // +0x58
    MMUIView * _mediaHolder; // +0x60
    long long _mediaType; // +0x68
    MMUIButton * _mediaBgButton; // +0x70
    WCAdCardDescriptionView * _descriptionView; // +0x78
    WCAdMultiProductsLogic * _multiProductsLogic; // +0x80
    WCAdCardActionButtonLogic * _actionButtonLogic; // +0x88
    WCAdSellingPointLogic * _sellingPointLogic; // +0x90
    WCAdAppointmentLogic * _appointmentLogic; // +0x98
    WCSightView * _sightView; // +0xa0
    MMUIView * _actionTipsView; // +0xa8
    WCHighLightButton * _leftButton; // +0xb0
    WCHighLightButton * _rightButton; // +0xb8
    MMUIView * _topMaskView; // +0xc0
    WCTimeLineTagView * _tagView; // +0xc8
    WCAdSubscriptionLogic * _subscriptionLogic; // +0xd0
    WCTagsView * _weAppSpecialTagIcon; // +0xd8
    WCAdQuicklyAddBrandLogic * _addBrandLogic; // +0xe0
    WCAdCouponLogic * _adCouponLogic; // +0xe8
    WCAdFinderLiveNoticeLogic * _adFinderLiveNoticeLogic; // +0xf0
    WCAdFinderFollowLogic * _adFinderFollowLogic; // +0xf8
    MMUIView * _promotionView; // +0x100
    WCAdCountdownView * _countdownView; // +0x108
    WCAdLiveDisplayView * _liveDisplayView; // +0x110
    WCAdLiveLikeAnimationView * _liveLikeAnimationView; // +0x118
    WCAdRollView * _rollView; // +0x120
    WCAdFinderLivePlayerView * _finderLivePlayerView; // +0x128
    WCAdScratchCardView * _scratchCardView; // +0x130
    WCAdScratchCardLogic * _scratchCardLogic; // +0x138
    WCAdFinderLiveLogic * _finderLiveLogic; // +0x140
    WCAdCommonInteractionLogic * _commonInteractionLogic; // +0x148
    UIImageView * _scratchGapLeft; // +0x150
    UIImageView * _scratchGapRight; // +0x158
    double _lastTouchTimestamp; // +0x160
    CGPoint _lastTouchPoint; // +0x168
}
+ (double)heightForMedia:(id)arg1 maxWidth:(double)arg2;
+ (double)heightForMedia:(id)arg1;
+ (double)heightForMediaView:(id)arg1 maxWidth:(double)arg2;
+ (double)heightForOperationArea:(id)arg1 maxWidth:(double)arg2;
+ (BOOL)hasLeftAndRightButton:(id)arg1;
+ (id)fetchTrimDesc:(id)arg1;
+ (id)fetchDescriptionItemsWithDataItem:(id)arg1;
- (id)init;
- (void)initViewsWithWCDataItem:(id)arg1;
- (void)initMediaView:(id)arg1;
- (void)initPromotionView:(id)arg1;
- (void)onCountdownUpdate;
- (void)onCountdownEnd;
- (void)initLiveInfoView:(id)arg1;
- (id)createLiveLikeAnimationView;
- (void)updateLiveStatus:(int)arg1;
- (void)tryStartLiveLikeAnimation;
- (void)stopLiveLikeAnimation;
- (void)checkUpdateLiveInfo;
- (void)initRollView:(id)arg1;
- (void)initBgButton:(id)arg1;
- (void)removeAllButtons;
- (id)createSelectButton:(id)arg1 fontSize:(double)arg2 fontColor:(id)arg3 isLeft:(BOOL)arg4;
- (void)initSelectButton:(id)arg1;
- (void)onLeftButtonClick:(id)arg1 forEvent:(id)arg2;
- (void)onRightButtonClick:(id)arg1 forEvent:(id)arg2;
- (void)onClickBgButton:(id)arg1 forEvent:(id)arg2;
- (void)onVoiceOverClick;
- (id)getVoiceOverStrForTimeline;
- (void)delayClickAdCardTouchButton;
- (void)initContentArea:(id)arg1;
- (double)getMaxWidthForDescriptionView:(id)arg1;
- (void)initImageViewForAdCard:(id)arg1;
- (void)initSightViewForAdCard:(id)arg1;
- (id)createSightView:(id)arg1;
- (id)finderLiveLogic;
- (id)createFinderLivePlayer:(id)arg1;
- (void)initFinderLivePlayer:(id)arg1;
- (id)getMainContentView;
- (void)autoPlayWithoutSound;
- (void)autoPauseWithoutSound;
- (void)contentItemWillDisplay;
- (void)contentItemDidEndDisplaying;
- (void)contentItemWillDisappear;
- (void)contentItemBecomeInvisible;
- (void)contentItemDidEndDecelerating;
- (void)calcMediaArea:(id)arg1;
- (void)initDescriptionViewWithItem:(id)arg1 maxWidth:(double)arg2;
- (void)initActionButton:(id)arg1;
- (void)initActionButtonLogic:(id)arg1;
- (void)updateSubViewsLayout:(id)arg1;
- (double)fetchDescriptionAreaBottom;
- (void)updateActionButtonTitle:(id)arg1;
- (void)onActionBtnClick;
- (id)genAdTagList:(id)arg1;
- (void)initRatingCardView:(id)arg1;
- (void)initActionTipsView:(id)arg1;
- (id)sellingPointLogic;
- (void)tryToResetSellingPoint;
- (void)doAppointment;
- (id)appointmentLogic;
- (id)fetchMediaHolder;
- (void)onSelectBtnClick:(id)arg1 isLeft:(BOOL)arg2 originView:(id)arg3;
- (void)onSubscriptionFinishedWithResult:(id)arg1 success:(BOOL)arg2 cancel:(BOOL)arg3 errorCode:(long long)arg4;
- (void)onSubscriptionClosePageSheetWithoutSubmit;
- (void)doSubscriptionMessageReport:(long long)arg1 clickSubmit:(BOOL)arg2;
- (void)setActionButtonWithEnabledStyle:(long long)arg1 title:(id)arg2;
- (void)updateSubscriptionBtnState;
- (void)updateQuicklyAddBrandBtnState;
- (void)doAddBrandOrEnterBrandProfileVC:(BOOL)arg1;
- (void)doSubscribe;
- (void)doGetCoupon;
- (void)doFinderLiveNoticeReserve;
- (void)updateFinderLiveNoticeReserveBtnStateWithLocal;
- (void)updateFinderLiveNoticeReserveInfo;
- (void)updateAdRelievedBuyVisibility:(id)arg1;
- (void)onQuicklyAddBrandResult:(long long)arg1 andBrandInfo:(id)arg2;
- (void)onSellingPointLogicSwitchToIndex:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)onAppointmentConfirmViewDidConfirm;
- (void)onAppointmentUpdatingStatus:(int)arg1;
- (void)onAppointmentSubmitForType:(int)arg1 isSuccess:(BOOL)arg2;
- (void)onDownloadFinish:(id)arg1;
- (void)onDownloadFailed:(id)arg1;
- (void)onDownloadCancel:(id)arg1;
- (BOOL)checkActionButtonType:(long long)arg1;
- (id)subscriptionLogic;
- (id)addBrandLogic;
- (id)adCouponLogic;
- (id)adFinderLiveNoticeLogic;
- (void)onFinderLiveNoticeReserved:(id)arg1 snsId:(id)arg2;
- (id)adFinderFollowLogic;
- (void)onFinderFollowingStateChanged:(BOOL)arg1 byUser:(BOOL)arg2;
- (void)doFinderFollow;
- (void)initMultiProductsViewWithItem:(id)arg1 maxWidth:(double)arg2;
- (id)multiProductsLogic;
- (id)multiProductsView;
- (void)onAdMultiProductsLogicUpdateButtonWithScale:(double)arg1 duration:(double)arg2 delay:(double)arg3;
- (void)updateActionButtonWithTransform:(CATransform3D)arg1 duration:(double)arg2;
- (id)actionButtonLogic;
- (void)onAdCardActionButtonClicked;
- (id)actionButton;
- (id)commonInteractionLogic;
- (id)interactionView;
- (void)initInteractionViewWithDataItem:(id)arg1;
- (void)initScratchCardView:(id)arg1;
- (void)initScratchGap:(id)arg1;
- (id)scratchCardLogic;
- (id)onAdCommonInteractionLogicFetchDataItem;
- (unsigned long long)onAdCommonInteractionLogicFetchScene;
- (void)onAdCommonInteractionLogicShakeActionFired;
- (void)updateAdExpParamsReportInfo;
- (void)updateAdExpParamsReportInfoWithLastTouch:(CGPoint)arg1;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)onCanvasViewWillClose;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (double)mediaAreaHeight;
- (void)setMediaAreaHeight:(double)arg1;
- (double)mediaAreaWidth;
- (void)setMediaAreaWidth:(double)arg1;
- (id)mediaHolder;
- (void)setMediaHolder:(id)arg1;
- (long long)mediaType;
- (void)setMediaType:(long long)arg1;
- (id)mediaBgButton;
- (void)setMediaBgButton:(id)arg1;
- (id)descriptionView;
- (void)setDescriptionView:(id)arg1;
- (void)setMultiProductsLogic:(id)arg1;
- (void)setActionButtonLogic:(id)arg1;
- (void)setSellingPointLogic:(id)arg1;
- (void)setAppointmentLogic:(id)arg1;
- (id)sightView;
- (void)setSightView:(id)arg1;
- (id)actionTipsView;
- (void)setActionTipsView:(id)arg1;
- (id)leftButton;
- (void)setLeftButton:(id)arg1;
- (id)rightButton;
- (void)setRightButton:(id)arg1;
- (id)topMaskView;
- (void)setTopMaskView:(id)arg1;
- (id)tagView;
- (void)setTagView:(id)arg1;
- (void)setSubscriptionLogic:(id)arg1;
- (id)weAppSpecialTagIcon;
- (void)setWeAppSpecialTagIcon:(id)arg1;
- (void)setAddBrandLogic:(id)arg1;
- (void)setAdCouponLogic:(id)arg1;
- (void)setAdFinderLiveNoticeLogic:(id)arg1;
- (void)setAdFinderFollowLogic:(id)arg1;
- (id)promotionView;
- (void)setPromotionView:(id)arg1;
- (id)countdownView;
- (void)setCountdownView:(id)arg1;
- (id)liveDisplayView;
- (void)setLiveDisplayView:(id)arg1;
- (unsigned int)liveStatus;
- (void)setLiveStatus:(unsigned int)arg1;
- (id)liveLikeAnimationView;
- (void)setLiveLikeAnimationView:(id)arg1;
- (id)rollView;
- (void)setRollView:(id)arg1;
- (id)finderLivePlayerView;
- (void)setFinderLivePlayerView:(id)arg1;
- (id)scratchCardView;
- (void)setScratchCardView:(id)arg1;
- (void)setScratchCardLogic:(id)arg1;
- (void)setFinderLiveLogic:(id)arg1;
- (void)setCommonInteractionLogic:(id)arg1;
- (id)scratchGapLeft;
- (void)setScratchGapLeft:(id)arg1;
- (id)scratchGapRight;
- (void)setScratchGapRight:(id)arg1;
- (CGPoint)lastTouchPoint;
- (void)setLastTouchPoint:(CGPoint)arg1;
- (double)lastTouchTimestamp;
- (void)setLastTouchTimestamp:(double)arg1;
- (BOOL)isCanvasPageOpenBySelf;
- (void)setIsCanvasPageOpenBySelf:(BOOL)arg1;
- (void).cxx_destruct;
@end
