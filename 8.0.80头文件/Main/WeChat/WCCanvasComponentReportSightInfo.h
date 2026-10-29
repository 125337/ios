@interface WCCanvasComponentReportSightInfo : WCCanvasComponentReportBasicInfo
{
    unsigned int _sightDuration; // +0x20
    unsigned int _playTimeInterval; // +0x24
    unsigned int _playCount; // +0x28
    unsigned int _playCompletedCount; // +0x2c
    unsigned int _clickVoiceControlCount; // +0x30
    unsigned int _isAutoPlay; // +0x34
    unsigned int _clickSightCount; // +0x38
    unsigned int _streamVideoEnterCount; // +0x3c
    unsigned int _streamVideoPlayCount; // +0x40
    unsigned int _streamVideoPlayCompleteCount; // +0x44
    int _isNewUI; // +0x48
    unsigned long long _streamVideoTotalPlayTimeInMs; // +0x50
    WCCanvasComponentReportUrlInfo * _thumbUrlInfo; // +0x58
    WCCanvasComponentReportUrlInfo * _sightUrlInfo; // +0x60
    unsigned long long _clickFullscreenBtnCount; // +0x68
    unsigned long long _doubleClickCount; // +0x70
    unsigned long long _clickSightIconCount; // +0x78
    unsigned long long _clickPlayControlCount; // +0x80
    WCCanvasComponentReportVideoFloatAreaInfo * _floatAreaInfo; // +0x88
}
- (id)initWithCid:(id)arg1;
- (id)dictionaryRepresentation;
- (unsigned int)sightDuration;
- (void)setSightDuration:(unsigned int)arg1;
- (unsigned int)playTimeInterval;
- (void)setPlayTimeInterval:(unsigned int)arg1;
- (unsigned int)playCount;
- (void)setPlayCount:(unsigned int)arg1;
- (unsigned int)playCompletedCount;
- (void)setPlayCompletedCount:(unsigned int)arg1;
- (unsigned int)clickVoiceControlCount;
- (void)setClickVoiceControlCount:(unsigned int)arg1;
- (unsigned int)isAutoPlay;
- (void)setIsAutoPlay:(unsigned int)arg1;
- (unsigned int)clickSightCount;
- (void)setClickSightCount:(unsigned int)arg1;
- (unsigned int)streamVideoEnterCount;
- (void)setStreamVideoEnterCount:(unsigned int)arg1;
- (unsigned int)streamVideoPlayCount;
- (void)setStreamVideoPlayCount:(unsigned int)arg1;
- (unsigned int)streamVideoPlayCompleteCount;
- (void)setStreamVideoPlayCompleteCount:(unsigned int)arg1;
- (unsigned long long)streamVideoTotalPlayTimeInMs;
- (void)setStreamVideoTotalPlayTimeInMs:(unsigned long long)arg1;
- (id)thumbUrlInfo;
- (void)setThumbUrlInfo:(id)arg1;
- (id)sightUrlInfo;
- (void)setSightUrlInfo:(id)arg1;
- (unsigned long long)clickFullscreenBtnCount;
- (void)setClickFullscreenBtnCount:(unsigned long long)arg1;
- (unsigned long long)doubleClickCount;
- (void)setDoubleClickCount:(unsigned long long)arg1;
- (unsigned long long)clickSightIconCount;
- (void)setClickSightIconCount:(unsigned long long)arg1;
- (unsigned long long)clickPlayControlCount;
- (void)setClickPlayControlCount:(unsigned long long)arg1;
- (int)isNewUI;
- (void)setIsNewUI:(int)arg1;
- (id)floatAreaInfo;
- (void)setFloatAreaInfo:(id)arg1;
- (void).cxx_destruct;
@end
