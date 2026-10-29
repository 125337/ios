@interface MutiSessionCell : ContactMultiSelectCell
{
    double _bottomLineLeftPadding; // +0x8
    UIView * _bottomSeparatorView; // +0x10
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (double)bottomLineLeftPadding;
- (void)setBottomLineLeftPadding:(double)arg1;
- (id)bottomSeparatorView;
- (void)setBottomSeparatorView:(id)arg1;
- (void).cxx_destruct;
@end
