@interface OQPInterpolator : NSObject
{
    id /* block */ _valueForProgress; // +0x8
}
+ (id)linearInterpolator;
- (id)initWithInterpolationBlock:(id /* block */)arg1;
- (long long)integerBetweenValue:(long long)arg1 andValue:(long long)arg2 progress:(double)arg3;
- (double)floatBetweenValue:(double)arg1 andValue:(double)arg2 progress:(double)arg3;
- (CGPoint)pointBetweenValue:(CGPoint)arg1 andValue:(CGPoint)arg2 progress:(double)arg3;
- (CGSize)sizeBetweenValue:(CGSize)arg1 andValue:(CGSize)arg2 progress:(double)arg3;
- (CGRect)rectBetweenValue:(CGRect)arg1 andValue:(CGRect)arg2 progress:(double)arg3;
- (CGAffineTransform)affineTransformBetweenValue:(CGAffineTransform)arg1 andValue:(CGAffineTransform)arg2 progress:(double)arg3;
- (id /* block */)valueForProgress;
- (void).cxx_destruct;
@end

