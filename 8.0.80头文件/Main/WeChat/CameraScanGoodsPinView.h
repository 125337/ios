@interface CameraScanGoodsPinView : MMUIView
{
    UIImageView * _fgImageView; // +0x8
    UIImageView * _bgImageView; // +0x10
    POPSpringAnimation * _shakingAnimation; // +0x18
}
- (id)init;
- (void)setupSubviews;
- (void)setupAnimation;
- (void)layoutSubviews;
- (void)startShakingAnimation;
- (void)stopShakingAnimation;
- (id)fgImageView;
- (void)setFgImageView:(id)arg1;
- (id)bgImageView;
- (void)setBgImageView:(id)arg1;
- (id)shakingAnimation;
- (void)setShakingAnimation:(id)arg1;
- (void).cxx_destruct;
@end
