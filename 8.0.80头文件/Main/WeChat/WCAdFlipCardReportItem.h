@interface WCAdFlipCardReportItem : NSObject
{
    BOOL _isVideo; // +0x8
    BOOL _playOver1sCountFlag; // +0x9
    unsigned int _exposureCount; // +0xc
    unsigned int _playOver1sCount; // +0x10
    unsigned int _finishPlayCount; // +0x14
    unsigned long long _index; // +0x18
    WCADVideoPlayInfo * _playInfoForTotalPlayTime; // +0x20
    unsigned long long _videoTotalTime; // +0x28
}
- (unsigned long long)index;
- (void)setIndex:(unsigned long long)arg1;
- (BOOL)isVideo;
- (void)setIsVideo:(BOOL)arg1;
- (unsigned int)exposureCount;
- (void)setExposureCount:(unsigned int)arg1;
- (unsigned int)playOver1sCount;
- (void)setPlayOver1sCount:(unsigned int)arg1;
- (unsigned int)finishPlayCount;
- (void)setFinishPlayCount:(unsigned int)arg1;
- (id)playInfoForTotalPlayTime;
- (void)setPlayInfoForTotalPlayTime:(id)arg1;
- (unsigned long long)videoTotalTime;
- (void)setVideoTotalTime:(unsigned long long)arg1;
- (BOOL)playOver1sCountFlag;
- (void)setPlayOver1sCountFlag:(BOOL)arg1;
- (void).cxx_destruct;
@end
