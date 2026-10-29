@interface WCFinderNativeDramaPromotionCoordinator : NSObject <WCFinderFeedbackViewDelegate>
{
    BOOL _feedInteractionDisabled; // +0x8
    BOOL _denialWeToastVisible; // +0x9
    int _scene; // +0xc
    WCFinderNativeDramaFeedViewModel * _viewModel; // +0x10
    WCFinderFeedListView * _feedListView; // +0x18
    UIView * _containerView; // +0x20
    UIPanGestureRecognizer * _tipsPanGesture; // +0x28
    MMTimer * _promotionTimer; // +0x30
    long long _countDown; // +0x38
    WCFinderFeedContentVM * _countDownContentVM; // +0x40
    WCFinderFeedContentVM * _coveredCountDownContentVM; // +0x48
    NSString * _activeProductPromotionIdentifier; // +0x50
    _TtC6WeChat30FinderNativeDramaFeedTipsToast * _toast; // +0x58
    UIView * _toastHostView; // +0x60
    WCFinderMoreRelatedContentView * _productPromotionBottomTips; // +0x68
    UIView * _productPromotionBottomTipsHostView; // +0x70
    WCFinderAdPromotionButton * _promotionButton; // +0x78
    WCFinderNativeDramaPromotionHitProxyView * _promotionButtonHitProxy; // +0x80
    _TtC6WeChat36FinderNativeDramaPreAdCountdownToast * _preAdCountdownToast; // +0x88
    UIView * _preAdCountdownHostView; // +0x90
    long long _preAdCountdownLastShownSecond; // +0x98
    NSString * _pendingUnlockToastPromotionIdentifier; // +0xa0
    WCFinderFeedbackView * _amsAdFeedbackView; // +0xa8
    WCFinderFeedContentVM * _amsAdFeedbackContentVM; // +0xb0
}
- (id)initWithViewModel:(id)arg1 feedListView:(id)arg2 containerView:(id)arg3 tipsPanGesture:(id)arg4 scene:(int)arg5;
- (void)dealloc;
- (void)handleViewDidAppear;
- (void)viewWillDisappearKeepingCountDown:(BOOL)arg1;
- (void)appWillEnterForeground;
- (void)appDidEnterBackground;
- (void)handleCurrentFeedDidBecomeActive;
- (void)handleMediaStartPlay;
- (void)handleMediaPauseShouldPauseSound:(BOOL)arg1 pauseType:(long long)arg2;
- (void)willDisplayContentVM:(id)arg1 hostView:(id)arg2 safeTopInset:(double)arg3;
- (BOOL)_useAdButton;
- (void)_installLegacyToastOnHost:(id)arg1 adGating:(id)arg2 safeTopInset:(double)arg3;
- (void)_installPromotionButtonOnHost:(id)arg1 adGating:(id)arg2;
- (id)_panelViewForHostView:(id)arg1;
- (void)_installPromotionButtonHitProxyForButton:(id)arg1;
- (void)_layoutPromotionButtonHitProxy;
- (void)_removePromotionButtonHitProxy;
- (void)_jumpToPromotionContent:(id)arg1;
- (void)didEndDisplayingHostView:(id)arg1;
- (void)updateFeedInteractionIfNeeded;
- (void)handleDenialGesture:(id)arg1;
- (void)handleVideoUpdatePosition:(double)arg1 videoDuration:(double)arg2 contentVM:(id)arg3 safeTopInset:(double)arg4;
- (id)_currentDramaHostViewForContentVM:(id)arg1;
- (void)_showPreAdCountdownOnHostView:(id)arg1 safeTopInset:(double)arg2 second:(long long)arg3;
- (void)_hidePreAdCountdownIfHostMatches:(id)arg1;
- (void)handleToastTapWithAnchorHostView:(id)arg1;
- (void)_showDenialToast;
- (void)_showDenialWeToast;
- (void)startCountDownIfNeeded;
- (void)promotionCountDownTimerTrigger;
- (void)_showPromotionCompletedTipsForContentVM:(id)arg1 atIndexPath:(id)arg2;
- (void)_showProductPromotionBottomTipsOnHostView:(id)arg1;
- (void)_removeProductPromotionBottomTipsIfHostMatches:(id)arg1;
- (void)stopTimer;
- (void)_resetActiveProductPromotion;
- (void)updatePromotionToast;
- (void)_updatePromotionButton;
- (void)fetchPromotionWithContentVM:(id)arg1;
- (void)fetchInternalFeedPromotionWithContentVM:(id)arg1;
- (void)disableFeedInteraction;
- (void)enableFeedInteraction;
- (void)removeToastIfNeededFromHostView:(id)arg1;
- (void)_updateToastContent:(long long)arg1;
- (void)_updateToastContent:(long long)arg1 countDown:(long long)arg2;
- (id)_reportToastCommonParams;
- (id)_contentVMForHostView:(id)arg1;
- (CGRect)_amsAdFeedbackAnchorRectInView:(id)arg1;
- (id)_amsAdFeedbackReasonListForGating:(id)arg1;
- (id)_amsAdFeedbackTitleConfig;
- (void)_showAmsAdFeedbackPanelForContentVM:(id)arg1 hostView:(id)arg2;
- (void)_dismissAmsAdFeedbackPanel;
- (id)_amsAdFeedbackParamsForContentVM:(id)arg1;
- (void)_submitAmsAdFeedbackWithType:(int)arg1 reasons:(id)arg2;
- (void)onFinderFeedbackViewLikeButtonDidClick:(id)arg1;
- (void)onFinderFeedbackViewDislikeButtonDidClick:(id)arg1;
- (void)onFinderFeedbackViewComplainButtonDidClick:(id)arg1;
- (void)onFinderFeedbackViewDidCancel:(id)arg1;
- (void)onFinderFeedbackView:(id)arg1 shouldCloseWithReasons:(id)arg2;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)feedListView;
- (void)setFeedListView:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)tipsPanGesture;
- (void)setTipsPanGesture:(id)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (id)promotionTimer;
- (void)setPromotionTimer:(id)arg1;
- (long long)countDown;
- (void)setCountDown:(long long)arg1;
- (id)countDownContentVM;
- (void)setCountDownContentVM:(id)arg1;
- (id)coveredCountDownContentVM;
- (void)setCoveredCountDownContentVM:(id)arg1;
- (id)activeProductPromotionIdentifier;
- (void)setActiveProductPromotionIdentifier:(id)arg1;
- (id)toast;
- (void)setToast:(id)arg1;
- (id)toastHostView;
- (void)setToastHostView:(id)arg1;
- (id)productPromotionBottomTips;
- (void)setProductPromotionBottomTips:(id)arg1;
- (id)productPromotionBottomTipsHostView;
- (void)setProductPromotionBottomTipsHostView:(id)arg1;
- (BOOL)feedInteractionDisabled;
- (void)setFeedInteractionDisabled:(BOOL)arg1;
- (id)promotionButton;
- (void)setPromotionButton:(id)arg1;
- (id)promotionButtonHitProxy;
- (void)setPromotionButtonHitProxy:(id)arg1;
- (BOOL)denialWeToastVisible;
- (void)setDenialWeToastVisible:(BOOL)arg1;
- (id)preAdCountdownToast;
- (void)setPreAdCountdownToast:(id)arg1;
- (id)preAdCountdownHostView;
- (void)setPreAdCountdownHostView:(id)arg1;
- (long long)preAdCountdownLastShownSecond;
- (void)setPreAdCountdownLastShownSecond:(long long)arg1;
- (id)pendingUnlockToastPromotionIdentifier;
- (void)setPendingUnlockToastPromotionIdentifier:(id)arg1;
- (id)amsAdFeedbackView;
- (void)setAmsAdFeedbackView:(id)arg1;
- (id)amsAdFeedbackContentVM;
- (void)setAmsAdFeedbackContentVM:(id)arg1;
- (void).cxx_destruct;
@end
