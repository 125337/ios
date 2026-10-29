@interface CameraScanGoodsMarkDotGreenDotView : UIImageView <CAAnimationDelegate, CameraScanGoodsMarkDotViewInterface>
{
    CAAnimationGroup * _greenDotGroupAnimation; // +0x8
    id /* block */ _completionHandler; // +0x10
}
- (id)init;
- (void)setupGreenDotGroupAnimation;
- (void)startAnimation;
- (void)startGreenDotAnimation;
- (void)stopGreenDotAnimation;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id)greenDotGroupAnimation;
- (void)setGreenDotGroupAnimation:(id)arg1;
- (id /* block */)completionHandler;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end

