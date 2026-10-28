@interface MMFinderLiveFeedStreamProductStyleView : MMFinderLiveFeedStreamWidgetBaseView <MMFinderLiveFeedStreamProductCardViewDelegate, MMFinderLiveFeedStreamProductGuideViewDelegate, MMFinderLiveFeedStreamProductExpandedCardViewDelegate>
{
    id <MMFinderLiveFeedStreamProductStyleViewDelegate> _delegate; // +0x8
    unsigned long long _style; // +0x10
    FeedsPreviewLiveMultiStyleInfo_StyleOne * _productGuideStyleConf; // +0x18
    FeedsPreviewLiveMultiStyleInfo_StyleTwo * _productCardStyleConf; // +0x20
    FeedsPreviewLiveMultiStyleInfo_StyleFive * _productExpandedCardStyleConf; // +0x28
    FinderWindowProductInfo * _productInfo; // +0x30
    NSString * _productGuideRecommendTag; // +0x38
    FinderLiveSyncFeedPreviewMultiStyleInfoResp_HotShopInfo * _hotSellingBubble; // +0x40
    FinderLiveSyncFeedPreviewMultiStyleInfoResp_RecommendCouponInfo * _couponBubble; // +0x48
    MMFinderLiveFeedStreamProductCardView * _cardStyleView; // +0x50
    MMFinderLiveFeedStreamProductGuideView * _guideStyleView; // +0x58
    MMFinderLiveFeedStreamProductExpandedCardView * _expandedCardStyleView; // +0x60
    MMFinderLiveFeedStreamProductHotSellingView * _hotSellingStyleView; // +0x68
    MMFinderLiveFeedStreamProductCouponView * _couponStyleView; // +0x70
    double _maxWidth; // +0x78
}
- (void)prepareForReuse;
- (void)resetViews;
- (id)currentCard;
- (void)setStyle:(unsigned long long)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (void)addExpandAnimationBlock:(id /* block */)arg1;
- (void)setProductInfo:(id)arg1;
- (id)reportWording;
- (void)setProductGuideRecommendTag:(id)arg1;
- (void)updateProductGuideRecommendTag:(id)arg1 type:(unsigned long long)arg2;
- (void)setProductCardStyleConf:(id)arg1;
- (void)setHotSellingBubble:(id)arg1;
- (void)setCouponBubble:(id)arg1;
- (void)setTaskId:(id)arg1;
- (BOOL)validToShow;
- (void)startExposeAction;
- (void)endExposeAction;
- (id)cardStyleView;
- (id)guideStyleView;
- (id)expandedCardStyleView;
- (id)hotSellingStyleView;
- (id)couponStyleView;
- (void)onFinderFeedStreamProductCardViewClick:(id)arg1 jump2Type:(unsigned long long)arg2;
- (void)onFinderFeedStreamProductGuideViewClick:(id)arg1;
- (void)onFinderFeedStreamProductExpandedCardViewClick:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)style;
- (id)productGuideStyleConf;
- (void)setProductGuideStyleConf:(id)arg1;
- (id)productCardStyleConf;
- (id)productExpandedCardStyleConf;
- (void)setProductExpandedCardStyleConf:(id)arg1;
- (id)productInfo;
- (id)productGuideRecommendTag;
- (id)hotSellingBubble;
- (id)couponBubble;
- (void)setCardStyleView:(id)arg1;
- (void)setGuideStyleView:(id)arg1;
- (void)setExpandedCardStyleView:(id)arg1;
- (void)setHotSellingStyleView:(id)arg1;
- (void)setCouponStyleView:(id)arg1;
- (double)maxWidth;
- (void)setMaxWidth:(double)arg1;
- (void).cxx_destruct;
@end
