@interface WCFinderLiveTopicTemplateProductView : UIView <MMFinderLiveHotSaleAnimationDelegate, MMWebImageViewDelegate>
{
    FinderWindowProductInfo * _productInfo; // +0x8
    id /* block */ _onTapped; // +0x10
    id /* block */ _getPAGFile; // +0x18
    FinderLiveEcGetLiveConfigResponse_ShowAnimation_HotSellingOptions * _hotSellingOptions; // +0x20
    MMWebImageView * _productImgView; // +0x28
    UILabel * _promotingLabel; // +0x30
    CAGradientLayer * _promotingGradientLayer; // +0x38
    MMFinderLiveHotSaleAnimationLogic * _animationLogic; // +0x40
    MMFinderLiveGoodsHotSaleAnimationView * _hotSaleAnimationView; // +0x48
    PAGView * _playingIconView; // +0x50
}
- (id)init;
- (void)doInit;
- (void)layoutSubviews;
- (void)setProductInfo:(id)arg1;
- (void)initPromotingViews;
- (void)onSelfTapped;
- (void)setPromotingViewsAlpha:(double)arg1;
- (void)startHotSaleAnimation:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)updateHotSaleAnimation:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)finishHotSaleAnimation:(id /* block */)arg1;
- (BOOL)hasAnimationResource;
- (void)setHotSellingOptions:(id)arg1;
- (void)onLoadImageOK:(id)arg1;
- (void)onLoadImageFail:(id)arg1 extraInfo:(id)arg2;
- (id)productInfo;
- (id /* block */)onTapped;
- (void)setOnTapped:(id /* block */)arg1;
- (id /* block */)getPAGFile;
- (void)setGetPAGFile:(id /* block */)arg1;
- (id)hotSellingOptions;
- (id)productImgView;
- (void)setProductImgView:(id)arg1;
- (id)promotingLabel;
- (void)setPromotingLabel:(id)arg1;
- (id)promotingGradientLayer;
- (void)setPromotingGradientLayer:(id)arg1;
- (id)animationLogic;
- (void)setAnimationLogic:(id)arg1;
- (id)hotSaleAnimationView;
- (void)setHotSaleAnimationView:(id)arg1;
- (id)playingIconView;
- (void)setPlayingIconView:(id)arg1;
- (void).cxx_destruct;
@end

