@interface MMUIView : UIView
{
    UIEdgeInsets _expendTouchInsets; // +0x8
}
+ (double)shakeHeadAnimationDurationForType:(unsigned long long)arg1;
- (void)prepareShakeHead;
- (void)prepareShakeHeadForType:(unsigned long long)arg1;
- (void)shakeHead;
- (void)shakeHeadForType:(unsigned long long)arg1;
- (void)stopShakeHead;
- (id)shakeHeadAnimationForTimeOffset:(double)arg1 andType:(unsigned long long)arg2;
- (id)defaultShakeHeadAnimation;
- (id)crookShakeHeadAnimationNeedReverse:(BOOL)arg1;
- (id)shakeHeadAnimation;
- (double)arcWithAngle:(double)arg1;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (UIEdgeInsets)expendTouchInsets;
- (void)setExpendTouchInsets:(UIEdgeInsets)arg1;
@end

