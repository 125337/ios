@interface MMLiveBeautyNavigatorItemView : UIView
{
    BOOL _selected; // +0x8
    id _item; // +0x10
    UILabel * _labelView; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (id)label;
- (void)setLabel:(id)arg1;
- (void)setSelected:(BOOL)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (id)item;
- (void)setItem:(id)arg1;
- (BOOL)selected;
- (id)labelView;
- (void)setLabelView:(id)arg1;
- (void).cxx_destruct;
@end
