@interface BTOftenReadHeaderView : UIView
{
    MMUILabel * _firstTitleLabel; // +0x8
    MMUILabel * _secondTitleLabel; // +0x10
    double _titleSpacing; // +0x18
}
- (id)init;
- (void)initSubviews;
- (void)updateWithFirstTitle:(id)arg1 secondTitle:(id)arg2;
- (void)setTitleSpacing:(double)arg1;
- (void)layoutSubviews;
- (id)firstTitleLabel;
- (void)setFirstTitleLabel:(id)arg1;
- (id)secondTitleLabel;
- (void)setSecondTitleLabel:(id)arg1;
- (double)titleSpacing;
- (void).cxx_destruct;
@end
