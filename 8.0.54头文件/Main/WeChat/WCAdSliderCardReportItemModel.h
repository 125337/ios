@interface WCAdSliderCardReportItemModel : NSObject
{
    int _index; // +0x8
    int _mediaType; // +0xc
    int _hasBorder; // +0x10
    unsigned int _exposureCount; // +0x14
    unsigned int _autoSlideInCount; // +0x18
    unsigned int _clickCount; // +0x1c
    unsigned int _btnClickCount; // +0x20
    unsigned int _productClickCount; // +0x24
    unsigned int _playCount; // +0x28
    unsigned int _finishPlayCount; // +0x2c
    unsigned long long _playTotalTime; // +0x30
    unsigned long long _maxPlayTime; // +0x38
    unsigned long long _videoTotalTime; // +0x40
}
- (int)index;
- (void)setIndex:(int)arg1;
- (int)mediaType;
- (void)setMediaType:(int)arg1;
- (int)hasBorder;
- (void)setHasBorder:(int)arg1;
- (unsigned int)exposureCount;
- (void)setExposureCount:(unsigned int)arg1;
- (unsigned int)autoSlideInCount;
- (void)setAutoSlideInCount:(unsigned int)arg1;
- (unsigned int)clickCount;
- (void)setClickCount:(unsigned int)arg1;
- (unsigned int)btnClickCount;
- (void)setBtnClickCount:(unsigned int)arg1;
- (unsigned int)productClickCount;
- (void)setProductClickCount:(unsigned int)arg1;
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

