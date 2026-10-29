@interface MMFinderLiveOrdinaryReplayOperationView : MMFinderLiveReplayOperationView <MMFinderLiveTaskExt, MMLiveCommentViewDelegate, MMFinderLivePaymentPolicyIntroViewDelegate, MMFinderLiveReplayMessageSourceDelegate, MMFinderLivePaymentRetryViewBarDelegate, MMFinderLiveReplayBarrageViewDelegate, WCFinderLiveReplayMomentsViewDelegate>
{
    BOOL _supressMessageUpdate; // +0x8
    BOOL _isClickFirst; // +0x9
    BOOL _isLongPressing; // +0xa
    BOOL _isPlayerControlWidgetsEnableDisplay; // +0xb
    BOOL _paymentOrientationObserverRegistered; // +0xc
    unsigned int _pendingPaymentPrice; // +0x10
    id <MMFinderLiveOrdinaryReplayOperationViewDelegate> _ordinaryReplayOperationDelegate; // +0x18
    unsigned long long _lastPurchaseInitiateTime; // +0x20
    MMFinderLiveHeaderView * _liveHeaderView; // +0x28
    MMUILabel * _onlineStateLabel; // +0x30
    MMFinderLiveConnectMicFocusedVideoHeaderView * _focusedVideoAudienceHeaderView; // +0x38
    MMFinderLiveReplayCommentView * _commentView; // +0x40
    MMUIButton * _replayMomentsButton; // +0x48
    WCFinderLiveReplayMomentsView * _replayMomentsView; // +0x50
    WCFinderLiveReplayMomentsLogic * _replayMomentsLogic; // +0x58
    MMUIButton * _replayRateButton; // +0x60
    WCFinderLiveReplayRateOperationView * _replayRateOperationView; // +0x68
    double _currentRate; // +0x70
    WCFinderLiveRateAutoIncreaseTipView * _rateAutoIncreaseTipView; // +0x78
    MMFinderLivePaymentRetryViewBar * _tryViewLiveBar; // +0x80
    UIView * _trialTimeOutMaskView; // +0x88
    UIImageView * _trialTimeoutCoverView; // +0x90
    UIView * _trialTimeoutCoverMaskView; // +0x98
    UILabel * _trialTimeoutPromptLabel; // +0xa0
    MMUIButton * _orientationButton; // +0xa8
    MMFinderLiveReplayMessageSource * _messageSource; // +0xb0
    unsigned long long _lastMessageUpdateTime; // +0xb8
    MMLiveRewardGiftRecievingAnimationView * _giftRecievingAnimationView; // +0xc0
    MMFinderLiveRewardRecievingLogic * _rewardRecievingLogic; // +0xc8
    WCFinderLiveNowView * _waterMarkView; // +0xd0
    MMLiveAudioOnlyIndicatorView * _audioOnlyIndicatorView; // +0xd8
    UILabel * _audioOnlyIndicatorLabel; // +0xe0
    MMFinderLiveReplayBarrageView * _barrageView; // +0xe8
    UIView * _stopgapIndicatorView; // +0xf0
    MMLiveLoadingEllipsisLabel * _stopgapIndicatorLabel; // +0xf8
    MMUIActivityIndicatorView * _loadingRing; // +0x100
    MMPageSheetBaseView * _paymentPolicyIntroSheet; // +0x108
    MMPageSheetBaseView * _paymentConfirmPanel; // +0x110
    id /* block */ _pendingPaymentBlock; // +0x118
}
- (void)registerExtensions;
- (void)unRegisterExtensions;
- (void)dealloc;
- (void)onEnterLive;
- (void)onGetLiveInfo;
- (void)onReplayLiveInfoUpdate;
- (void)updateReplayMomentsGreatTimeList:(id)arg1;
- (void)onGetDetailDataItem;
- (void)layoutUI;
- (void)createReplayControlView;
- (void)showContents;
- (void)hideContents;
- (BOOL)shouldAllowProgressManipulationByPanning;
- (UIEdgeInsets)realSafeAreaInsets;
- (void)configureOperationViewWithConnectMicState:(id)arg1 connectMicStateValid:(BOOL)arg2 anchorInAudioMode:(BOOL)arg3 isScreenSharing:(BOOL)arg4;
- (BOOL)isFullScreenGestureShouldReceiveTouch:(id)arg1;
- (BOOL)isFullScreenPanGestureShouldReceiveTouch:(id)arg1;
- (BOOL)shouldHideTopMaskWhenCLeanScreen;
- (void)onFullScreenLongPressEnd;
- (void)autoIncreaseRate;
- (void)onFullScreenGestureCancelEvents;
- (BOOL)handleForFullScreenSingleTap;
- (void)layoutHeaderView;
- (void)layoutOnlineStateLabel;
- (void)layoutFocusedVideoAudienceHeader;
- (double)maxWidthWithSuperviewWidth;
- (void)layoutTryViewLiveBar;
- (BOOL)isReplayTrialEndedUIState;
- (void)layoutTrialTimeoutPromptLabel;
- (void)layoutCommentView;
- (void)createReplayMomentsView;
- (void)layoutReplayMomentsView;
- (void)layoutReplayRateButton;
- (void)layoutReplayMomentsButton;
- (void)layoutOrientationButton;
- (void)layoutRewardGiftRecievingAnimationView;
- (void)layoutWaterMark;
- (void)layoutAudioOnlyIndicator;
- (void)layoutStopgapIndicatorView;
- (void)resetRewardGiftRecievingAnimationView;
- (void)updateOrientationButton;
- (void)updateOrientationButtonForCurrentOrientation;
- (void)onOrientationButtonClicked;
- (void)onReplayMomentsButtonClicked;
- (void)onReplayRateButtonClicked;
- (void)layoutBarrageView;
- (void)updateCommentViewHidden;
- (void)updateReplayMomentsBtnHidden;
- (void)updateReplayMomentsBtnAlpha:(double)arg1;
- (void)updateReplayRateBtnHidden:(BOOL)arg1;
- (void)updateReplayRateBtnAlpha:(double)arg1;
- (void)onReplayMomentsViewOpened:(BOOL)arg1;
- (void)onReplayMomentsViewClosed:(BOOL)arg1;
- (void)onReplayMomentsViewCellClicked:(id)arg1;
- (void)barrageViewDidShowOperationMenu:(id)arg1;
- (void)barrageViewDidHideOperationMenu:(id)arg1;
- (void)barrageView:(id)arg1 reportCommentItem:(id)arg2;
- (void)updateUIForReplayPaymentType;
- (void)startDisplayTryViewLiveBar;
- (unsigned int)getCurrentRemainTime;
- (void)updateTrialTimeoutStatus;
- (void)createTrialTimeOutMaskView;
- (void)displayTryViewLiveBarAnimated;
- (void)showLoading:(BOOL)arg1;
- (void)configureStopgapState:(unsigned long long)arg1;
- (void)showStopgapIndicator:(BOOL)arg1;
- (void)replayPayment_startPaymentFlowWithPrice:(unsigned int)arg1 payBlock:(id /* block */)arg2;
- (void)replayPayment_proceedAfterConfirmWithPayBlock:(id /* block */)arg1;
- (void)replayPayment_showConfirmPanel;
- (void)replayPayment_dismissPaymentPanels;
- (void)replayPayment_registerOrientationObserverIfNeeded;
- (void)replayPayment_onUIOrientationChanged:(id)arg1;
- (void)onMMFinderLivePaymentPolicyIntroViewCancelButtonClicked;
- (void)onMMFinderLivePaymentPolicyIntroViewConfirmButtonClicked:(id)arg1;
- (void)onCommentViewDidTaped:(CGPoint)arg1;
- (double)getVisibleHeight;
- (double)getTopWidgetsBottom;
- (double)allWidgetBottom;
- (double)getBottomWidgetsBottom;
- (BOOL)getIsShoppingAvailable;
- (double)getCommentTableTop;
- (BOOL)isDisplayOperationWidgetsForAudience;
- (void)onFinderLiveTaskPaymentTypeChanged:(id)arg1;
- (void)onVideoPlay;
- (void)onVideoPause;
- (void)onCurrentTimeUpdate:(unsigned int)arg1;
- (void)onSliderSeekBegin;
- (void)onSliderSeekToTime:(float)arg1 isAtGreateTime:(BOOL)arg2;
- (void)onVideoSizeChange:(CGSize)arg1;
- (void)onGetSeiMessage:(id)arg1;
- (void)onLoopPlayToEnd;
- (double)toolViewBottom;
- (void)onVideoFrameBufferRefresh:(id)arg1;
- (double)viewAboveProgressBarBottom;
- (CGRect)getHLSPlayerViewFrame;
- (double)getProgrressBarLeft;
- (double)getProgrressBarRight;
- (void)checkProgressBarRightChanged:(double)arg1;
- (double)getOperateButtonCenterY;
- (void)checkOperateButtonCenterYChanged:(double)arg1;
- (void)onPlayerControlWidgetsDisplay;
- (void)onPreviewContainerDisplayChange:(BOOL)arg1;
- (void)onReplayInvalidated;
- (void)onPurchaseInitiating;
- (void)onPurchaseButtonFirstClick;
- (void)updateLiveMessageAtTime:(unsigned int)arg1;
- (void)handleAnchorInfoSeiMessage:(id)arg1;
- (void)createReplayRateOperationView;
- (void)showRateAutoIncreaseTipView;
- (void)hideRateAutoIncreaseTipView;
- (void)createRateAutoIncreaseTipView;
- (void)updateRateAutoIncreaseTipViewOrigin;
- (BOOL)isLandscape;
- (id)replayMomentsLogic;
- (void)reportForReplayMomentsBtnExposeIfNeeded;
- (void)reportForReplayRateBtnExposeIfNeeded;
- (id)ordinaryReplayOperationDelegate;
- (void)setOrdinaryReplayOperationDelegate:(id)arg1;
- (unsigned long long)lastPurchaseInitiateTime;
- (void)setLastPurchaseInitiateTime:(unsigned long long)arg1;
- (id)liveHeaderView;
- (void)setLiveHeaderView:(id)arg1;
- (id)onlineStateLabel;
- (void)setOnlineStateLabel:(id)arg1;
- (id)focusedVideoAudienceHeaderView;
- (void)setFocusedVideoAudienceHeaderView:(id)arg1;
- (id)commentView;
- (void)setCommentView:(id)arg1;
- (id)replayMomentsButton;
- (void)setReplayMomentsButton:(id)arg1;
- (id)replayMomentsView;
- (void)setReplayMomentsView:(id)arg1;
- (void)setReplayMomentsLogic:(id)arg1;
- (id)replayRateButton;
- (void)setReplayRateButton:(id)arg1;
- (id)replayRateOperationView;
- (void)setReplayRateOperationView:(id)arg1;
- (double)currentRate;
- (void)setCurrentRate:(double)arg1;
- (id)rateAutoIncreaseTipView;
- (void)setRateAutoIncreaseTipView:(id)arg1;
- (id)tryViewLiveBar;
- (void)setTryViewLiveBar:(id)arg1;
- (id)trialTimeOutMaskView;
- (void)setTrialTimeOutMaskView:(id)arg1;
- (id)trialTimeoutCoverView;
- (void)setTrialTimeoutCoverView:(id)arg1;
- (id)trialTimeoutCoverMaskView;
- (void)setTrialTimeoutCoverMaskView:(id)arg1;
- (id)trialTimeoutPromptLabel;
- (void)setTrialTimeoutPromptLabel:(id)arg1;
- (id)orientationButton;
- (void)setOrientationButton:(id)arg1;
- (id)messageSource;
- (void)setMessageSource:(id)arg1;
- (unsigned long long)lastMessageUpdateTime;
- (void)setLastMessageUpdateTime:(unsigned long long)arg1;
- (BOOL)supressMessageUpdate;
- (void)setSupressMessageUpdate:(BOOL)arg1;
- (id)giftRecievingAnimationView;
- (void)setGiftRecievingAnimationView:(id)arg1;
- (id)rewardRecievingLogic;
- (void)setRewardRecievingLogic:(id)arg1;
- (id)waterMarkView;
- (void)setWaterMarkView:(id)arg1;
- (id)audioOnlyIndicatorView;
- (void)setAudioOnlyIndicatorView:(id)arg1;
- (id)audioOnlyIndicatorLabel;
- (void)setAudioOnlyIndicatorLabel:(id)arg1;
- (id)barrageView;
- (void)setBarrageView:(id)arg1;
- (id)stopgapIndicatorView;
- (void)setStopgapIndicatorView:(id)arg1;
- (id)stopgapIndicatorLabel;
- (void)setStopgapIndicatorLabel:(id)arg1;
- (id)loadingRing;
- (void)setLoadingRing:(id)arg1;
- (BOOL)isClickFirst;
- (void)setIsClickFirst:(BOOL)arg1;
- (BOOL)isLongPressing;
- (void)setIsLongPressing:(BOOL)arg1;
- (BOOL)isPlayerControlWidgetsEnableDisplay;
- (void)setIsPlayerControlWidgetsEnableDisplay:(BOOL)arg1;
- (id)paymentPolicyIntroSheet;
- (void)setPaymentPolicyIntroSheet:(id)arg1;
- (id)paymentConfirmPanel;
- (void)setPaymentConfirmPanel:(id)arg1;
- (id /* block */)pendingPaymentBlock;
- (void)setPendingPaymentBlock:(id /* block */)arg1;
- (unsigned int)pendingPaymentPrice;
- (void)setPendingPaymentPrice:(unsigned int)arg1;
- (BOOL)paymentOrientationObserverRegistered;
- (void)setPaymentOrientationObserverRegistered:(BOOL)arg1;
- (void).cxx_destruct;
@end
