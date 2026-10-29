@interface MMFinderLiveGoodsSKUSelectViewTail : UIView
{
    unsigned long long _style; // +0x8
    UILabel * _label; // +0x10
    UIImageView * _iconView; // +0x18
}
- (CGSize)iconSize;
- (id)initWithFrame:(CGRect)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (void)layoutSubviews;
- (id)textForStyle:(unsigned long long)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (unsigned long long)style;
- (id)label;
- (void)setLabel:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (void).cxx_destruct;
@end

