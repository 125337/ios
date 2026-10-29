@interface MMFinderLiveMilestoneLotteryBannerView : UIView <MMFinderLiveMilestoneLotteryViewModelExt>
{
    UIImageView * _bannerImageView; // +0x8
    UILabel * _textLabel; // +0x10
    UIView * _bannerContainerView; // +0x18
    UILabel * _pagCountdownLabel; // +0x20
    LOTAnimationView * _lotPacketView; // +0x28
    PAGView * _pagPacketView; // +0x30
    CAGradientLayer * _pagCountdownGradientBGLayer; // +0x38
}
+ (CGSize)sizeWithText:(id)arg1;
+ (CGSize)packetAnimationSize;
+ (double)widthWithoutText;
- (id)init;
- (id)initWithFrame:(CGRect)arg1;
- (void)commonInit;
- (void)resizeComponentsIfNeeded;
- (void)layoutSubviews;
- (void)onOngoingLotteryCountdown:(id)arg1 remainingSeconds:(unsigned int)arg2;
- (void)setText:(id)arg1;
- (void)showLotteryPacketViewWithCurrentSeconds:(unsigned int)arg1;
- (void)switchToBannerStyle;
- (void)switchToPacketStyle;
- (void)updateCountdownLabelWithSeconds:(unsigned int)arg1;
- (void)onAppBecomeActive;
- (BOOL)isUsePAG;
- (id)bannerContainerView;
- (id)textLabel;
- (id)bannerImageView;
- (void)setBannerImageView:(id)arg1;
- (void)setTextLabel:(id)arg1;
- (void)setBannerContainerView:(id)arg1;
- (id)pagCountdownLabel;
- (void)setPagCountdownLabel:(id)arg1;
- (id)lotPacketView;
- (void)setLotPacketView:(id)arg1;
- (id)pagPacketView;
- (void)setPagPacketView:(id)arg1;
- (id)pagCountdownGradientBGLayer;
- (void)setPagCountdownGradientBGLayer:(id)arg1;
- (void).cxx_destruct;
@end
