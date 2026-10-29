@interface CameraScanCodesMarkDotView : UIView
{
    UIImageView * _dotView; // +0x8
    MMUIButton * _clickButton; // +0x10
    CAAnimationGroup * _showAnimation; // +0x18
    CAAnimationGroup * _breatheAnimation; // +0x20
    CameraScanCodesMarkDotInfo * _markDotInfo; // +0x28
    id /* block */ _clickBlock; // +0x30
}
- (id)init;
- (void)setupSubviews;
- (void)setupShowAnimation;
- (void)setupBreatheAnimation;
- (void)layoutSubviews;
- (void)startShowAnimationWithIsMultiCodes:(BOOL)arg1;
- (void)startBreatheAnimation;
- (void)stopAllAnimations;
- (void)onButtonClicked:(id)arg1;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (id)markDotInfo;
- (void)setMarkDotInfo:(id)arg1;
- (id /* block */)clickBlock;
- (void)setClickBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

