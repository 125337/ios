@interface WCFinderFeedFavListGuideView : UICollectionReusableView <WCFinderRedPacketBannerViewDelegate>
{
    UIView * _backGroundView; // +0x8
    UIView * _containerView; // +0x10
    WCFinderRedPacketBannerView * _redPacketBannerView; // +0x18
    id <WCFinderFeedFavListGuideViewDelegate> _delegate; // +0x20
}
+ (double)defaultHeight;
+ (double)headerHeightByRedpackageTitle:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setUpUI;
- (void)updateLikeGuideViewByRedpackageInfo:(id)arg1;
- (void)onRedPacketBannerViewClickAction:(id)arg1;
- (id)backGroundView;
- (void)setBackGroundView:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)redPacketBannerView;
- (void)setRedPacketBannerView:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
