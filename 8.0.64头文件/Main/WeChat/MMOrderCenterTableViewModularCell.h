@interface MMOrderCenterTableViewModularCell : MMOrderCenterTableViewCellBase <MMOrderCenterTableViewCellComponentAggregatedDelegate>
{
    id <MMOrderCenterTableViewModularCellDelegate> _delegate; // +0x8
    UIView<MMOrderCenterTableViewCellComponent> * _headerView; // +0x10
    UIView<MMOrderCenterTableViewCellComponent> * _skuListView; // +0x18
    UIView<MMOrderCenterTableViewCellComponent> * _trackingView; // +0x20
    UIView<MMOrderCenterTableViewCellComponent> * _priceView; // +0x28
    UIView<MMOrderCenterTableViewCellComponent> * _timeReviewView; // +0x30
    UIView<MMOrderCenterTableViewCellComponent> * _finderRefererView; // +0x38
    NSArray * _components; // +0x40
}
+ (double)cellHeightForOrder:(id)arg1 inWidth:(double)arg2 estimate:(BOOL)arg3;
- (void)updateCellWithOrder:(id)arg1;
- (void)layoutSubviews;
- (void)onCellWillDisplay;
- (void)onFinderRefererTapped;
- (void)onStoreAvatarTapped;
- (void)onExpandTapped;
- (void)onTrackingViewTapped;
- (void)onReviewButtonTapped;
- (void)reportEvent:(id)arg1 params:(id)arg2;
- (CGPoint)layoutComponent:(id)arg1 atPosition:(CGPoint)arg2 withBottomMargin:(double)arg3;
- (id)updateComponent:(id)arg1 ofClass:(Class)arg2 withOrder:(id)arg3;
- (void)updateAccessibilityElements;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (id)skuListView;
- (void)setSkuListView:(id)arg1;
- (id)trackingView;
- (void)setTrackingView:(id)arg1;
- (id)priceView;
- (void)setPriceView:(id)arg1;
- (id)timeReviewView;
- (void)setTimeReviewView:(id)arg1;
- (id)finderRefererView;
- (void)setFinderRefererView:(id)arg1;
- (id)components;
- (void)setComponents:(id)arg1;
- (void).cxx_destruct;
@end
