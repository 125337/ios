@interface MMFinderLiveLevelUpUnlockGiftView : UIView <MMFinderLiveGiftResourceMgrExt>
{
    unsigned int _unlockType; // +0x8
    id <MMFinderLiveLevelUpUnlockGiftViewDelegate> _delegate; // +0x10
    NSString * _rewardProductId; // +0x18
    MMFinderLiveTaskId * _taskId; // +0x20
    FinderLiveAppMsgLevelUpUnlockGiftInfo * _unlockGiftInfo; // +0x28
    UIView * _containerView; // +0x30
    UIImageView * _thumbnailView; // +0x38
    UILabel * _titleLabel; // +0x40
    UILabel * _giftNameLabel; // +0x48
    UIButton * _sendButton; // +0x50
    MMUIButton * _closeButton; // +0x58
}
- (id)initWithTaskId:(id)arg1;
- (void)dealloc;
- (void)updateWithUnlockGiftInfo:(id)arg1;
- (void)initializeUI;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)onSendButtonTapped;
- (void)onCloseButtonTapped;
- (void)loadThumbnailWithUrl:(id)arg1 md5:(id)arg2 productId:(id)arg3;
- (void)onLiveGiftResDownloadCompleted:(id)arg1 resType:(long long)arg2 productId:(id)arg3 downloadUrl:(id)arg4;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)rewardProductId;
- (void)setRewardProductId:(id)arg1;
- (unsigned int)unlockType;
- (void)setUnlockType:(unsigned int)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)unlockGiftInfo;
- (void)setUnlockGiftInfo:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)thumbnailView;
- (void)setThumbnailView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)giftNameLabel;
- (void)setGiftNameLabel:(id)arg1;
- (id)sendButton;
- (void)setSendButton:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (void).cxx_destruct;
@end
