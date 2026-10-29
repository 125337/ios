@interface WCCanvasComponentReportStreamVideoInfo : WCCanvasComponentReportBasicInfo
{
    unsigned int _streamVideoDuraion; // +0x20
    unsigned int _playTimeInterval; // +0x24
    unsigned int _playCount; // +0x28
    unsigned int _playCompletedCount; // +0x2c
    unsigned int _clickPlayControlCount; // +0x30
    unsigned int _clickVoiceControlCount; // +0x34
    unsigned int _isAutoPlay; // +0x38
    int _isNewUI; // +0x3c
    WCCanvasComponentReportUrlInfo * _thumbUrlInfo; // +0x40
    WCCanvasComponentReportUrlInfo * _streamVideoUrlInfo; // +0x48
    unsigned long long _clickFullscreenBtnCount; // +0x50
    unsigned long long _doubleClickCount; // +0x58
    unsigned long long _clickSightIconCount; // +0x60
    WCCanvasComponentReportVideoFloatAreaInfo * _floatAreaInfo; // +0x68
}
- (id)initWithCid:(id)arg1;
- (id)dictionaryRepresentation;
- (unsigned int)streamVideoDuraion;
- (void)setStreamVideoDuraion:(unsigned int)arg1;
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
- (id)thumbUrlInfo;
- (void)setThumbUrlInfo:(id)arg1;
- (id)streamVideoUrlInfo;
- (void)setStreamVideoUrlInfo:(id)arg1;
- (unsigned long long)clickFullscreenBtnCount;
- (void)setClickFullscreenBtnCount:(unsigned long long)arg1;
- (unsigned long long)doubleClickCount;
- (void)setDoubleClickCount:(unsigned long long)arg1;
- (unsigned long long)clickSightIconCount;
- (void)setClickSightIconCount:(unsigned long long)arg1;
- (int)isNewUI;
- (void)setIsNewUI:(int)arg1;
- (id)floatAreaInfo;
- (void)setFloatAreaInfo:(id)arg1;
- (void).cxx_destruct;
@end

