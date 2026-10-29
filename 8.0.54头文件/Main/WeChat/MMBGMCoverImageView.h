@interface MMBGMCoverImageView : MMWebImageView
{
    UIView * _maskView; // +0x18
    PAGView * _dotPagView; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)startAnimation;
- (void)stopAnimation;
- (void)initView;
- (void)initMaskView;
- (void)initDotPagView;
- (void)layoutSubviews;
- (id)maskView;
- (void)setMaskView:(id)arg1;
- (id)dotPagView;
- (void)setDotPagView:(id)arg1;
- (void).cxx_destruct;
@end

