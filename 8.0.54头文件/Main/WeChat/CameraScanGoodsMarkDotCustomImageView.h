@interface CameraScanGoodsMarkDotCustomImageView : UIImageView <CAAnimationDelegate, CameraScanGoodsMarkDotViewInterface>
{
    UIImageView * _fgImageView; // +0x8
    UIImageView * _bgImageView; // +0x10
    CABasicAnimation * _fgImageRotationAnimation; // +0x18
    POPSpringAnimation * _fgImageScaleAnimation; // +0x20
    CAAnimationGroup * _bgImageGroupAnimation; // +0x28
    unsigned long long _fgImageScaleBeginTimestamp; // +0x30
    id /* block */ _completionHandler; // +0x38
}
- (id)initWithCustomImage:(id)arg1;
- (void)setupFgImageRotationAnimation:(id)arg1;
- (void)setupFgImageScaleAnimation;
- (void)setupBgImageGroupAnimation;
- (void)startAnimation;
- (void)startFgImageRotationAnimation;
- (void)stopFgImageRotationAnimation;
- (void)startFgImageScaleAnimation;
- (void)stopFgImageScaleAnimation;
- (void)startBgImageAnimation;
- (void)stopBgImageAnimation;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)pop_animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id)fgImageView;
- (void)setFgImageView:(id)arg1;
- (id)bgImageView;
- (void)setBgImageView:(id)arg1;
- (id)fgImageRotationAnimation;
- (void)setFgImageRotationAnimation:(id)arg1;
- (id)fgImageScaleAnimation;
- (void)setFgImageScaleAnimation:(id)arg1;
- (id)bgImageGroupAnimation;
- (void)setBgImageGroupAnimation:(id)arg1;
- (unsigned long long)fgImageScaleBeginTimestamp;
- (void)setFgImageScaleBeginTimestamp:(unsigned long long)arg1;
- (id /* block */)completionHandler;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end

