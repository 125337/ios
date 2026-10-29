@interface MMLiveRewardGiftPreviewWindow : MMRectTriangleArrowView <CAAnimationDelegate, MMFinderLiveGiftResourceMgrExt, MMLiveRewardGiftNewCustomizationMagicRewardResExt>
{
    BOOL _isMultipleReward; // +0x8
    BOOL _isPrepared; // +0x9
    BOOL _needAutoUpdate; // +0xa
    id <MMLiveRewardGiftPreviewWindowDelegate> _delegate; // +0x10
    id /* block */ _rewardGiftClickedCallback; // +0x18
    id /* block */ _longPressedCallback; // +0x20
    MMFinderLiveRewardGiftItem * _giftItem; // +0x28
    MMUIView * _backgroundView; // +0x30
    MMUIView * _contentView; // +0x38
    WCFinderAnimationLoadingView * _prepareLoadingView; // +0x40
    PAGView * _previewAnimationView; // +0x48
    MMUIButton * _sendButton; // +0x50
    MMFinderLiveTaskId * _taskId; // +0x58
    UILongPressGestureRecognizer * _sendButtonLongPressGesture; // +0x60
    MMUILabel * _activityDescriptionLabel; // +0x68
    unsigned long long _mode; // +0x70
    UIImageView * _coinIconView; // +0x78
    MMUILabel * _priceLabel; // +0x80
}
- (id)initWithFrame:(CGRect)arg1 taskId:(id)arg2 isMultipleReward:(BOOL)arg3;
- (void)dealloc;
- (void)dismissWithoutAnimation;
- (void)dismissWithAnimation;
- (void)clearAllState;
- (void)updateWithGiftItem:(id)arg1 mode:(unsigned long long)arg2;
- (void)updateSendButtonWithGiftItem;
- (void)initUI;
- (void)updateMagicRewardResourceExtRegister;
- (void)updatePreviewViewDesc;
- (void)onSendButtonClickedStart;
- (void)onSendButtonClickedEnd;
- (void)checkIsPrepared;
- (void)updateIsPrepared:(BOOL)arg1;
- (void)updateUIForPrepareStateChange;
- (void)updatePreviewAnimationViewHidden;
- (id)sendButtonLongPressGesture;
- (void)onLongpressSendButton:(id)arg1;
- (void)showMenuItemsForAudience:(id)arg1;
- (void)onActionJumpActivityItem:(id)arg1;
- (void)onLiveGiftResDownloadCompleted:(id)arg1 retry:(unsigned long long)arg2 totalLength:(unsigned long long)arg3 resType:(long long)arg4 productId:(id)arg5 downloadUrl:(id)arg6;
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
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)prepareLoadingView;
- (void)setPrepareLoadingView:(id)arg1;
- (id)previewAnimationView;
- (void)setPreviewAnimationView:(id)arg1;
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
- (void).cxx_destruct;
@end

