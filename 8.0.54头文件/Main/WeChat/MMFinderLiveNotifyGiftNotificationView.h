@interface MMFinderLiveNotifyGiftNotificationView : UIView <MMFinderLiveGiftResourceMgrExt>
{
    id <MMFinderLiveNotifyGiftNotificationViewDelegate> _delegate; // +0x8
    UIView * _contentView; // +0x10
    FinderJumpInfo * _jumpInfo; // +0x18
    CAGradientLayer * _gradientLayer; // +0x20
    UIView * _gradientBackgroundView; // +0x28
    MMUILabel * _descriptionLabel; // +0x30
    UIImageView * _giftImageView; // +0x38
    PAGView * _giftAnimationView; // +0x40
    UIImageView * _arrowView; // +0x48
    FinderLiveAppMsgLiveRewardInfo * _rewardInfo; // +0x50
    MMFinderLiveRewardGiftItem * _giftItem; // +0x58
}
+ (double)viewHeight;
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)updateWithJumpInfo:(id)arg1;
- (void)loadAndPlayGiftAnimationWithPAGFile:(id)arg1;
- (void)playGiftAnimation;
- (void)stopGiftAnimation;
- (void)updateDescriptionLabel:(id)arg1;
- (void)onTap:(id)arg1;
- (void)onLiveGiftResDownloadCompleted:(id)arg1 retry:(unsigned long long)arg2 totalLength:(unsigned long long)arg3 resType:(long long)arg4 productId:(id)arg5 downloadUrl:(id)arg6;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)jumpInfo;
- (void)setJumpInfo:(id)arg1;
- (id)gradientLayer;
- (void)setGradientLayer:(id)arg1;
- (id)gradientBackgroundView;
- (void)setGradientBackgroundView:(id)arg1;
- (id)descriptionLabel;
- (void)setDescriptionLabel:(id)arg1;
- (id)giftImageView;
- (void)setGiftImageView:(id)arg1;
- (id)giftAnimationView;
- (void)setGiftAnimationView:(id)arg1;
- (id)arrowView;
- (void)setArrowView:(id)arg1;
- (id)rewardInfo;
- (void)setRewardInfo:(id)arg1;
- (id)giftItem;
- (void)setGiftItem:(id)arg1;
- (void).cxx_destruct;
@end

