@interface MMOrderCenterTableViewCellPriceView : UIView <MMOrderCenterTableViewCellComponent>
{
    id <MMOrderCenterTableViewCellComponentAggregatedDelegate> _delegate; // +0x8
    MMCustomerOrderInfo * _order; // +0x10
    NSArray * _labels; // +0x18
}
+ (id)fontForType:(int)arg1;
+ (BOOL)shouldUseComponentForOrder:(id)arg1;
+ (void)getPartsLineIndexWith:(id)arg1 getSize:(id /* block */)arg2 getFont:(id /* block */)arg3 maxWidth:(double)arg4 partResultAction:(id /* block */)arg5;
+ (double)heightForOrder:(id)arg1 inWidth:(double)arg2 estimate:(BOOL)arg3;
+ (id)itemCountLocalizedStringForOrder:(id)arg1;
+ (long long)itemCountInOrder:(id)arg1;
+ (id)pricePartsForOrder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)updateWithOrder:(id)arg1;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)accessibilityElements;
- (BOOL)isAccessibilityElement;
- (CGRect)accessibilityFrame;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)order;
- (void)setOrder:(id)arg1;
- (id)labels;
- (void)setLabels:(id)arg1;
- (void).cxx_destruct;
@end
