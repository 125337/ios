@interface PAGMarker : NSObject
{
    long long _startTime; // +0x8
    long long _duration; // +0x10
    NSString * _comment; // +0x18
}
- (void)dealloc;
- (long long)startTime;
- (void)setStartTime:(long long)arg1;
- (long long)duration;
- (void)setDuration:(long long)arg1;
- (id)comment;
- (void)setComment:(id)arg1;
@end

