@interface MMScreenShotForwardButton : MMUIButton
{
    UIImageView * _rightImageView; // +0x8
    UILabel * _centerLabel; // +0x10
    UIView * _hightLightMaskView; // +0x18
    SightIconView * _loadingView; // +0x20
}
- (id)init;
- (void)initView;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)hightLightMaskView;
- (void)setHighlighted:(BOOL)arg1;
- (void)startLoading;
- (void)stopLoading;
- (id)rightImageView;
- (void)setRightImageView:(id)arg1;
- (id)centerLabel;
- (void)setCenterLabel:(id)arg1;
- (void)setHightLightMaskView:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (void).cxx_destruct;
@end
