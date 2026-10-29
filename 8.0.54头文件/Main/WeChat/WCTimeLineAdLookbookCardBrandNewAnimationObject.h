@interface WCTimeLineAdLookbookCardBrandNewAnimationObject : NSObject
{
    UIView * _relatedView; // +0x8
    double _duration; // +0x10
    double _delay; // +0x18
    CAMediaTimingFunction * _timingFunction; // +0x20
    double _cornerRadius; // +0x28
    CGPoint _fromPosition; // +0x30
    CGPoint _toPosition; // +0x40
    CGSize _fromSize; // +0x50
    CGSize _toSize; // +0x60
}
- (id)relatedView;
- (void)setRelatedView:(id)arg1;
- (double)duration;
- (void)setDuration:(double)arg1;
- (double)delay;
- (void)setDelay:(double)arg1;
- (id)timingFunction;
- (void)setTimingFunction:(id)arg1;
- (CGPoint)fromPosition;
- (void)setFromPosition:(CGPoint)arg1;
- (CGPoint)toPosition;
- (void)setToPosition:(CGPoint)arg1;
- (CGSize)fromSize;
- (void)setFromSize:(CGSize)arg1;
- (CGSize)toSize;
- (void)setToSize:(CGSize)arg1;
- (double)cornerRadius;
- (void)setCornerRadius:(double)arg1;
- (void).cxx_destruct;
@end

