@interface MMFinderLiveShopShelfDisplayWindowButton : MMUIButton <MMWebImageViewDelegate>
{
    id <MMFinderLiveShopShelfDisplayWindowButtonLoadDelegate> _delegate; // +0x8
    MMWebImageView * _rIconView; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)updateWithShopWindowInfo:(id)arg1;
- (void)onLoadImageOK:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)rIconView;
- (void)setRIconView:(id)arg1;
- (void).cxx_destruct;
@end
