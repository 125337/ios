@interface WCFinderWrapFlexLayout : UIView
{
    BOOL _isNeedFlexLayout; // +0x8
    double _rowGap; // +0x10
    double _itemGap; // +0x18
    NSMapTable * _layoutInfo; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setRowGap:(double)arg1;
- (void)setItemGap:(double)arg1;
- (void)didAddSubview:(id)arg1;
- (void)willRemoveSubview:(id)arg1;
- (void)_setNeedRelayoutFlex;
- (void)_flexRelayout;
- (void)_flexRelayout:(double)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)setNeedsLayout;
- (void)layoutSubviews;
- (double)rowGap;
- (double)itemGap;
- (BOOL)isNeedFlexLayout;
- (void)setIsNeedFlexLayout:(BOOL)arg1;
- (id)layoutInfo;
- (void)setLayoutInfo:(id)arg1;
- (void).cxx_destruct;
@end
