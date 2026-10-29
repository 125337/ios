@interface OTMTimeRange : NSObject <NSCopying>
{
    OTMTime * _start; // +0x8
    OTMTime * _duration; // +0x10
    XTMTimeRange _backingTimeRange; // +0x18
}
+ (id)zeroTimeRange;
+ (id)invalidTimeRange;
+ (id)timeRangeWithStartTime:(id)arg1 duration:(id)arg2;
+ (id)timeRangeWithBackingTimeRange:(XTMTimeRange)arg1;
- (id)initWithBackingTimeRange:(XTMTimeRange)arg1;
- (id)initWithStartTime:(id)arg1 duration:(id)arg2;
- (BOOL)containsTime:(id)arg1;
- (id)timeForRatio:(double)arg1;
- (id)description;
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isValid;
- (BOOL)isEmpty;
- (void)setStart:(id)arg1;
- (void)setDuration:(id)arg1;
- (id)end;
- (XTMTimeRange)backingTimeRange;
- (id)start;
- (id)duration;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

