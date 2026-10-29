@interface MMOrderCenterPivotTabView : MMUIView
{
    BOOL _selected; // +0x8
    NSString * _title; // +0x10
    long long _numbering; // +0x18
    UILabel * _titleView; // +0x20
}
- (id)initWithFrame:(CGRect)arg1 title:(id)arg2 numbering:(long long)arg3;
- (void)setTitle:(id)arg1;
- (void)setNumbering:(long long)arg1;
- (void)setSelected:(BOOL)arg1;
- (CGRect)indicatorFrame;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)updateText;
- (id)title;
- (long long)numbering;
- (BOOL)selected;
- (id)titleView;
- (void)setTitleView:(id)arg1;
- (void).cxx_destruct;
@end
