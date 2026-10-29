@interface WCAdCardMultiProductsAnimationObject : MMObject
{
    UIView * _relatedView; // +0x8
    double _duration; // +0x10
    double _delay; // +0x18
    double _fromOpacity; // +0x20
    double _toOpacity; // +0x28
    NSNumber * _persistOpacity; // +0x30
    CAMediaTimingFunction * _timingFunction; // +0x38
    NSValue * _previousCenter; // +0x40
    CGPoint _fromPosition; // +0x48
    CGPoint _toPosition; // +0x58
}
- (id)relatedView;
- (void)setRelatedView:(id)arg1;
- (double)duration;
- (void)setDuration:(double)arg1;
- (double)delay;
- (void)setDelay:(double)arg1;
- (CGPoint)fromPosition;
- (void)setFromPosition:(CGPoint)arg1;
- (CGPoint)toPosition;
- (void)setToPosition:(CGPoint)arg1;
- (double)fromOpacity;
- (void)setFromOpacity:(double)arg1;
- (double)toOpacity;
- (void)setToOpacity:(double)arg1;
- (id)persistOpacity;
- (void)setPersistOpacity:(id)arg1;
- (id)timingFunction;
- (void)setTimingFunction:(id)arg1;
- (id)previousCenter;
- (void)setPreviousCenter:(id)arg1;
- (void).cxx_destruct;
@end

