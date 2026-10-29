@interface WeDropSelectFileBtn : MMUIButton
{
    NSString * _iconName; // +0x8
    NSString * _title; // +0x10
    double _topPadding; // +0x18
    UIView * _iconView; // +0x20
    UIView * _arrowView; // +0x28
    UILabel * _titleView; // +0x30
}
- (id)initWithIcon:(id)arg1 title:(id)arg2 topPadding:(double)arg3;
- (void)initSubviews;
- (void)layoutSubviews;
- (id)iconName;
- (void)setIconName:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (double)topPadding;
- (void)setTopPadding:(double)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)arrowView;
- (void)setArrowView:(id)arg1;
- (id)titleView;
- (void)setTitleView:(id)arg1;
- (void).cxx_destruct;
@end
