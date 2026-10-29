@interface ABAReportPrams : NSObject
{
    BOOL _useEncodeParams; // +0x8
    BOOL _useABA; // +0x9
    BOOL _skipVideoCompress; // +0xa
    BOOL _inputVideoIsVFR; // +0xb
    BOOL _vcodec2Preset; // +0xc
    int _averageQP; // +0x10
    int _averageMV; // +0x14
    int _skipMode; // +0x18
    int _intraMode; // +0x1c
    int _interMode; // +0x20
    int _skipReadQP; // +0x24
    int _ratioBitrateQP; // +0x28
    int _complexity; // +0x2c
    int _qualityLevel; // +0x30
    float _auQualityLevel; // +0x34
    VideoEncodeParams * _videoEncodeParams; // +0x38
    double _inputVideoMaxFps; // +0x40
    double _inputVideoMinFps; // +0x48
}
- (id)init;
- (int)averageQP;
- (void)setAverageQP:(int)arg1;
- (int)averageMV;
- (void)setAverageMV:(int)arg1;
- (int)skipMode;
- (void)setSkipMode:(int)arg1;
- (int)intraMode;
- (void)setIntraMode:(int)arg1;
- (int)interMode;
- (void)setInterMode:(int)arg1;
- (int)skipReadQP;
- (void)setSkipReadQP:(int)arg1;
- (int)ratioBitrateQP;
- (void)setRatioBitrateQP:(int)arg1;
- (int)complexity;
- (void)setComplexity:(int)arg1;
- (int)qualityLevel;
- (void)setQualityLevel:(int)arg1;
- (float)auQualityLevel;
- (void)setAuQualityLevel:(float)arg1;
- (BOOL)useEncodeParams;
- (void)setUseEncodeParams:(BOOL)arg1;
- (id)videoEncodeParams;
- (void)setVideoEncodeParams:(id)arg1;
- (BOOL)useABA;
- (void)setUseABA:(BOOL)arg1;
- (BOOL)skipVideoCompress;
- (void)setSkipVideoCompress:(BOOL)arg1;
- (BOOL)inputVideoIsVFR;
- (void)setInputVideoIsVFR:(BOOL)arg1;
- (double)inputVideoMaxFps;
- (void)setInputVideoMaxFps:(double)arg1;
- (double)inputVideoMinFps;
- (void)setInputVideoMinFps:(double)arg1;
- (BOOL)vcodec2Preset;
- (void)setVcodec2Preset:(BOOL)arg1;
- (void).cxx_destruct;
@end

