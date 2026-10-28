@interface MMBGMCoverImageView : MMWebImageView
{
    UIView * _curMaskView; // +0x18
    PAGView * _dotPagView; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)startAnimation;
- (void)stopAnimation;
- (void)initView;
- (void)initMaskView;
- (void)initDotPagView;
- (void)layoutSubviews;
- (id)curMaskView;
- (void)setCurMaskView:(id)arg1;
- (id)dotPagView;
- (void)setDotPagView:(id)arg1;
- (void).cxx_destruct;
@end
