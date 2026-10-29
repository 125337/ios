@interface OTMTime : NSObject <NSCopying>
{
    XTMTime _backingTime; // +0x8
}
+ (id)zeroTime;
+ (id)invalidTime;
+ (id)positiveInfinityTime;
+ (id)negativeInfinityTime;
+ (id)timeWithSeconds:(double)arg1;
+ (id)timeWithBackingTime:(XTMTime)arg1;
- (id)initWithBackingTime:(XTMTime)arg1;
- (BOOL)isValid;
- (BOOL)isNegative;
- (BOOL)isPositive;
- (BOOL)isNumeric;
- (BOOL)isFiniteNonNegative;
- (BOOL)isFinitePositive;
- (BOOL)isZero;
- (double)seconds;
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToTime:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)timecodeWithFrameDuration:(id)arg1;
- (XTMTime)backingTime;
- (void)setBackingTime:(XTMTime)arg1;
- (id).cxx_construct;
@end

