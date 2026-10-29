@interface MMFinderLiveGiftGoalView : UIView <MMFinderLiveGiftResourceMgrExt, MMFinderLiveRewardRecievingLogicExt, MMLiveRewardGiftRecievingAnimationExt, MMFinderLiveGiftSendMoreBubbleHosting>
{
    BOOL _exposureReported; // +0x8
    BOOL _isAnchorOrAssistant; // +0x9
    BOOL _comboStaging; // +0xa
    BOOL _isInterrupted; // +0xb
    BOOL _useRapidComboRepeat; // +0xc
    MMFinderLiveGiftGoalModel * _model; // +0x10
    id <MMFinderLiveGiftGoalViewDelegate> _delegate; // +0x18
    id <MMLiveRewardGiftSendingMoreLogicDelegate> _logicDelegate; // +0x20
    MMFinderLiveTaskId * _taskId; // +0x28
    MMTimer * _countdownTimer; // +0x30
    NSDateComponentsFormatter * _countdownFormatter; // +0x38
    unsigned long long _sendButtonState; // +0x40
    MMFinderLiveRewardGiftItem * _currentComboGiftItem; // +0x48
    NSString * _currentComboId; // +0x50
    unsigned long long _currentSendingCount; // +0x58
    UIView * _scaleContainer; // +0x60
    MMUIButton * _closeButton; // +0x68
    UIImageView * _thumbnailView; // +0x70
    UIFont * _countLabelsFont; // +0x78
    UILabel * _currentCountLabel; // +0x80
    UILabel * _slashLabel; // +0x88
    UILabel * _targetCountLabel; // +0x90
    MMRollableLabelView * _fulfilledHeaderLabel; // +0x98
    MMRollableLabelView * _descriptionLabel; // +0xa0
    UILabel * _statusLabel; // +0xa8
    MMFinderLiveSpinnerLabel * _statusCountdownSpinnerLabel; // +0xb0
    MMUIButton * _sendButton; // +0xb8
    UIView * _sendButtonBackgroundView; // +0xc0
    UIView * _sendButtonBorderView; // +0xc8
}
- (id)initWithTaskId:(id)arg1;
- (void)dealloc;
- (void)setSendButtonState:(unsigned long long)arg1;
- (void)updateWithGoal:(id)arg1;
- (void)updateWithGoalImpl:(id)arg1 raiseFulfilledEventOnCompletion:(BOOL)arg2;
- (void)revertStagedSendings;
- (void)reportExposure;
- (void)setEnableSendAgainWithGiftItem:(id)arg1 comboId:(id)arg2 targetHost:(unsigned long long)arg3;
- (void)closeCurrentGiftSendingBatchForTargetHost:(unsigned long long)arg1;
- (void)setInterruptedFlag:(BOOL)arg1 targetHost:(unsigned long long)arg2;
- (void)sendFirstGiftComboCountDirectly:(unsigned long long)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (void)onLiveGiftResDownloadCompleted:(id)arg1 resType:(long long)arg2 productId:(id)arg3 downloadUrl:(id)arg4;
- (void)onReceivingGiftAnimationPlayCommand:(id)arg1 forTaskId:(id)arg2 vetoFlag:(BOOL *)arg3;
- (void)onGiftAnimationPlayCommandExecuted:(id)arg1;
- (void)onCloseTapped;
- (void)onSendButtonTapped;
- (void)onSendButtonHeld:(id)arg1;
- (void)onTimerTick;
- (void)initializeComponents;
- (void)setCurrentCountLabelText:(id)arg1 animated:(BOOL)arg2;
- (void)updateDescriptionLabel;
- (void)updateStatusLabel;
- (void)setStatusCountdownSpinnerLabelText:(id)arg1;
- (void)updateSendButton;
- (void)invokeSendButtonHoldRepeatAction;
- (void)invokeSendButtonAnimationWithDuration:(double)arg1;
- (void)startContinuousSendButtonAnimation;
- (void)startSendButtonAnimationWithDuration:(double)arg1 repeatCount:(float)arg2;
- (void)stopSendButtonAnimation;
- (void)resetSendButtonState;
- (id)giftSentFlagsKv;
- (void)setGiftSentForCurrentGoal;
- (BOOL)giftSentForCurrentGoal;
- (id)model;
- (void)setModel:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)logicDelegate;
- (void)setLogicDelegate:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)countdownTimer;
- (void)setCountdownTimer:(id)arg1;
- (id)countdownFormatter;
- (void)setCountdownFormatter:(id)arg1;
- (unsigned long long)sendButtonState;
- (BOOL)exposureReported;
- (void)setExposureReported:(BOOL)arg1;
- (BOOL)isAnchorOrAssistant;
- (void)setIsAnchorOrAssistant:(BOOL)arg1;
- (BOOL)comboStaging;
- (void)setComboStaging:(BOOL)arg1;
- (id)currentComboGiftItem;
- (void)setCurrentComboGiftItem:(id)arg1;
- (id)currentComboId;
- (void)setCurrentComboId:(id)arg1;
- (unsigned long long)currentSendingCount;
- (void)setCurrentSendingCount:(unsigned long long)arg1;
- (BOOL)isInterrupted;
- (void)setIsInterrupted:(BOOL)arg1;
- (BOOL)useRapidComboRepeat;
- (void)setUseRapidComboRepeat:(BOOL)arg1;
- (id)scaleContainer;
- (void)setScaleContainer:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (id)thumbnailView;
- (void)setThumbnailView:(id)arg1;
- (id)countLabelsFont;
- (void)setCountLabelsFont:(id)arg1;
- (id)currentCountLabel;
- (void)setCurrentCountLabel:(id)arg1;
- (id)slashLabel;
- (void)setSlashLabel:(id)arg1;
- (id)targetCountLabel;
- (void)setTargetCountLabel:(id)arg1;
- (id)fulfilledHeaderLabel;
- (void)setFulfilledHeaderLabel:(id)arg1;
- (id)descriptionLabel;
- (void)setDescriptionLabel:(id)arg1;
- (id)statusLabel;
- (void)setStatusLabel:(id)arg1;
- (id)statusCountdownSpinnerLabel;
- (void)setStatusCountdownSpinnerLabel:(id)arg1;
- (id)sendButton;
- (void)setSendButton:(id)arg1;
- (id)sendButtonBackgroundView;
- (void)setSendButtonBackgroundView:(id)arg1;
- (id)sendButtonBorderView;
- (void)setSendButtonBorderView:(id)arg1;
- (void).cxx_destruct;
@end
