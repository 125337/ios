@interface WCAdSliderCardReportItem : NSObject
{
    BOOL _isVideo; // +0x8
    BOOL _hasBorder; // +0x9
    BOOL _playOver1sCountFlag; // +0xa
    int _index; // +0xc
    unsigned int _exposureCount; // +0x10
    unsigned int _autoSlideInCount; // +0x14
    unsigned int _clickCount; // +0x18
    unsigned int _btnClickCount; // +0x1c
    unsigned int _productClickCount; // +0x20
    unsigned int _playOver1sCount; // +0x24
    unsigned int _finishPlayCount; // +0x28
    WCADVideoPlayInfo * _playInfoForTotalPlayTime; // +0x30
    unsigned long long _maxPlayTime; // +0x38
    unsigned long long _videoTotalTime; // +0x40
    NSString * _extra; // +0x48
}
- (int)index;
- (void)setIndex:(int)arg1;
- (BOOL)isVideo;
- (void)setIsVideo:(BOOL)arg1;
- (BOOL)hasBorder;
- (void)setHasBorder:(BOOL)arg1;
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
- (unsigned int)playOver1sCount;
- (void)setPlayOver1sCount:(unsigned int)arg1;
- (unsigned int)finishPlayCount;
- (void)setFinishPlayCount:(unsigned int)arg1;
- (id)playInfoForTotalPlayTime;
- (void)setPlayInfoForTotalPlayTime:(id)arg1;
- (unsigned long long)maxPlayTime;
- (void)setMaxPlayTime:(unsigned long long)arg1;
- (unsigned long long)videoTotalTime;
- (void)setVideoTotalTime:(unsigned long long)arg1;
- (id)extra;
- (void)setExtra:(id)arg1;
- (BOOL)playOver1sCountFlag;
- (void)setPlayOver1sCountFlag:(BOOL)arg1;
- (void).cxx_destruct;
@end
