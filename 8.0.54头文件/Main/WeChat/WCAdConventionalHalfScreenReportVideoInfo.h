@interface WCAdConventionalHalfScreenReportVideoInfo : NSObject
{
    unsigned long long _videoDuration; // +0x8
    unsigned long long _playTimeInterval; // +0x10
    unsigned long long _playCount; // +0x18
    unsigned long long _playCompletedCount; // +0x20
}
- (unsigned long long)videoDuration;
- (void)setVideoDuration:(unsigned long long)arg1;
- (unsigned long long)playTimeInterval;
- (void)setPlayTimeInterval:(unsigned long long)arg1;
- (unsigned long long)playCount;
- (void)setPlayCount:(unsigned long long)arg1;
- (unsigned long long)playCompletedCount;
- (void)setPlayCompletedCount:(unsigned long long)arg1;
@end

