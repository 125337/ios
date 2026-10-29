@interface MMScheduleItem : NSObject <NSCopying>
{
    NSString * _displayStr; // +0x8
    double _timeInterval; // +0x10
}
- (id)copyWithZone:(_NSZone *)arg1;
- (id)initWithDisplayStr:(id)arg1 time:(double)arg2;
- (id)displayStr;
- (void)setDisplayStr:(id)arg1;
- (double)timeInterval;
- (void)setTimeInterval:(double)arg1;
- (void).cxx_destruct;
@end

