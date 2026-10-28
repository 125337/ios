@interface MMOrderCenterTableViewCellBase : UITableViewCell
{
    MMCustomerOrderInfo * _order; // +0x8
    UIView * _containerView; // +0x10
    UIView * _highlightingView; // +0x18
}
+ (double)availableContentWidthForCellWidth:(double)arg1;
+ (double)cellHeightForOrder:(id)arg1 inWidth:(double)arg2 estimate:(BOOL)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateCellWithOrder:(id)arg1;
- (void)updateContainerViewHeight:(double)arg1;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (id)order;
- (void)setOrder:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)highlightingView;
- (void)setHighlightingView:(id)arg1;
- (void).cxx_destruct;
@end
