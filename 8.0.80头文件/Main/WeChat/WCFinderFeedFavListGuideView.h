@interface WCFinderFeedFavListGuideView : UICollectionReusableView <WCFinderRedPacketBannerViewDelegate>
{
    UIView * _backGroundView; // +0x8
    UIView * _containerView; // +0x10
    WCFinderRedPacketBannerView * _redPacketBannerView; // +0x18
    WCFinderLikeEasterEggLikeListBannerView * _easterEggBannerView; // +0x20
    UIView * _separatorLine; // +0x28
    id <WCFinderFeedFavListGuideViewDelegate> _delegate; // +0x30
    id /* block */ _onEasterEggBannerTapBlock; // +0x38
}
+ (double)defaultHeight;
+ (double)headerHeightByRedpackageTitle:(id)arg1 viewModel:(id)arg2;
+ (double)headerHeightByRedpackageTitle:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setUpUI;
- (void)updateLikeGuideViewByRedpackageInfo:(id)arg1;
- (void)configureWithViewModel:(id)arg1;
- (void)layoutSubviews;
- (void)onRedPacketBannerViewClickAction:(id)arg1;
- (id)backGroundView;
- (void)setBackGroundView:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)redPacketBannerView;
- (void)setRedPacketBannerView:(id)arg1;
- (id)easterEggBannerView;
- (void)setEasterEggBannerView:(id)arg1;
- (id)separatorLine;
- (void)setSeparatorLine:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id /* block */)onEasterEggBannerTapBlock;
- (void)setOnEasterEggBannerTapBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
