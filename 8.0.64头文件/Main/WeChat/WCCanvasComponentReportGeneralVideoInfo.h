@interface WCCanvasComponentReportGeneralVideoInfo : WCCanvasComponentReportBasicInfo
{
    unsigned int _videoDuration; // +0x20
    unsigned int _playTimeInterval; // +0x24
    unsigned int _playCount; // +0x28
    unsigned int _playCompletedCount; // +0x2c
    unsigned int _clickPlayControlCount; // +0x30
    unsigned int _clickVoiceControlCount; // +0x34
    unsigned int _isAutoPlay; // +0x38
    unsigned long long _clickSightCount; // +0x40
    unsigned long long _clickFullscreenBtnCount; // +0x48
    unsigned long long _doubleClickCount; // +0x50
    unsigned long long _clickSightIconCount; // +0x58
    WCCanvasComponentReportUrlInfo * _thumbUrlInfo; // +0x60
    WCCanvasComponentReportUrlInfo * _videoUrlInfo; // +0x68
    WCCanvasComponentReportVideoFloatAreaInfo * _floatAreaInfo; // +0x70
}
- (id)initWithCid:(id)arg1;
- (id)dictionaryRepresentation;
- (unsigned int)videoDuration;
- (void)setVideoDuration:(unsigned int)arg1;
- (unsigned int)playTimeInterval;
- (void)setPlayTimeInterval:(unsigned int)arg1;
- (unsigned int)playCount;
- (void)setPlayCount:(unsigned int)arg1;
- (unsigned int)playCompletedCount;
- (void)setPlayCompletedCount:(unsigned int)arg1;
- (unsigned int)clickPlayControlCount;
- (void)setClickPlayControlCount:(unsigned int)arg1;
- (unsigned int)clickVoiceControlCount;
- (void)setClickVoiceControlCount:(unsigned int)arg1;
- (unsigned int)isAutoPlay;
- (void)setIsAutoPlay:(unsigned int)arg1;
- (unsigned long long)clickSightCount;
- (void)setClickSightCount:(unsigned long long)arg1;
- (unsigned long long)clickFullscreenBtnCount;
- (void)setClickFullscreenBtnCount:(unsigned long long)arg1;
- (unsigned long long)doubleClickCount;
- (void)setDoubleClickCount:(unsigned long long)arg1;
- (unsigned long long)clickSightIconCount;
- (void)setClickSightIconCount:(unsigned long long)arg1;
- (id)thumbUrlInfo;
- (void)setThumbUrlInfo:(id)arg1;
- (id)videoUrlInfo;
- (void)setVideoUrlInfo:(id)arg1;
- (id)floatAreaInfo;
- (void)setFloatAreaInfo:(id)arg1;
- (void).cxx_destruct;
@end
