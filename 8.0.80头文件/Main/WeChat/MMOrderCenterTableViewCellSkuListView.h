@interface MMOrderCenterTableViewCellSkuListView : UIView <MMOrderCenterTableViewCellComponent>
{
    id <MMOrderCenterTableViewCellComponentAggregatedDelegate> _delegate; // +0x8
    MMOrderCenterTableViewCellSkuListExpander * _expander; // +0x10
    NSMutableArray * _accessibilityElementsArray; // +0x18
    NSArray * _skuViews; // +0x20
}
+ (BOOL)shouldUseComponentForOrder:(id)arg1;
+ (double)heightForOrder:(id)arg1 inWidth:(double)arg2 estimate:(BOOL)arg3;
+ (double)expanderHeight;
- (id)initWithFrame:(CGRect)arg1;
- (void)updateWithOrder:(id)arg1;
- (void)addSkuItems:(id)arg1 order:(id)arg2;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)onExpanderTapped;
- (id)accessibilityElements;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)expander;
- (void)setExpander:(id)arg1;
- (id)accessibilityElementsArray;
- (void)setAccessibilityElementsArray:(id)arg1;
- (id)skuViews;
- (void)setSkuViews:(id)arg1;
- (void).cxx_destruct;
@end
