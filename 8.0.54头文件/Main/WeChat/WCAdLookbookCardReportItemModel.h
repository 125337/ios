@interface WCAdLookbookCardReportItemModel : NSObject
{
    int _mediaType; // +0x8
    unsigned int _exposureCount; // +0xc
    unsigned int _clickCount; // +0x10
    unsigned int _playCount; // +0x14
    unsigned int _finishPlayCount; // +0x18
    unsigned long long _index; // +0x20
    unsigned long long _playTotalTime; // +0x28
    unsigned long long _maxPlayTime; // +0x30
    unsigned long long _videoTotalTime; // +0x38
}
- (id)initWithReportItem:(id)arg1;
- (unsigned long long)index;
- (void)setIndex:(unsigned long long)arg1;
- (int)mediaType;
- (void)setMediaType:(int)arg1;
- (unsigned int)exposureCount;
- (void)setExposureCount:(unsigned int)arg1;
- (unsigned int)clickCount;
- (void)setClickCount:(unsigned int)arg1;
- (unsigned int)playCount;
- (void)setPlayCount:(unsigned int)arg1;
- (unsigned int)finishPlayCount;
- (void)setFinishPlayCount:(unsigned int)arg1;
- (unsigned long long)playTotalTime;
- (void)setPlayTotalTime:(unsigned long long)arg1;
- (unsigned long long)maxPlayTime;
- (void)setMaxPlayTime:(unsigned long long)arg1;
- (unsigned long long)videoTotalTime;
- (void)setVideoTotalTime:(unsigned long long)arg1;
@end

