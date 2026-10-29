@interface MMFinderLiveFansGroupAnchorEditTableCellBase : UITableViewCell
{
    double _containerBottomMargin; // +0x8
    UIView * _sepLine; // +0x10
    unsigned long long _corners; // +0x18
    UIView * _containerView; // +0x20
    UIImageView * _rightChevronView; // +0x28
    UIView * _highlightView; // +0x30
}
+ (id)reuseId;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateShowSepLine:(BOOL)arg1;
- (void)updateWithRoundedCorners:(unsigned long long)arg1;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)layoutSubviews;
- (double)containerBottomMargin;
- (void)setContainerBottomMargin:(double)arg1;
- (id)sepLine;
- (void)setSepLine:(id)arg1;
- (unsigned long long)corners;
- (void)setCorners:(unsigned long long)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)rightChevronView;
- (void)setRightChevronView:(id)arg1;
- (id)highlightView;
- (void)setHighlightView:(id)arg1;
- (void).cxx_destruct;
@end
