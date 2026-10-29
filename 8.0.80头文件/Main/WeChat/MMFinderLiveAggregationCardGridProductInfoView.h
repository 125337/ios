@interface MMFinderLiveAggregationCardGridProductInfoView : UIView <MMFinderLiveHotSaleAnimationDelegate>
{
    id <MMFinderLiveAggregationCardGridProductInfoViewDelegate> _delegate; // +0x8
    FinderLiveAggregationCardProduct * _aggregationCardProduct; // +0x10
    id /* block */ _onTapped; // +0x18
    id /* block */ _getHotSellingPAGFile; // +0x20
    MMWebImageView * _productImgView; // +0x28
    UILabel * _promotingLabel; // +0x30
    CAGradientLayer * _promotingGradientLayer; // +0x38
    MMFinderLiveHotSaleAnimationLogic * _animationLogic; // +0x40
    MMFinderLiveGoodsHotSaleAnimationView * _hotSaleAnimationView; // +0x48
    FinderLiveEcGetLiveConfigResponse_ShowAnimation_HotSellingOptions * _hotSellingOptions; // +0x50
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initViews;
- (void)onSelfTapped;
- (void)updateAggregationCardProduct:(id)arg1;
- (id)priceString:(unsigned long long)arg1;
- (void)updateProductImageUrl:(id)arg1;
- (void)updateProductSales:(unsigned long long)arg1;
- (void)updateText:(id)arg1;
- (void)updateHotSellingOps:(id)arg1;
- (BOOL)enableHotSellingAnimation;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)startHotSaleAnimation:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)updateHotSaleAnimation:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)finishHotSaleAnimation:(id /* block */)arg1;
- (BOOL)hasAnimationResource;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)aggregationCardProduct;
- (void)setAggregationCardProduct:(id)arg1;
- (id /* block */)onTapped;
- (void)setOnTapped:(id /* block */)arg1;
- (id /* block */)getHotSellingPAGFile;
- (void)setGetHotSellingPAGFile:(id /* block */)arg1;
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
- (id)hotSellingOptions;
- (void)setHotSellingOptions:(id)arg1;
- (void).cxx_destruct;
@end
