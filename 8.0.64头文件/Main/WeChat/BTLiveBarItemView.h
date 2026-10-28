@interface BTLiveBarItemView : MMUIButton <MMWebImageViewDelegate>
{
    unsigned int _index; // +0x8
    BTLiveBarItemViewModel * _itemViewModel; // +0x10
    UIView * _containerView; // +0x18
    MMHeadImageView * _headImageView; // +0x20
    MMUILabel * _brandNameLabel; // +0x28
    UIView * _headImageBorderView; // +0x30
    MMWebImageView * _liveImageView; // +0x38
    CAGradientLayer * _mainColorGradientLayer; // +0x40
    CAGradientLayer * _shadowGradientLayer; // +0x48
}
+ (double)iconWidth;
- (id)initWithViewModel:(id)arg1;
- (void)updateViewModel:(id)arg1;
- (unsigned int)index;
- (void)setHighlighted:(BOOL)arg1;
- (void)initSubviews;
- (void)updateHeaderView;
- (void)layoutSubviews;
- (void)onLoadImageOK:(id)arg1;
- (id)itemViewModel;
- (void)setItemViewModel:(id)arg1;
- (void)setIndex:(unsigned int)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)brandNameLabel;
- (void)setBrandNameLabel:(id)arg1;
- (id)headImageBorderView;
- (void)setHeadImageBorderView:(id)arg1;
- (id)liveImageView;
- (void)setLiveImageView:(id)arg1;
- (id)mainColorGradientLayer;
- (void)setMainColorGradientLayer:(id)arg1;
- (id)shadowGradientLayer;
- (void)setShadowGradientLayer:(id)arg1;
- (void).cxx_destruct;
@end
