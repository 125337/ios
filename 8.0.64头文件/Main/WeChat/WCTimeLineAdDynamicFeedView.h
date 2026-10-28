@interface WCTimeLineAdDynamicFeedView : WCContentItemBaseView <UIGestureRecognizerDelegate, WCAdAppointmentLogicDelegate, WCAdSubscriptionLogicDelegate, WCAdQuicklyAddBrandLogicDelegate, WCAdFinderLiveNoticeLogicExt, WCAdFinderFollowLogicDelegate, WCAdCountdownViewDelegate, WCAdDynamicLayoutLogicDelegate, WCSightViewDelegate>
{
    unsigned int _liveStatus; // +0x38
    id <WCTimeLineAdDynamicFeedViewDelegate> _delegate; // +0x40
    WCAdDynamicFeedContainerView * _containerView; // +0x48
    WCAdDynamicFeedMediaHolderView * _mediaHolder; // +0x50
    WCAdDynamicFeedSightView * _mainSightView; // +0x58
    WCImageView * _mainImageView; // +0x60
    UIView * _rootContainerView; // +0x68
    WCAdDynamicLayoutLogic * _layoutLogic; // +0x70
    WCAdAppointmentLogic * _appointmentLogic; // +0x78
    WCAdSubscriptionLogic * _subscriptionLogic; // +0x80
    WCAdQuicklyAddBrandLogic * _addBrandLogic; // +0x88
    WCAdCouponLogic * _adCouponLogic; // +0x90
    WCAdFinderLiveNoticeLogic * _adFinderLiveNoticeLogic; // +0x98
    WCAdFinderFollowLogic * _adFinderFollowLogic; // +0xa0
    MMUIView * _promotionContainerView; // +0xa8
    MMUILabel * _promotionLeftView; // +0xb0
    MMUIView * _promotionView; // +0xb8
    WCAdCountdownView * _countdownView; // +0xc0
    MMUIView * _liveStatusContainerView; // +0xc8
    WCAdLiveDisplayView * _liveDisplayView; // +0xd0
    MMUIView * _liveLikeAnimationContainerView; // +0xd8
    WCAdLiveLikeAnimationView * _liveLikeAnimationView; // +0xe0
    MMUIView * _rollContainerView; // +0xe8
    WCAdRollView * _rollView; // +0xf0
    WCAdFinderLivePlayerView * _finderLivePlayerView; // +0xf8
    WCAdFinderLiveLogic * _finderLiveLogic; // +0x100
    MMUIView * _adBulletScreenContainerView; // +0x108
    WCAdBulletScreenView * _adBulletScreenView; // +0x110
    WCAdBulletScreenLogic * _adBulletScreenLogic; // +0x118
}
+ (double)heightForMedia:(id)arg1;
+ (id)findRootContainerViewForMediaHolder:(id)arg1;
+ (id)fetchAnimationViewForView:(id)arg1 isFromTimeline:(BOOL)arg2 dataItem:(id)arg3;
- (void)initViewsWithWCDataItem:(id)arg1;
- (id)fetchMediaHolder;
- (void)layoutSubviews;
- (id)mainElemetView;
- (void)initContentViewWithItem:(id)arg1;
- (void)initMainImageViewWithMedia:(id)arg1;
- (void)initMainSightViewWithMedia:(id)arg1 dataItem:(id)arg2;
- (id)createSightView:(id)arg1;
- (void)initFinderLivePlayerWithItem:(id)arg1;
- (id)createFinderLivePlayer:(id)arg1;
- (void)onPlayEnd:(BOOL)arg1;
- (void)onPlayExited;
- (id)getMainContentView;
- (void)autoPlayWithoutSound;
- (void)autoPauseWithoutSound;
- (double)fetchVideoCurrentPlaybackTime;
- (void)contentItemWillDisplay;
- (void)contentItemDidEndDisplaying;
- (void)contentItemBecomeInvisible;
- (id)layoutLogic;
- (id)containerView;
- (id)mediaHolder;
- (void)generateDynamicContentViews;
- (void)updateContentsState;
- (id)rootContainerView;
- (void)onVoiceOverClick;
- (id)getVoiceOverStrForTimeline;
- (void)onRootContainerClicked;
- (void)onMainElementClicked;
- (void)onGridElementClickedWithIndex:(unsigned long long)arg1 originView:(id)arg2;
- (void)onCombinedGridClickedIsMainItem:(BOOL)arg1 index:(long long)arg2 clickedView:(id)arg3;
- (id)fetchGridElementViewAtIndex:(unsigned long long)arg1;
- (void)onGameGiftTagClicked;
- (void)onConsultBarTitleClickedAtIndex:(unsigned long long)arg1;
- (void)onConsultBarButtonClickedAtIndex:(unsigned long long)arg1;
- (void)onDynamicLayoutClickEvent:(id)arg1 viewTag:(long long)arg2 index:(unsigned long long)arg3 originView:(id)arg4;
- (void)onDynamicLayoutClickWithExtraClickType:(long long)arg1 jumpInfo:(id)arg2;
- (id)fetchActionButton;
- (void)updateActionButtonStateWithTitle:(id)arg1;
- (void)updateActionButtonStateWithTitle:(id)arg1 isEnabled:(BOOL)arg2;
- (void)onActionBtnClick;
- (BOOL)checkActionButtonType:(long long)arg1;
- (void)updateAdRelievedBuyVisibility:(id)arg1;
- (long long)fetchAdExposureScene;
- (void)onSelectButtonClickedIsLeft:(BOOL)arg1;
- (void)onActionLinkClick;
- (void)doAppointment;
- (id)appointmentLogic;
- (void)onAppointmentConfirmViewDidConfirm;
- (void)onAppointmentUpdatingStatus:(int)arg1;
- (void)onAppointmentSubmitForType:(int)arg1 isSuccess:(BOOL)arg2;
- (void)doSubscribe;
- (id)subscriptionLogic;
- (void)onSubscriptionFinishedWithResult:(id)arg1 success:(BOOL)arg2 cancel:(BOOL)arg3 errorCode:(long long)arg4;
- (void)onSubscriptionClosePageSheetWithoutSubmit;
- (void)doSubscriptionMessageReport:(long long)arg1 clickSubmit:(BOOL)arg2;
- (void)updateSubscriptionBtnState;
- (void)doAddBrandOrEnterBrandProfileVC:(BOOL)arg1;
- (id)addBrandLogic;
- (void)onQuicklyAddBrandResult:(long long)arg1 andBrandInfo:(id)arg2;
- (void)updateQuicklyAddBrandBtnState;
- (void)doGetCoupon;
- (id)adCouponLogic;
- (void)doFinderLiveNoticeReserve;
- (id)adFinderLiveNoticeLogic;
- (void)onFinderLiveNoticeReserved:(id)arg1 snsId:(id)arg2;
- (void)updateFinderLiveNoticeReserveBtnStateWithLocal;
- (void)updateFinderLiveNoticeReserveInfo;
- (void)doFinderFollow;
- (id)adFinderFollowLogic;
- (void)onFinderFollowingStateChanged:(BOOL)arg1 byUser:(BOOL)arg2;
- (id)finderLiveLogic;
- (id)fetchSpecialContainerViewWithTag:(long long)arg1;
- (id)liveStatusContainerView;
- (id)liveLikeAnimationContainerView;
- (id)promotionContainerView;
- (id)rollContainerView;
- (void)appendSpecialSubviews;
- (void)layoutSpecialSubviews;
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
- (id)adBulletScreenContainerView;
- (void)initBulletScreenView:(id)arg1;
- (id)adBulletScreenLogic;
- (void)updateAdExpParamsReportInfo;
- (void)updateAdExpParamsReportInfoWithLastTouch:(CGPoint)arg1;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setContainerView:(id)arg1;
- (void)setMediaHolder:(id)arg1;
- (id)mainSightView;
- (void)setMainSightView:(id)arg1;
- (id)mainImageView;
- (void)setMainImageView:(id)arg1;
- (void)setRootContainerView:(id)arg1;
- (void)setLayoutLogic:(id)arg1;
- (void)setAppointmentLogic:(id)arg1;
- (void)setSubscriptionLogic:(id)arg1;
- (void)setAddBrandLogic:(id)arg1;
- (void)setAdCouponLogic:(id)arg1;
- (void)setAdFinderLiveNoticeLogic:(id)arg1;
- (void)setAdFinderFollowLogic:(id)arg1;
- (void)setPromotionContainerView:(id)arg1;
- (id)promotionLeftView;
- (void)setPromotionLeftView:(id)arg1;
- (id)promotionView;
- (void)setPromotionView:(id)arg1;
- (id)countdownView;
- (void)setCountdownView:(id)arg1;
- (void)setLiveStatusContainerView:(id)arg1;
- (id)liveDisplayView;
- (void)setLiveDisplayView:(id)arg1;
- (unsigned int)liveStatus;
- (void)setLiveStatus:(unsigned int)arg1;
- (void)setLiveLikeAnimationContainerView:(id)arg1;
- (id)liveLikeAnimationView;
- (void)setLiveLikeAnimationView:(id)arg1;
- (void)setRollContainerView:(id)arg1;
- (id)rollView;
- (void)setRollView:(id)arg1;
- (id)finderLivePlayerView;
- (void)setFinderLivePlayerView:(id)arg1;
- (void)setFinderLiveLogic:(id)arg1;
- (void)setAdBulletScreenContainerView:(id)arg1;
- (id)adBulletScreenView;
- (void)setAdBulletScreenView:(id)arg1;
- (void)setAdBulletScreenLogic:(id)arg1;
- (void).cxx_destruct;
@end
