@interface WCFinderLiveHomePageAggregationECGridGroup : UIView <MMFinderLiveAggregationCardGridProductInfoViewDelegate>
{
    id <WCFinderLiveHomePageAggregationECGridGroupDelegate> _delegate; // +0x8
    NSMutableArray * _productGroup; // +0x10
    UIView * _containerView; // +0x18
    NSMutableArray * _productViews; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)updateWithGroup:(id)arg1 hotSellingOptions:(id)arg2;
- (void)onFinderLiveGenericProductInfoViewStartHotSellingAnimation:(id)arg1;
- (void)onFinderLiveGenericProductInfoViewStopHotSellingAnimation:(id)arg1;
- (BOOL)enableFinderLiveGenericProductInfoViewHotSellingAnimation:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)productGroup;
- (void)setProductGroup:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)productViews;
- (void)setProductViews:(id)arg1;
- (void).cxx_destruct;
@end
