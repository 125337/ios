@interface WCFinderStreamFeedLikeGuideView : UICollectionReusableView <WCFinderRedPacketBannerViewDelegate>
{
    id <WCFinderStreamFeedLikeGuideViewDelegate> _delegate; // +0x8
    UIView * _backGroundView; // +0x10
    UIView * _containerView; // +0x18
    WCFinderRedPacketBannerView * _redPacketBannerView; // +0x20
    WCFinderSelfLikeTipsBannerView * _selfLikeTipsBannerView; // +0x28
    id /* block */ _actionBlock; // +0x30
    id /* block */ _cancelLikeBlock; // +0x38
}
+ (double)headerHeightByShouldShowLikeGuide:(BOOL)arg1 redpackageTitle:(id)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (void)setUpUI;
- (void)buttonAction;
- (void)cancelLikeAction;
- (void)updateContentVM:(id)arg1;
- (void)updateLikeGuideViewIsLike:(BOOL)arg1 redpackageInfo:(id)arg2;
- (void)layoutAllSubviews;
- (void)onRedPacketBannerViewClickAction:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)backGroundView;
- (void)setBackGroundView:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)redPacketBannerView;
- (void)setRedPacketBannerView:(id)arg1;
- (id)selfLikeTipsBannerView;
- (void)setSelfLikeTipsBannerView:(id)arg1;
- (id /* block */)actionBlock;
- (void)setActionBlock:(id /* block */)arg1;
- (id /* block */)cancelLikeBlock;
- (void)setCancelLikeBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
