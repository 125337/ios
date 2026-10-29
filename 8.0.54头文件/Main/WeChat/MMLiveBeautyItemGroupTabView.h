@interface MMLiveBeautyItemGroupTabView : UIView
{
    BOOL _selected; // +0x8
    MMLiveBeautyItemGroup * _itemGroup; // +0x10
    id <MMLiveBeautyItemGroupTabViewDelegate> _delegate; // +0x18
    UILabel * _label; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setItemGroup:(id)arg1;
- (void)setSelected:(BOOL)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (void)onTapped;
- (id)itemGroup;
- (BOOL)selected;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)label;
- (void)setLabel:(id)arg1;
- (void).cxx_destruct;
@end

