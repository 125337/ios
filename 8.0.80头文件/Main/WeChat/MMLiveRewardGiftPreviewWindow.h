@interface MMLiveRewardGiftPreviewWindow : MMRectTriangleArrowView <CAAnimationDelegate, MMFinderLiveGiftResourceMgrExt, MMLiveRewardGiftNewCustomizationMagicRewardResExt, PAGViewListener, RfxPagViewListener>
{
    BOOL _isMultipleReward; // +0x8
    BOOL _isPrepared; // +0x9
    BOOL _needAutoUpdate; // +0xa
    BOOL _isUseRfxPagView; // +0xb
    BOOL _isPlayingFullPag; // +0xc
    id <MMLiveRewardGiftPreviewWindowDelegate> _delegate; // +0x10
    id /* block */ _rewardGiftClickedCallback; // +0x18
    id /* block */ _longPressedCallback; // +0x20
    MMFinderLiveRewardGiftItem * _giftItem; // +0x28
    id /* block */ _isPreparedChangedCallback; // +0x30
    UIView * _menuBubbleHostView; // +0x38
    MMUIView * _backgroundView; // +0x40
    MMUIView * _contentView; // +0x48
    WCFinderAnimationLoadingView * _prepareLoadingView; // +0x50
    PAGView * _previewAnimationView; // +0x58
    PAGView * _fullAnimationView; // +0x60
    RfxPagView * _previewRfxAnimationView; // +0x68
    RfxPagView * _fullRfxAnimationView; // +0x70
    NSString * _currentResourceId; // +0x78
    NSString * _currentFullPagMd5; // +0x80
    NSString * _currentFullPagUrl; // +0x88
    unsigned long long _currentMemoryCacheOptions; // +0x90
    MMUIView * _fullPagGradientMaskView; // +0x98
    MMUIButton * _sendButton; // +0xa0
    MMFinderLiveTaskId * _taskId; // +0xa8
    UILongPressGestureRecognizer * _sendButtonLongPressGesture; // +0xb0
    MMUILabel * _activityDescriptionLabel; // +0xb8
    unsigned long long _mode; // +0xc0
    UIImageView * _coinIconView; // +0xc8
    MMUILabel * _priceLabel; // +0xd0
    MMLiveAIGCGiftProgressView * _aigcGeneratingProgressView; // +0xd8
    MMLiveRewardGiftMenuBubbleView * _menuBubbleView; // +0xe0
    CGRect _previewAnimationViewFrame; // +0xe8
}
- (id)initWithFrame:(CGRect)arg1 taskId:(id)arg2 isMultipleReward:(BOOL)arg3;
- (void)dealloc;
- (void)dismissWithoutAnimation;
- (void)dismissWithAnimation;
- (void)clearAllState;
- (void)updateWithGiftItem:(id)arg1 mode:(unsigned long long)arg2;
- (void)updateSendButtonWithGiftItem;
- (BOOL)needDisplayAIGCProgressRing;
- (id)sendButtonGiftTitle;
- (void)initUI;
- (void)layoutAIGCProgressView;
- (void)updateMagicRewardResourceExtRegister;
- (void)updatePreviewViewDesc;
- (void)onSendButtonClickedStart;
- (void)onSendButtonClickedEnd;
- (void)checkIsPrepared;
- (void)updateIsPrepared:(BOOL)arg1;
- (void)updateUIForPrepareStateChange;
- (void)ensureAnimationViewsCreated;
- (void)updateAllAnimationViewFrames:(CGRect)arg1;
- (void)updateFullAnimationViewFrameForComposition;
- (void)updateFullPagGradientMaskForHostBounds:(CGRect)arg1;
- (void)centerAllAnimationViews;
- (double)currentAnimationViewBottom;
- (void)ensureFullPagGradientMaskCreated;
- (void)updatePreviewAnimationViewHidden;
- (id)sendButtonLongPressGesture;
- (void)onLongpressSendButton:(id)arg1;
- (id)shouldShowMenuItemForAudience:(id)arg1;
- (id)collectMenuItemForAction:(unsigned long long)arg1;
- (id)collectMenuItemsForGiftItem:(id)arg1;
- (id)customizationMenuItemForGiftItem:(id)arg1;
- (id)designerMenuItemForGiftItem:(id)arg1;
- (id)packageGiftMenuItemForGiftItem:(id)arg1;
- (void)onPackageGiftMenuItem:(id)arg1;
- (id)menuItemsForAudience:(id)arg1;
- (void)hideMenuItemsForAudience:(id)arg1;
- (void)showMenuItemsForAudience:(id)arg1;
- (void)showMenuBubbleWithItems:(id)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (void)onCollectGiftAddItem:(id)arg1;
- (void)onCollectGiftUnsupportedItem:(id)arg1;
- (void)onCustomizationMenuItem:(id)arg1;
- (void)onDesignerMenuPlaceholderItem:(id)arg1;
- (void)onCollectManageItem:(id)arg1;
- (void)onCollectGiftMoveToFrontItem:(id)arg1;
- (void)onCollectGiftRemoveItem:(id)arg1;
- (void)notifyCollectGiftAction:(unsigned long long)arg1;
- (void)onAIGCPreviewItem:(id)arg1;
- (void)onActionJumpActivityItem:(id)arg1;
- (void)preloadFullPagResource;
- (BOOL)shouldPlayFullPag;
- (void)switchToFullPag;
- (void)switchToPreviewPag;
- (void)onAnimationEnd:(id)arg1;
- (void)onRfxAnimationEnd:(id)arg1;
- (void)onLiveGiftResDownloadCompleted:(id)arg1 resType:(long long)arg2 productId:(id)arg3 downloadUrl:(id)arg4;
- (void)onMagicRewardResourceStateChanged:(unsigned long long)arg1 resource:(id)arg2;
- (id)liveTask;
- (BOOL)needDisplayFansGroupEntrance;
- (double)triangeArrowWidth;
- (double)triangeArrowHeight;
- (double)selfCornerRadius;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id /* block */)rewardGiftClickedCallback;
- (void)setRewardGiftClickedCallback:(id /* block */)arg1;
- (id /* block */)longPressedCallback;
- (void)setLongPressedCallback:(id /* block */)arg1;
- (BOOL)isMultipleReward;
- (void)setIsMultipleReward:(BOOL)arg1;
- (id)giftItem;
- (void)setGiftItem:(id)arg1;
- (BOOL)isPrepared;
- (void)setIsPrepared:(BOOL)arg1;
- (BOOL)needAutoUpdate;
- (void)setNeedAutoUpdate:(BOOL)arg1;
- (id /* block */)isPreparedChangedCallback;
- (void)setIsPreparedChangedCallback:(id /* block */)arg1;
- (id)menuBubbleHostView;
- (void)setMenuBubbleHostView:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)prepareLoadingView;
- (void)setPrepareLoadingView:(id)arg1;
- (id)previewAnimationView;
- (void)setPreviewAnimationView:(id)arg1;
- (id)fullAnimationView;
- (void)setFullAnimationView:(id)arg1;
- (id)previewRfxAnimationView;
- (void)setPreviewRfxAnimationView:(id)arg1;
- (id)fullRfxAnimationView;
- (void)setFullRfxAnimationView:(id)arg1;
- (BOOL)isUseRfxPagView;
- (void)setIsUseRfxPagView:(BOOL)arg1;
- (BOOL)isPlayingFullPag;
- (void)setIsPlayingFullPag:(BOOL)arg1;
- (id)currentResourceId;
- (void)setCurrentResourceId:(id)arg1;
- (id)currentFullPagMd5;
- (void)setCurrentFullPagMd5:(id)arg1;
- (id)currentFullPagUrl;
- (void)setCurrentFullPagUrl:(id)arg1;
- (unsigned long long)currentMemoryCacheOptions;
- (void)setCurrentMemoryCacheOptions:(unsigned long long)arg1;
- (CGRect)previewAnimationViewFrame;
- (void)setPreviewAnimationViewFrame:(CGRect)arg1;
- (id)fullPagGradientMaskView;
- (void)setFullPagGradientMaskView:(id)arg1;
- (id)sendButton;
- (void)setSendButton:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (void)setSendButtonLongPressGesture:(id)arg1;
- (id)activityDescriptionLabel;
- (void)setActivityDescriptionLabel:(id)arg1;
- (unsigned long long)mode;
- (void)setMode:(unsigned long long)arg1;
- (id)coinIconView;
- (void)setCoinIconView:(id)arg1;
- (id)priceLabel;
- (void)setPriceLabel:(id)arg1;
- (id)aigcGeneratingProgressView;
- (void)setAigcGeneratingProgressView:(id)arg1;
- (id)menuBubbleView;
- (void)setMenuBubbleView:(id)arg1;
- (void).cxx_destruct;
@end
