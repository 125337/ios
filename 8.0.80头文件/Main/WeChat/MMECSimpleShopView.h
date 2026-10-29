@interface MMECSimpleShopView : MMUIView
{
    MMWebImageView * _platformIconView; // +0x8
    MMWebImageView * _brandIconView; // +0x10
    UILabel * _label; // +0x18
}
+ (double)preferHeight;
- (double)platformIconToLabel;
- (double)brandIconToLabel;
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubViews;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)updateWithInfo:(id)arg1;
- (id)platformIconView;
- (void)setPlatformIconView:(id)arg1;
- (id)brandIconView;
- (void)setBrandIconView:(id)arg1;
- (id)label;
- (void)setLabel:(id)arg1;
- (void).cxx_destruct;
@end
