@interface ThirdPartyServiceListCell : MMUIView
{
    NSString * _title; // +0x8
    MMUILabel * _titleLabel; // +0x10
    UIImageView * _arrowView; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initViews;
- (void)layoutViews;
- (void)layoutSubviews;
- (CGSize)intrinsicContentSize;
- (void)setTitle:(id)arg1;
- (id)arrowView;
- (id)titleLabel;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (id)title;
- (void)setTitleLabel:(id)arg1;
- (void)setArrowView:(id)arg1;
- (void).cxx_destruct;
@end
