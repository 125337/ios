@interface MMFinderLiveGroupedProductsLabelButton : UIButton
{
    FinderLiveGetPairingTabResponse_PairingLabel * _data; // +0x8
    UIView * _pointView; // +0x10
    UIImageView * _iconView; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)setData:(id)arg1;
- (id)data;
- (id)pointView;
- (void)setPointView:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (void).cxx_destruct;
@end
