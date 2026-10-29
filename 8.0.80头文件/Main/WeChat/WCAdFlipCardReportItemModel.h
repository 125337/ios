@interface WCAdFlipCardReportItemModel : NSObject
{
    unsigned int _exposureCount; // +0x8
    unsigned int _playCount; // +0xc
    unsigned int _finishPlayCount; // +0x10
    unsigned long long _index; // +0x18
    unsigned long long _playTotalTime; // +0x20
    unsigned long long _videoTotalTime; // +0x28
}
- (id)initWithReportItem:(id)arg1;
- (unsigned long long)index;
- (void)setIndex:(unsigned long long)arg1;
- (unsigned int)exposureCount;
- (void)setExposureCount:(unsigned int)arg1;
- (unsigned int)playCount;
- (void)setPlayCount:(unsigned int)arg1;
- (unsigned int)finishPlayCount;
- (void)setFinishPlayCount:(unsigned int)arg1;
- (unsigned long long)playTotalTime;
- (void)setPlayTotalTime:(unsigned long long)arg1;
- (unsigned long long)videoTotalTime;
- (void)setVideoTotalTime:(unsigned long long)arg1;
@end
