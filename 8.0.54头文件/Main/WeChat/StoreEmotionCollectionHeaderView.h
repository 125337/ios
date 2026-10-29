@interface StoreEmotionCollectionHeaderView : UICollectionReusableView
{
    UIView * _bottomLine; // +0x8
    UILabel * _titleLabel; // +0x10
    UIView * _topLine; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)showBottomLine;
- (void)hideBottomLine;
- (void)setTitleLabelX:(double)arg1;
- (void)setLineViewColor:(id)arg1;
- (void)setupViews;
- (void)setHeaderViewTitle:(id)arg1;
- (void)setHeaderFont:(id)arg1;
- (void)setHeaderX:(double)arg1;
- (void)setHeaderColor:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)topLine;
- (void)setTopLine:(id)arg1;
- (void).cxx_destruct;
@end

