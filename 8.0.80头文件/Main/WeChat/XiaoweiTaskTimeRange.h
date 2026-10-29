@interface XiaoweiTaskTimeRange : MMObject <NSCopying, NSSecureCoding>
{
    unsigned int _startTime; // +0x8
    unsigned int _endTime; // +0xc
}
+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)startTime;
- (void)setStartTime:(unsigned int)arg1;
- (unsigned int)endTime;
- (void)setEndTime:(unsigned int)arg1;
@end
