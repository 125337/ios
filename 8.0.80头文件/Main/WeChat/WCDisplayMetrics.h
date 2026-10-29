@interface WCDisplayMetrics : NSObject
{
    long long _preferredFramesPerSecond; // +0x8
    double _beginTime; // +0x10
    double _endTime; // +0x18
    long long _totalFrames; // +0x20
    double _minimumFrameDuration; // +0x28
    double _maximumFrameDuration; // +0x30
}
- (id)init;
- (void)screenDidUpdateAtTime:(double)arg1;
- (double)duration;
- (double)framesPerSecond;
- (double)averageFrameDuration;
- (id)description;
- (long long)preferredFramesPerSecond;
- (void)setPreferredFramesPerSecond:(long long)arg1;
- (double)beginTime;
- (double)endTime;
- (long long)totalFrames;
- (double)minimumFrameDuration;
- (double)maximumFrameDuration;
@end
