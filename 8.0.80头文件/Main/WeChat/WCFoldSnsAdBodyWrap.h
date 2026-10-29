@interface WCFoldSnsAdBodyWrap : NSObject
{
    BOOL _isExposed; // +0x8
    BOOL _isHalfExposed; // +0x9
    BOOL _isHalfExposing; // +0xa
    unsigned long long _halfStartTime; // +0x10
    unsigned long long _halfEndTime; // +0x18
    double _halfExposedTime; // +0x20
    WCADVideoPlayInfo * _playInfo; // +0x28
    WCFoldSliderAdBodyWrap * _sliderReportInfo; // +0x30
}
- (unsigned long long)halfStartTime;
- (void)setHalfStartTime:(unsigned long long)arg1;
- (unsigned long long)halfEndTime;
- (void)setHalfEndTime:(unsigned long long)arg1;
- (double)halfExposedTime;
- (void)setHalfExposedTime:(double)arg1;
- (id)playInfo;
- (void)setPlayInfo:(id)arg1;
- (BOOL)isExposed;
- (void)setIsExposed:(BOOL)arg1;
- (BOOL)isHalfExposed;
- (void)setIsHalfExposed:(BOOL)arg1;
- (BOOL)isHalfExposing;
- (void)setIsHalfExposing:(BOOL)arg1;
- (id)sliderReportInfo;
- (void)setSliderReportInfo:(id)arg1;
- (void).cxx_destruct;
@end
