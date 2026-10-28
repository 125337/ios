@interface QPinAnnotationView : QAnnotationView <CAAnimationDelegate>
{
    BOOL _animatesDrop; // +0x8
    int _pinColor; // +0xc
    UIImageView * _shadowImageView; // +0x10
    CGRect _validRect; // +0x18
}
- (id)imageForPinColor:(int)arg1;
- (id)liftImageForPinColor:(int)arg1;
- (id)shadowImageView;
- (id)shadowAnimationFromPoint:(CGPoint *)arg1 toPoint:(CGPoint *)arg2 duration:(double)arg3 completion:(id /* block */)arg4;
- (id)dropAnimationWithFromPoint:(CGPoint)arg1 completion:(id /* block */)arg2;
- (void)changeToLift:(BOOL)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)setPinColor:(int)arg1;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (void)willMoveToSuperview:(id)arg1;
- (void)setDragState:(int)arg1 animated:(BOOL)arg2;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (int)pinColor;
- (void)setShadowImageView:(id)arg1;
- (BOOL)animatesDrop;
- (void)setAnimatesDrop:(BOOL)arg1;
- (CGRect)validRect;
- (void)setValidRect:(CGRect)arg1;
- (void).cxx_destruct;
@end
